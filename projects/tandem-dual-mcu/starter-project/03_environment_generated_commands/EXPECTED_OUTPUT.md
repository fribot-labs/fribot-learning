# Expected Output

> Project: Tandem Dual MCU  
> Starter Project: 03 — Environment-Generated Commands  
> Difficulty: Beginner  
> Estimated Observation Time: 10–15 Minutes

---

# Purpose

This document defines what you should be able to observe when the
Environment-Generated Commands project runs correctly.

It does **not** explain the complete sensor logic.

Use it to compare:

- what you predicted,
- what the environment did,
- what the sensor observed,
- what command the program generated,
- what changed from Starter Projects 01 and 02,
- and what remained stable.

```text
Prediction

↓

Environment Change

↓

Sensor Observation

↓

System Response

↓

Comparison

↓

Understanding
```

The important result is not merely that the robot reacts to light.

The important result is that you can identify how an environmental condition
became a movement command.

---

# Before Running

Before downloading or examining `microbit/main.py`, pause and make a
prediction.

Starter Project 01 generated commands from a prepared program sequence.

Starter Project 02 generated commands from user button input.

Starter Project 03 should behave differently from both.

---

# Startup Prediction

What do you expect the robot to do immediately after power-on?

```text
____________________________________

____________________________________
```

Do you expect it to move before the sensor has observed the environment?

```text
____________________________________
```

Why?

```text
____________________________________

____________________________________
```

---

# Bright-Environment Prediction

What do you expect when the micro:bit display is exposed to sufficient light?

```text
____________________________________

____________________________________
```

Do you expect the robot to move forward immediately?

```text
____________________________________
```

---

# Dark-Environment Prediction

What do you expect when the micro:bit display is covered?

```text
____________________________________

____________________________________
```

Do you expect the robot to stop immediately?

```text
____________________________________
```

---

# Responsibility Prediction

Without reading the code, predict:

```text
Which device observes the light level?

____________________________________
```

```text
Which part decides whether the environment is bright or dark?

____________________________________
```

```text
Does the Arduino Runtime receive the raw light value?

____________________________________
```

```text
Which processor executes the wheel-servo command?

____________________________________
```

Keep these predictions.

You will revisit them after observing the robot.

---

# Expected Initial State

After the program starts, the project should enter a safe stopped state.

```text
Power On

↓

Servo Attach

↓

Stop

↓

Sensor Stabilization

↓

Observe Environment
```

The robot should not begin with an uncontrolled movement.

The program should first prepare the hardware and begin observing the current
light level.

---

# Expected Environment Mapping

The standard learning mapping for this project is:

| Environmental Condition | Interpreted State | Expected Command | Expected Robot Behaviour |
|---|---|---|---|
| Bright | Bright | Forward | Robot moves forward |
| Dark | Dark | Stop | Robot stops |
| Between thresholds | Hold current state | No new command | Current robot state remains |

The final behaviour must remain consistent with the current
`microbit/main.py`.

---

# Expected Interaction Flow

The expected responsibility chain is:

```text
Environment

↓

micro:bit Light Sensor

↓

Sensor Value

↓

Environment Interpretation

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

The environment begins the process.

The environment does not directly control the servo pins.

---

# Expected Bright-Environment Behaviour

When the display is exposed to sufficient light:

```text
Bright Environment

↓

Light Value Reaches Forward Threshold

↓

Forward Command

↓

Robot Moves Forward
```

Expected observations:

- the robot may begin from Stop,
- the sensor continues reading the environment,
- the interpreted state changes to Bright,
- the micro:bit display indicates Forward,
- both wheels begin moving,
- the robot moves forward,
- no button input is required.

The movement should feel connected to the environmental condition.

---

# Expected Dark-Environment Behaviour

When the display is covered sufficiently:

```text
Dark Environment

↓

Light Value Reaches Stop Threshold

↓

Stop Command

↓

Robot Stops
```

Expected observations:

- the interpreted state changes to Dark,
- the micro:bit display indicates Stop,
- both servo speed commands become zero,
- the robot stops,
- the program remains active,
- uncovering the display can later produce another Forward command.

Stopping should not end the program.

It should return the system to an environment-observation state.

---

# Expected Intermediate-Light Behaviour

When the light value lies between the Forward and Stop thresholds:

```text
Intermediate Light Level

