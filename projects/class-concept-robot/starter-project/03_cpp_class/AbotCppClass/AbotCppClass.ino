/*
 * Fribot Learning
 * Class Concept Robot
 *
 * Starter Project 03 — C++ Class
 *
 * This sketch controls the ABOT through one Robot object.
 *
 * The robot's:
 *
 * - hardware configuration,
 * - Servo resources,
 * - calibration,
 * - runtime state,
 * - movement behavior,
 * - diagnostic behavior
 *
 * are grouped inside the Robot class.
 */

#include "Robot.h"

// ============================================================================
// One Robot object
// ============================================================================

Robot abot(
  13,  // Left servo pin
  12,  // Right servo pin
  4    // Speaker pin
);

// ============================================================================
// Arduino setup
// ============================================================================

void setup()
{
  Serial.begin(9600);

  abot.begin();

  /*
   * Calibration belongs to this Robot object.
   *
   * Adjust only after testing the physical ABOT.
   */
  abot.setCalibration(
    0,
    0
  );

  Serial.println();
  Serial.println(
    "=== Sequence 1: Basic Movement ==="
  );

  abot.runBasicSequence();

  abot.pause(1000);

  Serial.println();
  Serial.println(
    "=== Sequence 2: Acceleration ==="
  );

  abot.accelerateForward(
    80,
    200,
    20,
    250
  );

  abot.pause(1000);

  Serial.println();
  Serial.println(
    "=== Sequence 3: Square Pattern ==="
  );

  abot.runSquarePattern(
    140,
    1500,
    400
  );

  abot.pause(1000);

  Serial.println();
  Serial.println(
    "=== Sequence 4: Zigzag Pattern ==="
  );

  abot.runZigzagPattern(
    100,
    800,
    400
  );

  abot.stop();

  abot.detachServos();

  Serial.println();
  Serial.println(
    "=== Demonstration Complete ==="
  );
}

// ============================================================================
// Arduino loop
// ============================================================================

void loop()
{
  /*
   * This demonstration runs once.
   */
}