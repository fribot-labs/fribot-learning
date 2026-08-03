# 02 — Growing Complexity

> Starter Project Stage: 02  
> Platform: Arduino  
> Robot: ABOT  
> Programming Structure: Expanded Procedural Functions

---

# Purpose

This is the second executable version of the Class Concept Robot Starter Project.

The first version showed that a working ABOT can be controlled with a small number of procedural functions.

This version keeps the same procedural approach but adds:

- variable wheel speed,
- servo calibration,
- robot state tracking,
- acceleration,
- movement patterns,
- diagnostic output,
- attachment state,
- movement counters,
- shared configuration values.

The robot still works.

However, the software now contains more relationships that the programmer must manage manually.

---

# Learning Goal

The purpose of this stage is not to prove that procedural programming is wrong.

Procedural functions remain useful.

The purpose is to observe what happens when one robot begins to require:

- more state,
- more behavior,
- more configuration,
- more dependencies,
- more coordination between functions.

At this stage, do not introduce a custom Robot class.

First experience the growing complexity.

---

# Project Structure

```text
02_growing_complexity/

├── README.md
│
└── AbotGrowingComplexity/
    └── AbotGrowingComplexity.ino
```

---

# Hardware

Required hardware:

- Arduino Uno
- Board of Education Shield
- two Parallax continuous rotation servos
- ABOT chassis
- battery pack
- piezo speaker connected to pin 4

Servo connections:

```text
Left servo  → digital pin 13

Right servo → digital pin 12
```

---

# ABOT Servo Values

The program follows the standard ABOT continuous rotation servo values.

```text
1300 microseconds

→ clockwise
```

```text
1500 microseconds

→ stop
```

```text
1700 microseconds

→ counterclockwise
```

Because the servos are mounted on opposite sides of the chassis, forward motion requires opposite physical servo rotation.

| Movement | Left Servo | Right Servo |
|----------|------------|-------------|
| Forward | 1700 | 1300 |
| Backward | 1300 | 1700 |
| Turn Left | 1300 | 1300 |
| Turn Right | 1700 | 1700 |
| Stop | 1500 | 1500 |

---

# What Has Grown?

The first Starter Project mainly contained:

```text
two Servo variables

+

five movement functions

+

one movement sequence
```

This version contains several categories of shared information.

---

## Hardware Configuration

```cpp
const int LEFT_SERVO_PIN = 13;
const int RIGHT_SERVO_PIN = 12;
const int SPEAKER_PIN = 4;
```

---

## Servo Configuration

```cpp
const int SERVO_CLOCKWISE_FULL = 1300;
const int SERVO_STOP = 1500;
const int SERVO_COUNTERCLOCKWISE_FULL = 1700;
```

---

## Speed Configuration

```cpp
const int SPEED_SLOW = 80;
const int SPEED_NORMAL = 140;
const int SPEED_FAST = 200;
```

---

## Calibration State

```cpp
int leftServoCalibration = 0;
int rightServoCalibration = 0;
```

---

## Runtime State

```cpp
MotionState currentMotion;

int currentLeftSpeed;
int currentRightSpeed;

int currentLeftPulse;
int currentRightPulse;

bool servosAttached;

unsigned long movementCount;
```

---

## Hardware Resources

```cpp
Servo servoLeft;
Servo servoRight;
```

---

## Movement Functions

```cpp
moveForward(...)
moveBackward(...)
turnLeft(...)
turnRight(...)
pauseRobot(...)
stopRobot()
```

---

## Conversion Functions

```cpp
speedToLeftPulse(...)
speedToRightPulse(...)
clampSpeed(...)
clampPulse(...)
```

---

## Sequence Functions

```cpp
runBasicSequence()
runSquarePattern()
runZigzagPattern()
accelerateForward(...)
```

---

## State and Diagnostic Functions

```cpp
updateMotionState(...)
printRobotState()
motionToText(...)
```

---

# Run

## 1. Open the Arduino sketch

Open:

```text
AbotGrowingComplexity/AbotGrowingComplexity.ino
```

---

## 2. Select Arduino Uno

```text
Tools

→ Board

→ Arduino Uno
```

---

## 3. Select the connected port

```text
Tools

→ Port

→ Arduino port
```

---

## 4. Raise the wheels

Before running the complete demonstration:

- raise the robot wheels above the floor,
- confirm the left servo is connected to pin 13,
- confirm the right servo is connected to pin 12,
- confirm that the servos are centered,
- confirm the external battery connection,
- confirm the BOE Shield power setting.

The program contains several movement sequences.

Test the wheel direction before placing the robot on the floor.

---

## 5. Verify and Upload

Click:

```text
Verify
```

Then upload the sketch.

Open the Serial Monitor at:

```text
9600 baud
```

---

# Demonstration Sequence

The program runs four demonstrations.

---

## Sequence 1 — Basic Movement

```text
Forward

↓

Stop

↓

Turn left

↓

Forward

↓

Turn right

↓

Backward

↓

Stop
```

---

## Sequence 2 — Acceleration

The robot gradually changes from slow forward movement to fast forward movement.

```text
80

↓

100

↓

120

↓

140

↓

160

↓

180

↓

200
```

---

## Sequence 3 — Square Pattern

