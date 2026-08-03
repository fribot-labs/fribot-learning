/*
 * Fribot Learning
 * Class Concept Robot
 *
 * Starter Project 01 — Procedural C Style
 *
 * This sketch controls the ABOT with procedural functions.
 *
 * Hardware:
 * - Arduino Uno
 * - Board of Education Shield
 * - Two Parallax continuous rotation servos
 *
 * Servo connections:
 * - Left servo  -> digital pin 13
 * - Right servo -> digital pin 12
 *
 * This program intentionally does not use a user-defined class.
 */

#include <Servo.h>

// ------------------------------------------------------------
// Hardware configuration
// ------------------------------------------------------------

const int LEFT_SERVO_PIN = 13;
const int RIGHT_SERVO_PIN = 12;

// ------------------------------------------------------------
// Continuous rotation servo pulse values
// ------------------------------------------------------------

const int SERVO_CLOCKWISE = 1300;
const int SERVO_STOP = 1500;
const int SERVO_COUNTERCLOCKWISE = 1700;

// ------------------------------------------------------------
// Servo objects provided by the Arduino Servo library
// ------------------------------------------------------------

Servo servoLeft;
Servo servoRight;

// ------------------------------------------------------------
// Function declarations
// ------------------------------------------------------------

void attachServos();
void forward(int time);
void backward(int time);
void turnLeft(int time);
void turnRight(int time);
void stopRobot(int time);
void detachServos();

// ------------------------------------------------------------
// Arduino setup
// ------------------------------------------------------------

void setup()
{
  // Startup tone used in the ABOT teaching examples.
  tone(4, 3000, 1000);
  delay(1000);

  attachServos();

  // Move forward for 2 seconds.
  forward(2000);

  // Stop briefly.
  stopRobot(1000);

  // Turn left.
  turnLeft(800);

  // Stop briefly.
  stopRobot(1000);

  // Move forward again.
  forward(1500);

  // Stop briefly.
  stopRobot(1000);

  // Turn right.
  turnRight(800);

  // Stop briefly.
  stopRobot(1000);

  // Move backward.
  backward(1500);

  // Finish in the stopped state.
  stopRobot(1000);

  // Stop transmitting servo signals after the demonstration.
  detachServos();
}

// ------------------------------------------------------------
// Arduino loop
// ------------------------------------------------------------

void loop()
{
  // The first demonstration runs only once.
}

// ------------------------------------------------------------
// Servo connection
// ------------------------------------------------------------

void attachServos()
{
  servoLeft.attach(LEFT_SERVO_PIN);
  servoRight.attach(RIGHT_SERVO_PIN);

  servoLeft.writeMicroseconds(SERVO_STOP);
  servoRight.writeMicroseconds(SERVO_STOP);

  delay(500);
}

// ------------------------------------------------------------
// Forward
// ------------------------------------------------------------

void forward(int time)
{
  // Left wheel rotates counterclockwise.
  servoLeft.writeMicroseconds(SERVO_COUNTERCLOCKWISE);

  // Right wheel rotates clockwise.
  servoRight.writeMicroseconds(SERVO_CLOCKWISE);

  delay(time);
}

// ------------------------------------------------------------
// Backward
// ------------------------------------------------------------

void backward(int time)
{
  // Left wheel rotates clockwise.
  servoLeft.writeMicroseconds(SERVO_CLOCKWISE);

  // Right wheel rotates counterclockwise.
  servoRight.writeMicroseconds(SERVO_COUNTERCLOCKWISE);

  delay(time);
}

// ------------------------------------------------------------
// Turn left
// ------------------------------------------------------------

void turnLeft(int time)
{
  // Both servos receive the clockwise pulse.
  //
  // Because the servos are mounted on opposite sides,
  // this causes the robot to rotate left.
  servoLeft.writeMicroseconds(SERVO_CLOCKWISE);
  servoRight.writeMicroseconds(SERVO_CLOCKWISE);

  delay(time);
}

// ------------------------------------------------------------
// Turn right
// ------------------------------------------------------------

void turnRight(int time)
{
  // Both servos receive the counterclockwise pulse.
  //
  // Because the servos are mounted on opposite sides,
  // this causes the robot to rotate right.
  servoLeft.writeMicroseconds(SERVO_COUNTERCLOCKWISE);
  servoRight.writeMicroseconds(SERVO_COUNTERCLOCKWISE);

  delay(time);
}

// ------------------------------------------------------------
// Stop
// ------------------------------------------------------------

void stopRobot(int time)
{
  servoLeft.writeMicroseconds(SERVO_STOP);
  servoRight.writeMicroseconds(SERVO_STOP);

  delay(time);
}

// ------------------------------------------------------------
// Disconnect servo signals
// ------------------------------------------------------------

void detachServos()
{
  servoLeft.detach();
  servoRight.detach();
}