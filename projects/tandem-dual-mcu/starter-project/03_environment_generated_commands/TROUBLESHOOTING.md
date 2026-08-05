# Troubleshooting

> Project: Tandem Dual MCU  
> Starter Project: 03 — Environment-Generated Commands  
> Difficulty: Beginner  
> Purpose: Investigate environment-driven behaviour systematically.

---

# Purpose

This document is **not** a collection of quick fixes.

Its purpose is to help you investigate how environmental conditions become
robot behaviour.

Starter Project 01 introduced:

```text
Program

↓

Command
```

Starter Project 02 introduced:

```text
User

↓

Command
```

Starter Project 03 introduces:

```text
Environment

↓

Sensor Observation

↓

Command
```

The most important question is no longer:

> "Did the robot move?"

Instead ask:

> **"Which responsibility failed?"**

---

# The First Rule

Do **not** immediately modify the threshold values.

Do **not** immediately change the code.

Instead,

identify the system layer responsible for the unexpected behaviour.

The investigation order is:

```text
Safety

↓

Power

↓

Hardware

↓

Arduino Runtime

↓

micro:bit Program

↓

Environment

↓

Sensor Reading

↓

Environment Interpretation

↓

Command Selection

↓

I2C Communication

↓

Servo Execution

↓

Robot Behaviour
```

Only after identifying the correct layer should you make a change.

---

# Before Troubleshooting

Confirm:

- [ ] Robot is in a safe testing position.
- [ ] Wheels can rotate freely.
- [ ] Battery is connected.
- [ ] Arduino is powered.
- [ ] micro:bit is powered.
- [ ] USB cable is connected correctly.

Only continue after the robot is safe.

---

# Troubleshooting Flow

Always investigate in the same order.

```text
Observe

↓

Locate the Layer

↓

Form One Hypothesis

↓

Test One Cause

↓

Change One Thing

↓

Run Again

↓

Compare
```

Never skip directly from observation to rewriting the program.

---

# Step 1 — Describe What You Observed

Describe only what happened.

Examples:

```text
The robot never moved.
```

```text
The robot never stopped.
```

```text
Covering the display changed nothing.
```

```text
The robot rapidly switched between Forward and Stop.
```

```text
The display changed but the robot did not.
```

Describe observations only.

Do not explain them yet.

---

## My Observation

```text
____________________________________

____________________________________

____________________________________
```

---

# Step 2 — Compare With Expected Behaviour

Expected startup:

```text
Power On

↓

Servo Attach

↓

Stop

↓

Observe Environment
```

Expected behaviour:

```text
Bright

↓

Forward
```

```text
Dark

↓

Stop
```

Ask:

```text
Did the robot begin from Stop?

Did the environment change the movement?

Did the robot respond repeatedly?
```

---

# Step 3 — Form One Hypothesis

Choose only one possible explanation.

Examples:

```text
The sensor may not be reading correctly.
```

```text
The threshold may never be reached.
```

```text
The environment may not actually be bright enough.
```

```text
The Arduino Runtime may not be receiving commands.
```

Avoid changing several things at once.

---

## My First Hypothesis

```text
____________________________________

____________________________________
```

---

# Step 4 — Investigate by Layers

---

# Layer 1 — Safety

Confirm:

- robot stable,
- wheels free,
- cables clear,
- battery secure.

---

# Layer 2 — Power

Check:

- battery connected,
- battery charged,
- Arduino powered,
- micro:bit powered,
- servo power available.

---

# Layer 3 — Hardware

Check:

- servo connectors,
- wheel installation,
- Arduino wiring,
- micro:bit wiring,
- loose cables.

---

# Layer 4 — Arduino Runtime

Confirm:

- shared Runtime uploaded,
- correct COM port,
- Runtime running normally.

Remember:

Starter Project 03 does **not** require a different Runtime.

---

# Layer 5 — micro:bit Program

Confirm:

- `main.py` downloaded,
- `microbit_abot.py` present,
- startup image displayed,
- Stop state entered,
- program continues running.

---

# Layer 6 — Environment

The environment itself is now part of the investigation.

Observe:

- room brightness,
- shadows,
- hand position,
- nearby light source.

Ask:

```text
Did the environment actually change?
```

---

# Layer 7 — Sensor Reading

The display acts as the light sensor.

Ask:

```text
Did the sensor observe the environmental change?
```

Remember:

```text
Environment

↓

Sensor Reading
```

is different from

```text
Environment

↓

Movement
```

---

# Layer 8 — Environment Interpretation

The sensor value is not yet a movement command.

The program first interprets the value.

```text
Sensor Value

↓

Bright

or

Dark

↓

Movement Command
```

Ask:

```text
Did the interpretation change?

Or only the sensor value?
```

---

# Layer 9 — Threshold

The project uses two thresholds.

```text
Forward Threshold

↓

Hold Zone

↓

Stop Threshold
```

