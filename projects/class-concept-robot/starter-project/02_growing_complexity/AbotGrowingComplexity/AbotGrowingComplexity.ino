/*
 * Fribot Learning
 * Class Concept Robot
 *
 * Starter Project 02 — Growing Complexity
 *
 * This sketch expands the procedural ABOT program.
 *
 * It intentionally uses:
 *
 * - global variables,
 * - global state,
 * - many related constants,
 * - many procedural functions,
 * - shared Servo objects,
 * - movement sequences,
 * - calibration values,
 * - runtime state tracking.
 *
 * The program still works without a user-defined Robot class.
 *
 * The learning objective is to experience how procedural code becomes
 * more difficult to understand as responsibilities and state increase.
 */

#include <Servo.h>

// ============================================================================
// Hardware configuration
// ============================================================================

const int LEFT_SERVO_PIN = 13;
const int RIGHT_SERVO_PIN = 12;
const int SPEAKER_PIN = 4;

// ============================================================================
// Servo pulse configuration
// ============================================================================

const int SERVO_CLOCKWISE_FULL = 1300;
const int SERVO_STOP = 1500;
const int SERVO_COUNTERCLOCKWISE_FULL = 1700;

// ============================================================================
// Speed configuration
// ============================================================================

const int SPEED_MIN = -200;
const int SPEED_MAX = 200;

const int SPEED_SLOW = 80;
const int SPEED_NORMAL = 140;
const int SPEED_FAST = 200;

// ============================================================================
// Servo calibration
// ============================================================================

/*
 * Small calibration values may be required because two continuous
 * rotation servos do not always rotate at exactly the same speed.
 *
 * Change these values only after testing the physical robot.
 */

int leftServoCalibration = 0;
int rightServoCalibration = 0;

// ============================================================================
// Timing configuration
// ============================================================================

const int STARTUP_TONE_FREQUENCY = 3000;
const int STARTUP_TONE_DURATION = 1000;

const int SHORT_PAUSE_TIME = 500;
const int NORMAL_PAUSE_TIME = 1000;

const int SHORT_FORWARD_TIME = 800;
const int NORMAL_FORWARD_TIME = 1500;
const int LONG_FORWARD_TIME = 2500;

const int QUARTER_TURN_TIME = 400;
const int HALF_TURN_TIME = 800;

// ============================================================================
// Movement state
// ============================================================================

enum MotionState
{
  MOTION_STOPPED,
  MOTION_FORWARD,
  MOTION_BACKWARD,
  MOTION_TURN_LEFT,
  MOTION_TURN_RIGHT
};

MotionState currentMotion = MOTION_STOPPED;

int currentLeftSpeed = 0;
int currentRightSpeed = 0;

int currentLeftPulse = SERVO_STOP;
int currentRightPulse = SERVO_STOP;

bool servosAttached = false;

unsigned long movementCount = 0;

// ============================================================================
// Servo resources
// ============================================================================

Servo servoLeft;
Servo servoRight;

// ============================================================================
// Function declarations
// ============================================================================

void initializeRobot();
void playStartupTone();

void attachServos();
void detachServos();

void setWheelSpeeds(int leftSpeed, int rightSpeed);
void applyServoPulses(int leftPulse, int rightPulse);

int speedToLeftPulse(int speed);
int speedToRightPulse(int speed);
int clampSpeed(int speed);
int clampPulse(int pulse);

void moveForward(int speed, int time);
void moveBackward(int speed, int time);
void turnLeft(int speed, int time);
void turnRight(int speed, int time);
void pauseRobot(int time);
void stopRobot();

void accelerateForward(int startSpeed, int endSpeed, int step, int stepTime);

void runBasicSequence();
void runSquarePattern();
void runZigzagPattern();

void updateMotionState(
  MotionState motion,
  int leftSpeed,
  int rightSpeed
);

void printRobotState();
const char* motionToText(MotionState motion);

// ============================================================================
// Arduino setup
// ============================================================================

void setup()
{
  Serial.begin(9600);

  initializeRobot();

  Serial.println();
  Serial.println("=== Sequence 1: Basic Movement ===");

  runBasicSequence();

  pauseRobot(NORMAL_PAUSE_TIME);

  Serial.println();
  Serial.println("=== Sequence 2: Acceleration ===");

  accelerateForward(
    SPEED_SLOW,
    SPEED_FAST,
    20,
    250
  );

  pauseRobot(NORMAL_PAUSE_TIME);

  Serial.println();
  Serial.println("=== Sequence 3: Square Pattern ===");

  runSquarePattern();

  pauseRobot(NORMAL_PAUSE_TIME);

  Serial.println();
  Serial.println("=== Sequence 4: Zigzag Pattern ===");

  runZigzagPattern();

  stopRobot();

  detachServos();

  Serial.println();
  Serial.println("=== Demonstration Complete ===");
}

// ============================================================================
// Arduino loop
// ============================================================================

void loop()
{
  /*
   * This demonstration runs once in setup().
   *
   * Nothing needs to repeat automatically.
   */
}

// ============================================================================
// Robot initialization
// ============================================================================

void initializeRobot()
{
  Serial.println("=== ABOT Growing Complexity ===");

  playStartupTone();

  attachServos();

  stopRobot();

  Serial.println("[Robot] initialization complete");

  printRobotState();
}

void playStartupTone()
{
  tone(
    SPEAKER_PIN,
    STARTUP_TONE_FREQUENCY,
    STARTUP_TONE_DURATION
  );

  delay(STARTUP_TONE_DURATION);
}

// ============================================================================
// Servo connection management
// ============================================================================

