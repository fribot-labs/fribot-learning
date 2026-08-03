# 01 — Procedural C Style

> Starter Project Stage: 01  
> Platform: Arduino  
> Robot: ABOT  
> Programming Structure: Procedural Functions

---

# Purpose

This is the first executable version of the Class Concept Robot Starter Project.

The robot is controlled using procedural functions based on the ABOT examples.

This stage does not introduce a user-defined class.

The learner first observes that a working robot can be controlled using:

- global servo variables,
- constants,
- functions,
- parameters,
- sequential commands.

---

# Hardware

This project is based on the ABOT hardware configuration.

Required hardware:

- Arduino Uno
- Board of Education Shield
- two Parallax continuous rotation servos
- ABOT chassis
- battery pack

Servo connections:

```text
Left servo  → digital pin 13

Right servo → digital pin 12
```

---

# Project Structure

```text
01_procedural_c/

├── README.md
│
└── AbotProceduralDrive/
    └── AbotProceduralDrive.ino
```

---

# Servo Control Values

The ABOT continuous rotation servos are controlled with pulse widths.

```text
1300 microseconds

→ clockwise rotation
```

```text
1500 microseconds

→ stop
```

```text
1700 microseconds

→ counterclockwise rotation
```

The exact stop position may vary slightly between servos.

The servos should be centered before running the project.

---

# Movement Functions

The project uses the following procedural functions.

```cpp
void forward(int time);
void backward(int time);
void turnLeft(int time);
void turnRight(int time);
void stopRobot(int time);
```

Each function:

1. sends pulse values to the two servos,
2. maintains the movement for the requested time,
3. returns control to the calling function.

---

# Movement Table

| Movement | Left Servo | Right Servo |
|----------|------------|-------------|
| Forward | 1700 | 1300 |
| Backward | 1300 | 1700 |
| Turn Left | 1300 | 1300 |
| Turn Right | 1700 | 1700 |
| Stop | 1500 | 1500 |

The forward and backward values are different for each wheel because the servos are mounted on opposite sides of the chassis.

---

# Run

## 1. Open the sketch

Open:

```text
AbotProceduralDrive/AbotProceduralDrive.ino
```

with the Arduino IDE.

---

## 2. Select the board

Select:

```text
Tools

→ Board

→ Arduino Uno
```

---

## 3. Select the port

Select the serial port connected to the Arduino.

```text
Tools

→ Port

→ the connected Arduino port
```

---

## 4. Verify

Click:

```text
Verify
```

Confirm that the sketch compiles successfully.

---

## 5. Prepare the robot

Before uploading:

- raise the robot wheels above the floor,
- confirm the servo cables are connected correctly,
- confirm the servo power jumper configuration,
- confirm the servos have been centered,
- place the power switch in the safe position.

---

## 6. Upload

Upload the sketch to the Arduino.

After checking the wheel directions, place the robot on the floor and run the demonstration.

---

# Expected Movement

The robot should perform the following sequence.

```text
Startup tone

↓

Forward

↓

Stop

↓

Turn left

↓

Stop

↓

Forward

↓

Stop

↓

Turn right

↓

Stop

↓

Backward

↓

Stop
```

Small differences in distance and turn angle are normal.

They may result from:

- servo calibration,
- battery condition,
- floor friction,
- wheel alignment,
- differences between the two servos.

---

# Observe

Before modifying the code, locate the following elements.

## State-like values

```cpp
const int LEFT_SERVO_PIN = 13;
const int RIGHT_SERVO_PIN = 12;

const int SERVO_CLOCKWISE = 1300;
const int SERVO_STOP = 1500;
const int SERVO_COUNTERCLOCKWISE = 1700;
```

These values describe how the robot hardware is configured.

---

## Hardware resources

```cpp
Servo servoLeft;
Servo servoRight;
```

These variables represent the two servo control channels used by the sketch.

---

## Behavior functions

```cpp
forward(...)
backward(...)
turnLeft(...)
turnRight(...)
stopRobot(...)
```

These functions describe what the robot can do.

---

# Think Before the Next Stage

Consider the following questions.

- Which values describe the robot?
- Which functions control the robot?
- Why do all movement functions need access to `servoLeft` and `servoRight`?
- What would happen if the project added LEDs, sensors, speed settings, and several robots?
- How would we know which variables and functions belong together?
- Is the current structure still easy to understand?

Complete answers are not required yet.

The next stage intentionally increases the number of variables and functions.

---

# Completion Check

- [ ] The sketch compiles.
- [ ] The startup tone plays.
- [ ] Both servos are attached correctly.
- [ ] The robot moves forward.
- [ ] The robot moves backward.
- [ ] The robot turns left.
- [ ] The robot turns right.
- [ ] The robot stops after the sequence.
- [ ] I located the servo variables.
- [ ] I located the movement functions.
- [ ] I understand that this version does not define a custom class.

---

# Next Stage

Continue to:

```text
02_growing_complexity/
```

The next version preserves the procedural structure but adds more state and behavior.

The objective is to experience why a working procedural program can gradually become difficult to manage.