If the light level stays inside the hold zone,

the command should remain unchanged.

Observe whether the robot changes only after crossing a threshold.

---

# Layer 10 — Command Selection

After interpretation,

the program selects a command.

```text
Bright

↓

Forward
```

```text
Dark

↓

Stop
```

Ask:

```text
Did the interpreted state generate the expected command?
```

---

# Layer 11 — Communication

The communication path remains unchanged.

```text
micro:bit

↓

microbit_abot.py

↓

I2C

↓

Arduino Runtime
```

Ask:

```text
Did the command leave the micro:bit?

↓

Did Arduino receive it?

↓

Did Arduino execute it?
```

---

# Layer 12 — Servo Execution

Observe:

- left wheel,
- right wheel,
- Forward,
- Stop.

Servo execution should still behave exactly like Starter Projects 01 and 02.

---

# Layer 13 — Robot Behaviour

Finally observe:

- response timing,
- movement,
- stopping,
- repeated state changes,
- stability.

---

# Common Problems

---

## Problem

Robot never moves.

Possible causes

- environment too dark,
- threshold too high,
- Runtime missing,
- communication failure.

Check order:

```text
Environment

↓

Sensor

↓

Threshold

↓

Communication

↓

Arduino
```

---

## Problem

Robot never stops.

Possible causes

- environment never becomes dark,
- threshold too low,
- stop command never generated.

Observe:

```text
Dark

↓

Interpretation

↓

Stop
```

---

## Problem

Robot rapidly alternates between Forward and Stop.

Possible causes

- light value near threshold,
- only one threshold used,
- unstable lighting,
- moving shadows.

Observe:

```text
Sensor Value

↓

Threshold Crossing

↓

Repeated Command Changes
```

This behaviour often indicates threshold instability,

not a hardware failure.

---

## Problem

Covering the display changes nothing.

Possible causes

- insufficient light difference,
- display not fully covered,
- sensor not reading,
- program not interpreting.

Check:

- room brightness,
- hand position,
- threshold,
- display response.

---

## Problem

Display changes but robot does not move.

Possible causes

```text
Environment

✓

↓

Sensor

✓

↓

Interpretation

✓

↓

Communication

?

↓

Arduino

?

↓

Servo

?
```

Continue investigating below the interpretation layer.

---

## Problem

Robot always moves forward.

Possible causes

- threshold never crossed,
- environment always bright,
- stop command never generated.

Observe:

```text
Current Light

↓

Threshold

↓

Command
```

---

## Problem

Robot always remains stopped.

Possible causes

- threshold never reached,
- environment too dark,
- sensor blocked,
- Forward command never generated.

---

# Compare Your Hypothesis

After solving the problem,

compare your first hypothesis with the actual cause.

---

## First Hypothesis

```text
____________________________________
```

---

## Actual Cause

```text
____________________________________
```

---

## What Surprised Me?

```text
____________________________________
```

---

## What Will I Check First Next Time?

```text
____________________________________
```

---

# What Changed?

Compared with Starter Project 02,

what changed?

Examples:

- environment,
- sensor,
- threshold,
- interpretation.

```text
____________________________________

____________________________________
```

---

# What Remained the Same?

Examples:

- Runtime,
- communication,
- hardware,
- servo execution,
- Tandem architecture.

```text
____________________________________

____________________________________
```

Understanding stability is as important as understanding change.

---

# Engineering Thinking

Starter Project 01 taught:

```text
Program

↓

Command
```

Starter Project 02 taught:

```text
User

↓

Command
```

Starter Project 03 adds:

```text
Environment

↓

Sensor

↓

Interpretation

↓

Command
```

Good engineers ask:

```text
Where was the environment observed?

↓

Where was it interpreted?

↓

Where was the command generated?
```

before modifying software.

Good engineers reduce uncertainty

before reducing errors.

---

# Before You Continue

Ask yourself:

```text
Did I only make the sensor work?

or

Did I understand how the environment became a movement command?
```

Those are different achievements.

Continue to:

```text
WHY_IT_WORKS.md
```

only after the environmental behaviour is clearly understood.

---

# Completion Check

- [ ] I observed before changing code.
- [ ] I investigated one layer at a time.
- [ ] I confirmed the environment actually changed.
- [ ] I confirmed the sensor observed the change.
- [ ] I confirmed interpretation generated the command.
- [ ] I confirmed communication.
- [ ] I compared my hypothesis with the real cause.
- [ ] I identified what changed.
- [ ] I identified what remained the same.
- [ ] I understand that troubleshooting is systematic reasoning.

---

# Foundation Principle

Troubleshooting is not about fixing sensors.

It is about understanding responsibility.

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

Starter Project 03 demonstrates that changing the command source once again
does **not** require changing the overall Tandem architecture.

The architecture remains stable.

The learner's understanding evolves.