The robot repeats:

```text
Forward

↓

Turn right
```

four times.

The exact path may not form a perfect square because of:

- battery condition,
- floor friction,
- wheel alignment,
- servo calibration,
- turn timing.

---

## Sequence 4 — Zigzag Pattern

The robot alternates between left and right movement changes.

```text
Forward

↓

Left

↓

Forward

↓

Right
```

---

# Serial Monitor

The Serial Monitor displays state similar to:

```text
[State] motion=FORWARD, leftSpeed=140, rightSpeed=140, leftPulse=1640, rightPulse=1360, movementCount=1
```

This output contains information from several global variables.

Observe how many pieces of state are required to describe one movement.

---

# Modification Exercise

Make only one modification at a time.

---

## Exercise 1 — Change the Normal Speed

Find:

```cpp
const int SPEED_NORMAL = 140;
```

Change it to:

```cpp
const int SPEED_NORMAL = 100;
```

Observe how several movement sequences change even though only one constant was modified.

---

## Exercise 2 — Change the Turn Time

Find:

```cpp
const int QUARTER_TURN_TIME = 400;
```

Try:

```cpp
const int QUARTER_TURN_TIME = 500;
```

Observe how the square and zigzag patterns change.

---

## Exercise 3 — Calibrate One Servo

If the robot curves while moving forward, adjust one calibration value.

Example:

```cpp
int leftServoCalibration = -5;
int rightServoCalibration = 0;
```

Use small values.

Do not make large changes before testing.

---

## Exercise 4 — Add Another Pattern

Create:

```cpp
void runTrianglePattern()
{
}
```

A possible sequence is:

```text
Forward

↓

Turn

↓

Forward

↓

Turn

↓

Forward

↓

Turn
```

After adding the function, call it from `setup()`.

Observe how another behavior requires:

- another function,
- more timing decisions,
- more shared constants,
- more knowledge of existing movement functions.

---

# Observe the Relationships

Consider the following relationships.

```text
servoLeft
```

is used by:

```text
attachServos

applyServoPulses

detachServos
```

---

```text
currentMotion
```

is used by:

```text
updateMotionState

printRobotState

motionToText
```

---

```text
currentLeftSpeed
currentRightSpeed
```

must remain consistent with:

```text
currentLeftPulse
currentRightPulse
```

---

```text
leftServoCalibration
rightServoCalibration
```

affect:

```text
speedToLeftPulse
speedToRightPulse
```

---

```text
servosAttached
```

affects whether:

```text
setWheelSpeeds
detachServos
attachServos
```

can operate correctly.

---

# Central Question

The code still works.

But ask:

> Who is responsible for keeping all Robot-related values and functions consistent?

At the moment, the answer is:

```text
The programmer.
```

The language does not explicitly declare that the following belong to one Robot:

```text
servoLeft
servoRight

currentMotion

currentLeftSpeed
currentRightSpeed

currentLeftPulse
currentRightPulse

leftServoCalibration
rightServoCalibration

attachServos
detachServos

moveForward
moveBackward

turnLeft
turnRight

stopRobot
```

Their relationship exists only through:

- naming,
- comments,
- file location,
- programmer memory.

---

# Why This Matters

The current program controls one ABOT.

Imagine adding another robot.

The program may need:

```cpp
Servo robotOneServoLeft;
Servo robotOneServoRight;

Servo robotTwoServoLeft;
Servo robotTwoServoRight;

int robotOneLeftSpeed;
int robotOneRightSpeed;

int robotTwoLeftSpeed;
int robotTwoRightSpeed;
```

Functions may also need additional parameters.

```cpp
moveForwardRobotOne(...);
moveForwardRobotTwo(...);

turnLeftRobotOne(...);
turnLeftRobotTwo(...);
```

The problem is not that the robot cannot move.

The problem is that the relationships become difficult to preserve.

---

# Think Before the Next Stage

- Which variables describe the ABOT?
- Which functions belong specifically to the ABOT?
- Which functions exist only to support other robot functions?
- Why must the left and right servo conversion rules remain different?
- What happens if calibration values are accidentally exchanged?
- What happens if state values and actual servo pulses become inconsistent?
- How many global values must the programmer remember?
- What would happen if two ABOTs were controlled in the same program?
- Is there a way to declare that related state and behavior belong together?

---

# Completion Check

- [ ] The sketch compiles.
- [ ] The startup tone plays.
- [ ] Both servos operate.
- [ ] Basic movement runs.
- [ ] Acceleration runs.
- [ ] The square pattern runs.
- [ ] The zigzag pattern runs.
- [ ] Serial Monitor output appears.
- [ ] I identified the global configuration values.
- [ ] I identified the global runtime state.
- [ ] I identified the functions that depend on shared global state.
- [ ] I understand why the code is harder to follow than Stage 01.
- [ ] I have not introduced a custom Robot class yet.

---

# Next Stage

Continue to:

```text
03_cpp_class/
```

The next version will preserve similar ABOT behavior while reorganizing related state and behavior into a `Robot` class.

The objective is not merely to replace functions with class syntax.

The objective is to make the relationship explicit:

```text
Robot state

+

Robot behavior

+

Robot hardware resources

=

one Robot responsibility
```