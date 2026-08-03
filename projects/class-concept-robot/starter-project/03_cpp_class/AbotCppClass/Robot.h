#ifndef ROBOT_H
#define ROBOT_H

#include <Arduino.h>
#include <Servo.h>

class Robot
{
public:
  enum MotionState
  {
    MOTION_STOPPED,
    MOTION_FORWARD,
    MOTION_BACKWARD,
    MOTION_TURN_LEFT,
    MOTION_TURN_RIGHT
  };

  /*
   * Create one Robot object.
   *
   * Each Robot receives its own hardware pin configuration.
   */
  Robot(
    int leftServoPin,
    int rightServoPin,
    int speakerPin
  );

  /*
   * Prepare the hardware.
   */
  void begin();

  /*
   * Servo connection management.
   */
  void attachServos();
  void detachServos();

  /*
   * Calibration.
   */
  void setCalibration(
    int leftCalibration,
    int rightCalibration
  );

  /*
   * Basic movement.
   */
  void moveForward(int speed, int time);
  void moveBackward(int speed, int time);
  void turnLeft(int speed, int time);
  void turnRight(int speed, int time);
  void pause(int time);
  void stop();

  /*
   * Extended behavior.
   */
  void accelerateForward(
    int startSpeed,
    int endSpeed,
    int step,
    int stepTime
  );

  void runBasicSequence();
  void runSquarePattern(
    int speed,
    int forwardTime,
    int turnTime
  );

  void runZigzagPattern(
    int speed,
    int forwardTime,
    int turnTime
  );

  /*
   * Diagnostics.
   */
  void printState() const;

  /*
   * Read-only state access.
   */
  MotionState getMotion() const;
  int getLeftSpeed() const;
  int getRightSpeed() const;
  unsigned long getMovementCount() const;
  bool isAttached() const;

private:
  /*
   * Hardware configuration.
   */
  int leftServoPin;
  int rightServoPin;
  int speakerPin;

  /*
   * Hardware resources.
   */
  Servo servoLeft;
  Servo servoRight;

  /*
   * Calibration state.
   */
  int leftServoCalibration;
  int rightServoCalibration;

  /*
   * Runtime state.
   */
  MotionState currentMotion;

  int currentLeftSpeed;
  int currentRightSpeed;

  int currentLeftPulse;
  int currentRightPulse;

  bool servosAttached;

  unsigned long movementCount;

  /*
   * Servo pulse constants.
   */
  static const int SERVO_CLOCKWISE_FULL = 1300;
  static const int SERVO_STOP = 1500;
  static const int SERVO_COUNTERCLOCKWISE_FULL = 1700;

  /*
   * Speed limits.
   */
  static const int SPEED_MIN = -200;
  static const int SPEED_MAX = 200;

  /*
   * Internal helpers.
   *
   * These functions belong to Robot implementation,
   * but project users do not need to call them directly.
   */
  void playStartupTone();

  void setWheelSpeeds(
    int leftSpeed,
    int rightSpeed
  );

  void applyServoPulses(
    int leftPulse,
    int rightPulse
  );

  int speedToLeftPulse(int speed) const;
  int speedToRightPulse(int speed) const;

  int clampSpeed(int speed) const;
  int clampPulse(int pulse) const;

  void updateMotionState(
    MotionState motion,
    int leftSpeed,
    int rightSpeed
  );

  const char* motionToText(
    MotionState motion
  ) const;
};

#endif