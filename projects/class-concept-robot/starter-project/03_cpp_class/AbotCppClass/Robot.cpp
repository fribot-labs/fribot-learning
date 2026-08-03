#include "Robot.h"

// ============================================================================
// Constructor
// ============================================================================

Robot::Robot(
  int leftServoPin,
  int rightServoPin,
  int speakerPin
)
  : leftServoPin(leftServoPin),
    rightServoPin(rightServoPin),
    speakerPin(speakerPin),
    leftServoCalibration(0),
    rightServoCalibration(0),
    currentMotion(MOTION_STOPPED),
    currentLeftSpeed(0),
    currentRightSpeed(0),
    currentLeftPulse(SERVO_STOP),
    currentRightPulse(SERVO_STOP),
    servosAttached(false),
    movementCount(0)
{
}

// ============================================================================
// Initialization
// ============================================================================

void Robot::begin()
{
  Serial.println("=== ABOT C++ Class ===");

  playStartupTone();

  attachServos();

  stop();

  Serial.println("[Robot] initialization complete");

  printState();
}

void Robot::playStartupTone()
{
  tone(
    speakerPin,
    3000,
    1000
  );

  delay(1000);
}

// ============================================================================
// Servo connection management
// ============================================================================

void Robot::attachServos()
{
  if (servosAttached)
  {
    return;
  }

  servoLeft.attach(leftServoPin);
  servoRight.attach(rightServoPin);

  servosAttached = true;

  applyServoPulses(
    SERVO_STOP,
    SERVO_STOP
  );

  Serial.println("[Robot] servos attached");
}

void Robot::detachServos()
{
  if (!servosAttached)
  {
    return;
  }

  stop();

  servoLeft.detach();
  servoRight.detach();

  servosAttached = false;

  Serial.println("[Robot] servos detached");
}

// ============================================================================
// Calibration
// ============================================================================

void Robot::setCalibration(
  int leftCalibration,
  int rightCalibration
)
{
  leftServoCalibration = leftCalibration;
  rightServoCalibration = rightCalibration;
}

// ============================================================================
// Basic movement
// ============================================================================

void Robot::moveForward(
  int speed,
  int time
)
{
  speed = abs(clampSpeed(speed));

  updateMotionState(
    MOTION_FORWARD,
    speed,
    speed
  );

  setWheelSpeeds(
    speed,
    speed
  );

  movementCount++;

  printState();

  delay(time);
}

void Robot::moveBackward(
  int speed,
  int time
)
{
  speed = abs(clampSpeed(speed));

  updateMotionState(
    MOTION_BACKWARD,
    -speed,
    -speed
  );

  setWheelSpeeds(
    -speed,
    -speed
  );

  movementCount++;

  printState();

  delay(time);
}

void Robot::turnLeft(
  int speed,
  int time
)
{
  speed = abs(clampSpeed(speed));

  updateMotionState(
    MOTION_TURN_LEFT,
    -speed,
    speed
  );

  setWheelSpeeds(
    -speed,
    speed
  );

  movementCount++;

  printState();

  delay(time);
}

void Robot::turnRight(
  int speed,
  int time
)
{
  speed = abs(clampSpeed(speed));

  updateMotionState(
    MOTION_TURN_RIGHT,
    speed,
    -speed
  );

  setWheelSpeeds(
    speed,
    -speed
  );

  movementCount++;

  printState();

  delay(time);
}

void Robot::pause(int time)
{
  stop();

  delay(time);
}

void Robot::stop()
{
  updateMotionState(
    MOTION_STOPPED,
    0,
    0
  );

  if (servosAttached)
  {
    setWheelSpeeds(
      0,
      0
    );
  }

  printState();
}

// ============================================================================
// Extended movement
// ============================================================================

void Robot::accelerateForward(
  int startSpeed,
  int endSpeed,
  int step,
  int stepTime
)
{
  startSpeed = abs(clampSpeed(startSpeed));
  endSpeed = abs(clampSpeed(endSpeed));
  step = abs(step);

  if (step == 0)
  {
    Serial.println(
      "[Warning] acceleration step cannot be zero"
    );

    return;
  }

  if (startSpeed > endSpeed)
  {
    int temporarySpeed = startSpeed;
    startSpeed = endSpeed;
    endSpeed = temporarySpeed;
  }

  for (
    int speed = startSpeed;
    speed <= endSpeed;
    speed += step
  )
  {
    updateMotionState(
      MOTION_FORWARD,
      speed,
      speed
    );

    setWheelSpeeds(
      speed,
      speed
    );

    printState();

    delay(stepTime);
  }

  movementCount++;

  stop();
}

// ============================================================================
// Movement sequences
// ============================================================================

void Robot::runBasicSequence()
{
  moveForward(140, 1500);

  pause(500);

  turnLeft(140, 800);

  pause(500);

  moveForward(80, 800);

  pause(500);

  turnRight(140, 800);

  pause(500);

  moveBackward(140, 1500);

  stop();
}

