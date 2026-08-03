# 03 — C++ Class

> Starter Project Stage: 03  
> Platform: Arduino  
> Robot: ABOT  
> Programming Structure: C++ Class

---

# Purpose

This is the third executable version of the Class Concept Robot Starter Project.

The previous version showed that an ABOT can still work as procedural code grows.

However, the programmer had to manually remember that many global variables and functions belonged to one robot.

This version reorganizes those related elements into a `Robot` class.

---

# Learning Goal

The purpose is not simply to learn class syntax.

The purpose is to compare two ways of expressing the same robot.

```text
Stage 02

global Servo variables

+

global robot state

+

global movement functions

+

global calibration values
```

becomes:

```text
Stage 03

Robot object
```

The class makes an existing relationship explicit.

---

# Project Structure

```text
03_cpp_class/

├── README.md
│
└── AbotCppClass/
    ├── AbotCppClass.ino
    ├── Robot.h
    └── Robot.cpp
```

---

# Main Idea

The main Arduino sketch contains one object.

```cpp
Robot abot(
  13,
  12,
  4
);
```

This object represents one ABOT.

The sketch no longer directly owns:

- servo objects,
- servo pin variables,
- movement state,
- speed state,
- pulse state,
- calibration values,
- movement helper functions.

Those responsibilities belong to `Robot`.

---

# Public Interface

The public interface describes what other code may ask the robot to do.

```cpp
abot.begin();

abot.moveForward(...);
abot.moveBackward(...);

abot.turnLeft(...);
abot.turnRight(...);

abot.stop();
abot.pause(...);

abot.runSquarePattern(...);
abot.runZigzagPattern(...);

abot.detachServos();
```

The Arduino sketch does not need to know how each action is implemented.

---

# Private State

The `Robot` class keeps its state private.

Examples:

```cpp
Servo servoLeft;
Servo servoRight;

MotionState currentMotion;

int currentLeftSpeed;
int currentRightSpeed;

int currentLeftPulse;
int currentRightPulse;

int leftServoCalibration;
int rightServoCalibration;

bool servosAttached;

unsigned long movementCount;
```

Other files cannot modify these values directly.

They must interact through the class interface.

---

# Private Behavior

Some functions support the Robot implementation but are not part of the learner-facing interface.

Examples:

```cpp
setWheelSpeeds(...)

applyServoPulses(...)

speedToLeftPulse(...)

speedToRightPulse(...)

clampSpeed(...)

clampPulse(...)

updateMotionState(...)
```

These functions remain inside the class because they exist only to support Robot behavior.

---

# ABOT Hardware

The class uses the same ABOT hardware configuration as the previous stages.

```text
Left continuous rotation servo

→ digital pin 13
```

```text
Right continuous rotation servo

→ digital pin 12
```

```text
Piezo speaker

→ digital pin 4
```

---

# Servo Control Values

| Meaning | Pulse |
|---------|------:|
| Clockwise | 1300 μs |
| Stop | 1500 μs |
| Counterclockwise | 1700 μs |

Because the servos face opposite directions:

| Movement | Left Servo | Right Servo |
|----------|------------|-------------|
| Forward | 1700 | 1300 |
| Backward | 1300 | 1700 |
| Turn Left | 1300 | 1300 |
| Turn Right | 1700 | 1700 |
| Stop | 1500 | 1500 |

---

# Compare Stage 02 and Stage 03

## Stage 02

```cpp
Servo servoLeft;
Servo servoRight;

MotionState currentMotion;

int currentLeftSpeed;
int currentRightSpeed;

void moveForward(...);
void moveBackward(...);
void turnLeft(...);
void turnRight(...);
```

Their relationship was implied through:

- naming,
- comments,
- file location,
- programmer memory.

---

## Stage 03

```cpp
Robot abot;
```

The relationship is represented by the program structure itself.

```text
abot

├── hardware configuration
├── servo resources
├── calibration
├── runtime state
├── movement behavior
└── diagnostic behavior
```

---

# What the Class Changes

The class does not make the robot move because it is a class.

The servo pulses still make the robot move.

The class changes how the program expresses ownership and responsibility.

Before:

```text
Who owns currentLeftSpeed?

Who owns servoLeft?

Who may change currentMotion?

Which functions belong to the robot?
```