↓

No New State Transition

↓

Keep Current Command
```

This means:

- a moving robot may continue moving,
- a stopped robot may remain stopped,
- the system should not rapidly alternate commands,
- no unnecessary command should be sent.

This hold region helps stabilize the environmental response.

---

# Expected micro:bit Display

The micro:bit display should indicate the current command state.

The approximate states are:

```text
Stop or Waiting

↓

Forward

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

The exact icon appearance depends on `main.py`.

The important observation is that the display changes when the interpreted
environmental state changes.

---

# Expected Robot Behaviour

## Waiting or Initial Stop

At startup:

- the robot should remain stopped briefly,
- the program should initialize the shared hardware,
- the sensor should begin observing the light level.

---

## Forward

When the environment is interpreted as bright:

- both wheels should move,
- the robot should move forward,
- small left or right drift is acceptable.

---

## Stop

When the environment is interpreted as dark:

- both wheels should stop,
- the program should remain active,
- the sensor should continue reading,
- a later bright condition should allow movement again.

---

# Repeated Environment Changes

You should be able to create more than one state change during the same
program run.

For example:

```text
Bright

↓

Forward

↓

Dark

↓

Stop

↓

Bright

↓

Forward

↓

Dark

↓

Stop
```

The robot should not require a complete reset between normal environment
changes.

---

# Response Timing

The robot should respond shortly after the environment crosses the relevant
threshold.

A small delay may be normal because the system must:

```text
Read Sensor

↓

Interpret Value

↓

Detect State Change

↓

Generate Command

↓

Transfer Command

↓

Execute Servo Operation
```

The response should still appear meaningfully connected to the environment.

---

# Sensor Observation

The light sensor produces a numerical value.

That value is not itself Forward or Stop.

Observe this distinction:

```text
Sensor Value

↓

Interpretation Rule

↓

Environment State

↓

Movement Command
```

For example:

```text
High Light Value

↓

Bright

↓

Forward
```

```text
Low Light Value

↓

Dark

↓

Stop
```

The exact numerical value may differ across rooms and devices.

The relationship matters more than one universal number.

---

# What Changes?

Compared with Starter Project 02, the following elements change:

- the command source,
- the form of input,
- the timing of command generation,
- the micro:bit's observation responsibility,
- the interpretation rule,
- the use of sensor thresholds,
- the learner's role.

```text
Before

User Button

↓

Command
```

```text
Now

Environment Condition

↓

Sensor Value

↓

Command
```

---

# What Remains the Same?

The following elements remain stable:

- the robot hardware,
- the Arduino,
- the micro:bit,
- the wheel servos,
- the servo pins,
- `microbit_abot.py`,
- I2C communication,
- the shared Arduino Runtime,
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

# Comparison Across All Three Starter Projects

| Observation | Starter Project 01 | Starter Project 02 | Starter Project 03 |
|---|---|---|---|
| Command source | Program schedule | User action | Environment change |
| Input form | Internal sequence | Button state | Sensor value |
| Command timing | Predetermined | User-controlled | Environment-dependent |
| Interpretation rule | Sequence order | Button mapping | Threshold rule |
| Arduino Runtime | Stable | Stable | Stable |
| I2C path | Stable | Stable | Stable |
| Servo hardware | Stable | Stable | Stable |
| Learner role | Observer | Command initiator | Environment observer |

The command source changes.

The downstream architecture remains recognizable.

---

# Hold-Zone Observation

Slowly change the amount of light reaching the display.

Observe whether the robot:

- changes state at one boundary,
- maintains its state through an intermediate range,
- changes back only after crossing a second boundary.

The expected pattern is:

```text
Dark

↓

Stop
```

```text
Intermediate

↓

Keep Current State
```

```text
Bright

↓

Forward
```

Do not worry if you cannot identify exact numerical boundaries yet.

Observe the stability pattern.

---

# Normal Variations

The following may be normal:

- different light values in different rooms,
- different response depending on display orientation,
- small changes caused by shadows,
- slightly delayed command transitions,
- different behaviour depending on how completely the display is covered,
- minor forward drift,
- different sensor readings between micro:bit devices,
- small fluctuations that do not change the command state.

These variations do not automatically indicate a software failure.

---

# Unexpected Behaviour

The following usually requires investigation:

- the robot moves before initialization is complete,
- bright conditions never produce Forward,
- dark conditions never produce Stop,
- the robot rapidly alternates between Forward and Stop,
- the display changes but the robot does not respond,
- the robot responds only after a very long delay,
- uncovering the display does not restore movement,
- the sensor appears stuck at one value,
- the movement mapping differs from the documentation,
- the program resets during environment changes,
- one wheel does not respond,
- the Arduino Runtime appears unresponsive.

If one of these occurs, continue with:

```text
TROUBLESHOOTING.md
```

Do not immediately rewrite the thresholds or Runtime.

---

# Threshold-Stability Check

Observe the robot near the light boundary.

Ask:

```text
Does the robot switch repeatedly because of small light changes?
```

If the answer is yes, record:

- the environmental condition,
- how often the state changes,
- whether the display changes with it,
- whether the robot is near one threshold.

This observation may reveal why two thresholds are used.

The explanation appears later in:

```text
WHY_IT_WORKS.md
```

---

# Compare Your Prediction

After running the project, return to your original predictions.

---

## What Happened at Startup?

```text
____________________________________

____________________________________
```

---

## What Happened in Bright Conditions?

```text
____________________________________

____________________________________
```

---

## What Happened in Dark Conditions?

```text
____________________________________

____________________________________
```

---

## What Happened Between the Two Conditions?

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
Did the Arduino read the light level?
```

```text
Or did the micro:bit interpret the environment and send a movement command?
```

Also consider:

```text
Did changing from button input to light input require changing the shared
Arduino Runtime?
```

Do not force a complete answer yet.

These relationships will be explained in:

```text
WHY_IT_WORKS.md
```

---

# Environment-to-Command Observation

Complete the flow based on what you observed.

```text
Environment

↓

____________________________

↓

Sensor Value

↓

____________________________

↓

Movement Command

↓

____________________________

↓

Robot Movement
```

The new responsibilities are concentrated before the stable command and
execution path.

---

# Success Criteria

The project is operating as expected when:

- [ ] The program starts without an error.
- [ ] The robot begins from a stopped state.
- [ ] The light sensor begins observing the environment.
- [ ] Bright conditions generate Forward.
- [ ] Dark conditions generate Stop.
- [ ] The display reflects the current command state.
- [ ] The robot can respond to repeated environment changes.
- [ ] The robot does not require a reset between normal state changes.
- [ ] Intermediate light values preserve the current command.
- [ ] Small fluctuations do not cause constant command oscillation.
- [ ] The shared Arduino Runtime remains unchanged.
- [ ] The existing communication path remains active.
- [ ] The learner can identify the environment as the initiating source.
- [ ] The learner can distinguish sensor data from movement command.
- [ ] The learner can identify at least one stable system responsibility.

---

# Learning Check

Before continuing, confirm:

- [ ] I predicted the startup behaviour.
- [ ] I predicted the bright-environment response.
- [ ] I predicted the dark-environment response.
- [ ] I observed the robot before changing thresholds.
- [ ] I tested more than one environment change.
- [ ] I observed the intermediate-light behaviour.
- [ ] I compared Starter Projects 01, 02, and 03.
- [ ] I identified what changed.
- [ ] I identified what remained the same.
- [ ] I distinguished sensor value from environment meaning.
- [ ] I distinguished environment meaning from movement command.
- [ ] I know when to use `TROUBLESHOOTING.md`.

---

# Continue

If the environmental response differs from the expected behaviour, open:

```text
TROUBLESHOOTING.md
```

If the response is observable and repeatable, continue to:

```text
WHY_IT_WORKS.md
```

After understanding the design, complete:

```text
BEFORE_YOU_CONTINUE.md
```

---

# Foundation Principle

This document does not exist merely to confirm that the light sensor works.

It creates the final comparison in Tandem Phase 1.

```text
Starter Project 01

Program Generates the Command
```

```text
Starter Project 02

User Initiates the Command
```

```text
Starter Project 03

Environment Initiates the Command Process
```

The environment changes.

The sensor produces data.

The program interprets that data.

The movement command travels through the same stable architecture.

```text
Environment

↓

Observation

↓

Interpretation

↓

Command

↓

Communication

↓

Execution
```

Learning develops when the learner can see both the new source and the stable
system beneath it.

That comparison completes the first Tandem command-source sequence.