void Robot::runSquarePattern(
  int speed,
  int forwardTime,
  int turnTime
)
{
  for (int side = 1; side <= 4; side++)
  {
    Serial.print("[Square] side ");
    Serial.println(side);

    moveForward(
      speed,
      forwardTime
    );

    pause(250);

    turnRight(
      speed,
      turnTime
    );

    pause(250);
  }

  stop();
}

void Robot::runZigzagPattern(
  int speed,
  int forwardTime,
  int turnTime
)
{
  for (
    int section = 1;
    section <= 3;
    section++
  )
  {
    Serial.print("[Zigzag] section ");
    Serial.println(section);

    moveForward(
      speed,
      forwardTime
    );

    turnLeft(
      speed,
      turnTime
    );

    moveForward(
      speed,
      forwardTime
    );

    turnRight(
      speed,
      turnTime
    );
  }

  stop();
}

// ============================================================================
// Wheel speed control
// ============================================================================

void Robot::setWheelSpeeds(
  int leftSpeed,
  int rightSpeed
)
{
  if (!servosAttached)
  {
    Serial.println(
      "[Warning] servos are not attached"
    );

    return;
  }

  leftSpeed = clampSpeed(leftSpeed);
  rightSpeed = clampSpeed(rightSpeed);

  int leftPulse =
    speedToLeftPulse(leftSpeed);

  int rightPulse =
    speedToRightPulse(rightSpeed);

  applyServoPulses(
    leftPulse,
    rightPulse
  );

  currentLeftSpeed = leftSpeed;
  currentRightSpeed = rightSpeed;
}

void Robot::applyServoPulses(
  int leftPulse,
  int rightPulse
)
{
  leftPulse = clampPulse(leftPulse);
  rightPulse = clampPulse(rightPulse);

  currentLeftPulse = leftPulse;
  currentRightPulse = rightPulse;

  servoLeft.writeMicroseconds(
    currentLeftPulse
  );

  servoRight.writeMicroseconds(
    currentRightPulse
  );
}

// ============================================================================
// Speed conversion
// ============================================================================

int Robot::speedToLeftPulse(
  int speed
) const
{
  /*
   * Positive speed means forward.
   *
   * Left wheel forward:
   * 1500 + 200 = 1700
   */

  int pulse =
    SERVO_STOP +
    speed +
    leftServoCalibration;

  return clampPulse(pulse);
}

int Robot::speedToRightPulse(
  int speed
) const
{
  /*
   * Positive speed means forward.
   *
   * Right wheel forward:
   * 1500 - 200 = 1300
   */

  int pulse =
    SERVO_STOP -
    speed +
    rightServoCalibration;

  return clampPulse(pulse);
}

int Robot::clampSpeed(
  int speed
) const
{
  return constrain(
    speed,
    SPEED_MIN,
    SPEED_MAX
  );
}

int Robot::clampPulse(
  int pulse
) const
{
  return constrain(
    pulse,
    SERVO_CLOCKWISE_FULL,
    SERVO_COUNTERCLOCKWISE_FULL
  );
}

// ============================================================================
// State management
// ============================================================================

void Robot::updateMotionState(
  MotionState motion,
  int leftSpeed,
  int rightSpeed
)
{
  currentMotion = motion;
  currentLeftSpeed = leftSpeed;
  currentRightSpeed = rightSpeed;
}

// ============================================================================
// Diagnostics
// ============================================================================

void Robot::printState() const
{
  Serial.print("[Robot State] motion=");
  Serial.print(
    motionToText(currentMotion)
  );

  Serial.print(", leftSpeed=");
  Serial.print(currentLeftSpeed);

  Serial.print(", rightSpeed=");
  Serial.print(currentRightSpeed);

  Serial.print(", leftPulse=");
  Serial.print(currentLeftPulse);

  Serial.print(", rightPulse=");
  Serial.print(currentRightPulse);

  Serial.print(", movementCount=");
  Serial.println(movementCount);
}

const char* Robot::motionToText(
  MotionState motion
) const
{
  switch (motion)
  {
    case MOTION_STOPPED:
      return "STOPPED";

    case MOTION_FORWARD:
      return "FORWARD";

    case MOTION_BACKWARD:
      return "BACKWARD";

    case MOTION_TURN_LEFT:
      return "TURN_LEFT";

    case MOTION_TURN_RIGHT:
      return "TURN_RIGHT";

    default:
      return "UNKNOWN";
  }
}

// ============================================================================
// Read-only state access
// ============================================================================

Robot::MotionState Robot::getMotion() const
{
  return currentMotion;
}

int Robot::getLeftSpeed() const
{
  return currentLeftSpeed;
}

int Robot::getRightSpeed() const
{
  return currentRightSpeed;
}

unsigned long Robot::getMovementCount() const
{
  return movementCount;
}

bool Robot::isAttached() const
{
  return servosAttached;
}