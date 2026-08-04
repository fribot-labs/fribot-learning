# Expected Output

> Project: Tandem Dual MCU  
> Starter Project: 02 — User-Generated Commands  
> Difficulty: Beginner  
> Estimated Observation Time: 10–15 Minutes

---

# Purpose

This document defines what you should be able to observe when the
User-Generated Commands project runs correctly.

It does **not** explain the complete architecture.

Use it to compare:

- what you predicted,
- what the project is expected to do,
- what actually happened,
- what changed from Starter Project 01,
- and what remained the same.

```text
Prediction

↓

User Action

↓

System Response

↓

Comparison

↓

Understanding
```

The important result is not merely that a button worked.

The important result is that you can identify how a user's action became a
robot movement command.

---

# Before Running

Before downloading or examining `microbit/main.py`, pause and make a
prediction.

Starter Project 01 moved automatically because the commands were already
written into the program.

This project should behave differently.

---

# Initial-State Prediction

What do you expect the robot to do immediately after power-on?

```text
____________________________________

____________________________________
```

Do you expect it to move before you press a button?

```text
____________________________________
```

Why?

```text
____________________________________

____________________________________
```

---

# Button Prediction

Predict the meaning of each supported button input.

## Button A

```text
What do you expect Button A to do?

____________________________________
```

---

## Button B

```text
What do you expect Button B to do?

____________________________________
```

---

## Buttons A and B Together

```text
What do you expect A + B to do?

____________________________________
```

Do not worry if your prediction differs from the implementation.

The comparison is more important than guessing correctly.

---

# Responsibility Prediction

Without reading the code, predict:

```text
Which device detects the button press?

____________________________________
```

```text
Which part converts the button event into a movement command?

____________________________________
```

```text
Does the Arduino need to know whether Button A or Button B was pressed?

____________________________________
```

```text
Which processor directly executes the wheel-servo command?

____________________________________
```

Keep these predictions.

You will revisit them after observing the robot.

---

# Expected Initial State

After the program starts, the robot should enter a stopped waiting state.

```text
Power On

↓

Servo Attach

↓

Stop

↓

Wait for User Input
```

The robot should **not** immediately perform an automatic movement sequence.

This is the first major difference from Starter Project 01.

```text
Starter Project 01

Power On

↓

Prepared Movement Sequence
```

```text
Starter Project 02

Power On

↓

Wait for User
```

The system is ready, but the next command has not yet been generated.

---

# Expected Input and Movement Mapping

The standard learning mapping for this project is:

| User Input | Expected Command | Expected Robot Behaviour |
|---|---|---|
| Button A | Forward | Robot moves forward |
| Button B | Backward | Robot moves backward |
| Buttons A + B | Stop | Both wheels stop |

The final mapping must remain consistent with the current
`microbit/main.py`.

Do not modify the mapping until you have observed the prepared version.

---

# Expected Interaction Flow

The expected relationship is:

```text
User Action

↓

micro:bit Button Event

↓

Movement Command

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Execution

↓

Robot Movement
```

The user begins the interaction.

The user does not directly control the servo pins.

Several system layers remain between the button and the physical movement.

---

# Expected Button A Behaviour

When Button A is pressed:

```text
Button A

↓

Forward Command

↓

Robot Moves Forward
```

Expected observations:

- the robot is initially stopped,
- pressing Button A produces a visible response,
- the micro:bit display indicates forward movement,
- both wheels begin moving,
- the robot continues forward according to the current control design.

If the project uses continuous movement commands, the robot may continue
moving until another command is generated.

Be ready to use the stop input.

---

# Expected Button B Behaviour

When Button B is pressed:

```text
Button B

↓

Backward Command

↓

Robot Moves Backward
```

Expected observations:

- the previous movement command is replaced,
- the micro:bit display indicates backward movement,
- both wheels change to the backward direction,
- the robot responds without restarting the complete program.

The user determines when this command occurs.

---

# Expected A + B Behaviour

When Buttons A and B are pressed together:

```text
A + B

↓

Stop Command

↓

Robot Stops
```

Expected observations:

- both servo speed commands become zero,
- the robot stops,
- the micro:bit display indicates the stopped state,
- the program remains active,
- another user command can be generated afterwards.

Stopping should not end the program.

It should return the robot to a waiting state.

---

# Expected micro:bit Display

The micro:bit display should provide a visible indication of the current
command state.

The approximate states are:

```text
Ready or Stop

↓

Forward

↓

Backward

↓

Stop
```

Possible icons may include:

```text
■
= stopped or waiting
```

```text
↑
= forward
```

```text
↓
= backward
```

The exact icon appearance depends on the current `main.py`.

The important observation is that the display changes when the user-generated
command changes.

---

# Expected Robot Behaviour

## Waiting

Before a supported button event occurs:

- the robot should remain stopped,
- the program should remain active,
- the micro:bit should continue checking for user input.

---

## Forward

After Button A:

- both wheels should move,
- the robot should move forward,
- a small left or right drift is acceptable.

---

## Backward

After Button B:

- both wheel directions should reverse relative to forward,
- the robot should move backward,
- the backward path does not need to match the forward path exactly.

---

## Stop

After A + B:

- both wheels should stop,
- the program should remain ready,
- pressing another supported input should produce another command.

---

# Response Timing

The robot should respond shortly after a valid button input.

A very small delay may be normal because the system must:

```text
Detect Input

↓

Select Command

↓

Encode Message

↓

Transfer Message

↓

Execute Servo Command
```

However, the response should feel connected to the user's action.

A long delay may require investigation.

---

# Repeated Input

You should be able to generate more than one command during the same program
run.

For example:

```text
Button A

↓

Forward

↓

A + B

↓

Stop

↓

Button B

↓

Backward

↓

A + B

↓

Stop
```

The robot should not require a complete reset between normal commands.

This is another important difference from the one-time prepared sequence in
Starter Project 01.

---

# User Control Observation

Observe the timing carefully.

In Starter Project 01:

```text
Program Timing

↓

Next Command
```

In Starter Project 02:

```text
User Action

↓

Next Command
```

The user now determines when the command changes.

This does not mean the user directly drives the servos.

The user produces the input event from which the program generates the
movement command.

---

# What Changes?

Compared with Starter Project 01, the following elements change:

- the source of the command,
- the time at which the command is generated,
- the movement order,
- the learner's role,
- the program's input-handling responsibility,
- the robot's response to user choice.

```text
Before

Program Schedule

↓

Movement Command
```

```text
Now

User Button

↓

Movement Command
```

---

# What Remains the Same?

The following elements should remain stable:

- the robot hardware,
- the Arduino,
- the micro:bit,
- the servo pins,
- the shared Arduino Runtime,
- `microbit_abot.py`,
- I2C communication,
- the command-delivery path,
- the Arduino's hardware-execution responsibility.

```text
Command Source Changes

↓

Tandem Architecture Remains Stable
```

The persistent path is:

```text
micro:bit

↓

Command Translation

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Execution

↓

Robot Movement
```

---

# Comparison With Starter Project 01

Use the following table after running both projects.

| Observation | Starter Project 01 | Starter Project 02 |
|---|---|---|
| Command source | Program sequence | User input |
| Movement begins | Automatically | After button input |
| Movement order | Prepared in advance | Chosen by user |
| Arduino Runtime | Shared and stable | Shared and stable |
| I2C path | Used | Used |
| Servo hardware | Same | Same |
| Robot platform | Same | Same |
| User role | Observer | Command initiator |

The system changed less than the interaction did.

That difference is the core learning experience.

---

# Normal Variations

The following may be normal:

- slight left or right drift,
- minor response delay,
- different forward and backward speeds,
- small servo-neutral drift after stopping,
- different movement distance depending on how long the robot remains active,
- differences caused by battery condition,
- occasional difficulty pressing both buttons at exactly the same time.

These variations do not automatically mean that the architecture is
incorrect.

Physical systems are rarely perfectly symmetrical.

---

# Unexpected Behaviour

The following usually requires investigation:

- the robot moves immediately without user input,
- Button A causes no response,
- Button B causes no response,
- A + B does not stop the robot,
- a single button causes repeated unwanted commands,
- forward and backward are reversed,
- only one wheel moves,
- the display changes but the robot does not respond,
- the robot responds only after a long delay,
- the robot cannot receive another input while moving,
- the program resets after a button press,
- the movement mapping differs from the documentation.

If one of these occurs, continue with:

```text
TROUBLESHOOTING.md
```

Do not modify several conditions at once.

---

# Input Responsiveness Check

User-generated control requires the program to return frequently to the input
loop.

Observe:

```text
Can the robot receive another command while the program remains active?
```

Try:

```text
Forward

↓

Stop

↓

Backward

↓

Stop
```

If the robot ignores input for a long fixed period, record that observation.

It may indicate that the current movement function blocks new input while
waiting.

Do not immediately rewrite the code.

First compare the observation with the intended interaction design.

---

# Compare Your Prediction

After running the project, return to your original predictions.

---

## What Actually Happened at Startup?

```text
____________________________________

____________________________________
```

---

## What Did Button A Do?

```text
____________________________________

____________________________________
```

---

## What Did Button B Do?

```text
____________________________________

____________________________________
```

---

## What Did A + B Do?

```text
____________________________________

____________________________________
```

---

## Which Prediction Was Correct?

```text
____________________________________

____________________________________
```

---

## Which Prediction Was Incorrect or Incomplete?

```text
____________________________________

____________________________________
```

---

## What Surprised You Most?

```text
____________________________________

____________________________________
```

---

# Responsibility Observation

After running the project, consider:

```text
Did the Arduino detect the micro:bit button?
```

```text
Or did the micro:bit interpret the button and send a movement command?
```

Also consider:

```text
Did changing the command source require changing the shared Arduino Runtime?
```

Do not force a complete answer yet.

These relationships will be explained in:

```text
WHY_IT_WORKS.md
```

---

# Command-Source Observation

Complete the flow based on what you observed.

```text
User

↓

____________________________

↓

micro:bit Program

↓

____________________________

↓

Arduino Runtime

↓

Robot Movement
```

The important new element is located before the movement command.

Most of the remaining system should already be familiar.

---

# Success Criteria

The project is operating as expected when:

- [ ] The program starts without an error.
- [ ] The robot remains stopped before user input.
- [ ] Button A produces the documented command.
- [ ] Button B produces the documented command.
- [ ] A + B produces the stop command.
- [ ] The display reflects the current command state.
- [ ] The robot can accept more than one command in a single run.
- [ ] The robot does not require a reset between normal commands.
- [ ] The shared Arduino Runtime remains unchanged.
- [ ] The existing communication path remains active.
- [ ] The learner can identify the user as the new command source.
- [ ] The learner can identify at least one element that remained stable.

---

# Learning Check

Before continuing, confirm:

- [ ] I predicted the initial robot state.
- [ ] I predicted the button behaviour.
- [ ] I observed the robot before pressing a button.
- [ ] I tested each supported input.
- [ ] I tested the stop command.
- [ ] I compared Starter Project 02 with Starter Project 01.
- [ ] I identified what changed.
- [ ] I identified what remained the same.
- [ ] I distinguished the user action from the hardware execution.
- [ ] I know when to use `TROUBLESHOOTING.md`.

---

# Continue

If the behaviour differs from the expected interaction, open:

```text
TROUBLESHOOTING.md
```

If the interaction is observable and repeatable, continue to:

```text
WHY_IT_WORKS.md
```

After understanding the design, complete:

```text
BEFORE_YOU_CONTINUE.md
```

---

# Foundation Principle

This document does not exist merely to confirm that the buttons work.

It creates a comparison between two command sources.

```text
Starter Project 01

Program Generates the Command
```

```text
Starter Project 02

User Generates the Command
```

The source changes.

The command path remains stable.

```text
User Action

↓

Event

↓

Command

↓

Communication

↓

Execution
```

Learning develops when the learner can see both the change and the
continuity.

That comparison prepares the next question:

> What happens when neither the program schedule nor the user generates the
> command, and the environment becomes the source?