void attachServos()
{
  if (servosAttached)
  {
    return;
  }

  servoLeft.attach(LEFT_SERVO_PIN);
  servoRight.attach(RIGHT_SERVO_PIN);

  servosAttached = true;

  applyServoPulses(
    SERVO_STOP,
    SERVO_STOP
  );

  Serial.println("[Robot] servos attached");
}

void detachServos()
{
  if (!servosAttached)
  {
    return;
  }

  stopRobot();

  servoLeft.detach();
  servoRight.detach();

  servosAttached = false;

  Serial.println("[Robot] servos detached");
}

// ============================================================================
// Wheel speed control
// ============================================================================

void setWheelSpeeds(int leftSpeed, int rightSpeed)
{
  if (!servosAttached)
  {
    Serial.println("[Warning] servos are not attached");
    return;
  }

  leftSpeed = clampSpeed(leftSpeed);
  rightSpeed = clampSpeed(rightSpeed);

  int leftPulse = speedToLeftPulse(leftSpeed);
  int rightPulse = speedToRightPulse(rightSpeed);

  applyServoPulses(
    leftPulse,
    rightPulse
  );

  currentLeftSpeed = leftSpeed;
  currentRightSpeed = rightSpeed;
}

void applyServoPulses(int leftPulse, int rightPulse)
{
  leftPulse = clampPulse(leftPulse);
  rightPulse = clampPulse(rightPulse);

  currentLeftPulse = leftPulse;
  currentRightPulse = rightPulse;

  servoLeft.writeMicroseconds(currentLeftPulse);
  servoRight.writeMicroseconds(currentRightPulse);
}

// ============================================================================
// Speed-to-pulse conversion
// ============================================================================

int speedToLeftPulse(int speed)
{
  /*
   * Positive speed means forward.
   *
   * The left servo must rotate counterclockwise
   * to move the left wheel forward.
   */

  int pulse = SERVO_STOP + speed;

  pulse += leftServoCalibration;

  return clampPulse(pulse);
}

int speedToRightPulse(int speed)
{
  /*
   * Positive speed means forward.
   *
   * The right servo must rotate clockwise
   * to move the right wheel forward.
   */

  int pulse = SERVO_STOP - speed;

  pulse += rightServoCalibration;

  return clampPulse(pulse);
}

int clampSpeed(int speed)
{
  return constrain(
    speed,
    SPEED_MIN,
    SPEED_MAX
  );
}

int clampPulse(int pulse)
{
  return constrain(
    pulse,
    SERVO_CLOCKWISE_FULL,
    SERVO_COUNTERCLOCKWISE_FULL
  );
}

// ============================================================================
// Basic movement functions
// ============================================================================

void moveForward(int speed, int time)
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

  printRobotState();

  delay(time);
}

void moveBackward(int speed, int time)
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

  printRobotState();

  delay(time);
}

void turnLeft(int speed, int time)
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

  printRobotState();

  delay(time);
}

void turnRight(int speed, int time)
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

  printRobotState();

  delay(time);
}

void pauseRobot(int time)
{
  stopRobot();

  delay(time);
}

void stopRobot()
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

  printRobotState();
}

// ============================================================================
// Gradual acceleration
// ============================================================================

void accelerateForward(
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
    Serial.println("[Warning] acceleration step cannot be zero");
    return;
  }

  if (startSpeed > endSpeed)
  {
    int temporarySpeed = startSpeed;
    startSpeed = endSpeed;
    endSpeed = temporarySpeed;
  }

  currentMotion = MOTION_FORWARD;

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

    printRobotState();

    delay(stepTime);
  }

  movementCount++;

  stopRobot();
}

// ============================================================================
// Movement sequences
// ============================================================================

void runBasicSequence()
{
  moveForward(
    SPEED_NORMAL,
    NORMAL_FORWARD_TIME
  );

  pauseRobot(SHORT_PAUSE_TIME);

  turnLeft(
    SPEED_NORMAL,
    HALF_TURN_TIME
  );

  pauseRobot(SHORT_PAUSE_TIME);

  moveForward(
    SPEED_SLOW,
    SHORT_FORWARD_TIME
  );

  pauseRobot(SHORT_PAUSE_TIME);

  turnRight(
    SPEED_NORMAL,
    HALF_TURN_TIME
  );

  pauseRobot(SHORT_PAUSE_TIME);

  moveBackward(
    SPEED_NORMAL,
    NORMAL_FORWARD_TIME
  );

  stopRobot();
}

void runSquarePattern()
{
  for (int side = 1; side <= 4; side++)
  {
    Serial.print("[Square] side ");
    Serial.println(side);

    moveForward(
      SPEED_NORMAL,
      NORMAL_FORWARD_TIME
    );

    pauseRobot(250);

    turnRight(
      SPEED_NORMAL,
      QUARTER_TURN_TIME
    );

    pauseRobot(250);
  }

  stopRobot();
}

void runZigzagPattern()
{
  for (int section = 1; section <= 3; section++)
  {
    Serial.print("[Zigzag] section ");
    Serial.println(section);

    moveForward(
      SPEED_NORMAL,
      SHORT_FORWARD_TIME
    );

    turnLeft(
      SPEED_SLOW,
      QUARTER_TURN_TIME
    );

    moveForward(
      SPEED_NORMAL,
      SHORT_FORWARD_TIME
    );

    turnRight(
      SPEED_SLOW,
      QUARTER_TURN_TIME
    );
  }

  stopRobot();
}

// ============================================================================
// State management
// ============================================================================

void updateMotionState(
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

void printRobotState()
{
  Serial.print("[State] motion=");
  Serial.print(motionToText(currentMotion));

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

const char* motionToText(MotionState motion)
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