After:

```text
Robot owns them.
```

---

# Run

## 1. Open the sketch

Open:

```text
AbotCppClass/AbotCppClass.ino
```

Arduino IDE should display three tabs:

```text
AbotCppClass

Robot.h

Robot.cpp
```

---

## 2. Select the board

```text
Tools

→ Board

→ Arduino Uno
```

---

## 3. Select the port

```text
Tools

→ Port

→ connected Arduino port
```

---

## 4. Prepare the ABOT

Before floor testing:

- raise the wheels,
- check the servo connections,
- confirm the battery connection,
- confirm the servos are centered,
- verify the direction of each wheel.

---

## 5. Verify and Upload

Compile the sketch.

Then upload it to the Arduino.

Open the Serial Monitor at:

```text
9600 baud
```

---

# Expected Behavior

The robot performs behavior similar to Stage 02:

```text
Basic sequence

↓

Acceleration

↓

Square pattern

↓

Zigzag pattern

↓

Stop

↓

Detach servo signals
```

The important comparison is not only the physical behavior.

The important comparison is the software structure.

---

# Modification Exercise 1 — Change One Sequence

In `AbotCppClass.ino`, find:

```cpp
abot.runSquarePattern(
  140,
  1500,
  400
);
```

Change the values and observe the result.

The sketch changes Robot behavior without directly accessing internal servo state.

---

# Modification Exercise 2 — Add a New Public Behavior

Add the following declaration to `Robot.h`.

```cpp
void runTrianglePattern(
  int speed,
  int forwardTime,
  int turnTime
);
```

Implement it in `Robot.cpp`.

```cpp
void Robot::runTrianglePattern(
  int speed,
  int forwardTime,
  int turnTime
)
{
  for (int side = 1; side <= 3; side++)
  {
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
```

Then call it from the sketch.

```cpp
abot.runTrianglePattern(
  120,
  1500,
  550
);
```

Notice that the new behavior is added as something the `Robot` can do.

---

# Modification Exercise 3 — Create Two Robot Objects

Do not connect both objects to the same physical servo pins at the same time.

Conceptually compare:

```cpp
Robot firstRobot(
  13,
  12,
  4
);

Robot secondRobot(
  11,
  10,
  3
);
```

Each object would have its own:

- servo resources,
- calibration values,
- motion state,
- speed state,
- movement count.

This is difficult to express safely with one shared collection of global variables.

---

# Central Question

Compare these two expressions.

```cpp
moveForward(
  140,
  1500
);
```

and:

```cpp
abot.moveForward(
  140,
  1500
);
```

The physical result may be similar.

But the second expression states something more clearly.

```text
moveForward

belongs to

abot
```

The dot is not merely syntax.

It expresses a relationship.

---

# Reflection Questions

- Which variables disappeared from the main sketch?
- Where did the Servo objects move?
- Why are some functions public and others private?
- What responsibility does the constructor have?
- Why does `abot.moveForward()` communicate more context than `moveForward()`?
- Did the class reduce the amount of code?
- Did it reduce the number of relationships the main sketch must manage?
- Can you now explain why a class is more than syntax?

---

# Completion Check

- [ ] The project compiles.
- [ ] The ABOT initializes.
- [ ] The movement sequence runs.
- [ ] The Serial Monitor displays Robot state.
- [ ] The robot stops correctly.
- [ ] Servo signals detach after completion.
- [ ] I located the constructor.
- [ ] I identified public functions.
- [ ] I identified private state.
- [ ] I identified private helper functions.
- [ ] I understand what the `abot` object represents.
- [ ] I can explain one advantage over Stage 02.
- [ ] I understand that the class did not replace the hardware logic.
- [ ] I understand that the class made responsibility and relationship explicit.

---

# Final Comparison

```text
01 Procedural C Style

A few functions are enough.
```

```text
02 Growing Complexity

More state and behavior require more manual coordination.
```

```text
03 C++ Class

Related state, behavior, and hardware resources are assigned to one Robot.
```

The final lesson is not:

```text
C is bad.

C++ is good.
```

The lesson is:

```text
As relationships grow,

software needs a clearer way to express ownership and responsibility.
```