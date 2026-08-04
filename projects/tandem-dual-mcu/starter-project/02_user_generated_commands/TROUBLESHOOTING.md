# Troubleshooting

> Project: Tandem Dual MCU  
> Starter Project: 02 — User-Generated Commands  
> Difficulty: Beginner  
> Purpose: Investigate user interaction and command generation systematically.

---

# Purpose

This document is **not** a collection of quick fixes.

Its purpose is to help you investigate unexpected behaviour using the same
engineering process introduced in Starter Project 01.

The difference is that this project introduces one completely new system
layer.

```text
User Input
```

When something unexpected happens,

do not immediately assume that:

- the robot is broken,
- the Arduino Runtime failed,
- the communication stopped,
- or the software contains a bug.

Instead,

determine **which responsibility failed.**

---

# The First Rule

Do **not** immediately modify `main.py`.

First determine:

> **Which layer produced the unexpected result?**

The investigation order is now:

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

User Input

↓

Command Selection

↓

I2C Communication

↓

Servo Execution

↓

Robot Behaviour
```

The new layers are:

```text
User Input

↓

Command Selection
```

These did not exist in Starter Project 01.

---

# Before Troubleshooting

Make the robot safe.

Confirm:

- [ ] Wheels are lifted if necessary.
- [ ] The battery is securely connected.
- [ ] The robot cannot unexpectedly drive away.
- [ ] USB cables are connected correctly.
- [ ] You understand the power switch.
- [ ] No cables interfere with wheel movement.

Only continue after the robot is safe.

---

# Troubleshooting Flow

Use the same process every time.

```text
Observe

↓

Locate the Layer

↓

Form One Hypothesis

↓

Perform One Test

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

Describe only what actually happened.

Examples:

```text
The robot never moved after startup.
```

```text
Button A produced no movement.
```

```text
Button B worked, but Button A did not.
```

```text
The robot continued moving after I released the button.
```

```text
The robot ignored the stop command.
```

Describe only the observation.

Do not explain the cause yet.

---

## My Observation

```text
____________________________________

____________________________________

____________________________________
```

---

# Step 2 — Compare With Expected Behaviour

Starter Project 02 should behave differently from Starter Project 01.

Expected startup:

```text
Power On

↓

Robot Waits

↓

User Presses Button

↓

Movement Begins
```

The robot should **not** begin moving automatically.

Ask:

```text
Did the robot wait?

↓

Did the robot respond after user input?
```

This comparison identifies whether the project still behaves like the
Program-Generated version.

---

# Step 3 — Form One Hypothesis

Choose only one possible explanation.

Examples:

```text
The button event may not have been detected.
```

```text
The command may not have been generated.
```

```text
The Arduino Runtime may not have received the command.
```

```text
The stop command may not have been sent.
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

Always investigate from the simplest external layer toward the software.

---

# Layer 1 — Safety

Confirm:

- wheels rotate freely,
- robot is safe,
- cables are clear,
- battery is secure.

---

# Layer 2 — Power

Check:

- battery connected,
- battery charged,
- Arduino powered,
- micro:bit powered,
- servo power available.

If power is unstable,

later software investigation is unlikely to help.

---

# Layer 3 — Hardware

Check:

- servo connectors,
- wheel installation,
- Arduino wiring,
- micro:bit wiring,
- loose cables.

Remember:

A disconnected cable cannot be repaired by changing Python code.

---

# Layer 4 — Arduino Runtime

Confirm:

- shared Runtime uploaded,
- correct board selected,
- correct COM port selected,
- Runtime starts normally.

The Runtime should already be running before user input occurs.

---

# Layer 5 — micro:bit Program

Confirm:

- `main.py` downloaded,
- `microbit_abot.py` present,
- startup icon displayed,
- waiting state entered.

The robot should begin in a stopped state.

If movement begins immediately,

the program may still behave like Starter Project 01.

---

# Layer 6 — User Input

This is the new learning layer.

Ask:

```text
Did the button generate an event?
```

Observe:

- Button A
- Button B
- A+B

Test one button at a time.

Do not press several buttons randomly.

---

# Layer 7 — Command Selection

User input is **not** the command itself.

The program first interprets the button event.

```text
Button

↓

Program Decision

↓

Movement Command
```

Ask:

```text
Was the button detected?

↓

Was the correct command selected?
```

Observe the micro:bit display.

Does the displayed arrow match the button you pressed?

---

# Layer 8 — Communication

The command path remains unchanged.

```text
Button

↓

main.py

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

Do not assume communication succeeded simply because the button was pressed.

---

# Layer 9 — Servo Execution

Observe each wheel independently.

Check:

- left wheel,
- right wheel,
- stop command,
- forward,
- backward.

One wheel behaving unexpectedly usually indicates a lower system layer than
button handling.

---

# Layer 10 — Robot Behaviour

Only after every previous layer has been checked should you evaluate the
movement itself.

Observe:

- response timing,
- movement direction,
- stopping,
- repeated commands,
- user interaction.

---

# Common Problems

---

## Problem

The robot moves immediately after startup.

Possible causes

- old Starter Project still downloaded,
- startup command still executed,
- waiting state missing.

Check:

```text
Program Start

↓

Waiting State

↓

Button Input

↓

Movement
```

---

## Problem

Button A does nothing.

Possible causes

- button event not detected,
- incorrect button mapping,
- command not generated,
- communication failure.

Check:

- Button A event,
- display change,
- command generation,
- communication.

---

## Problem

Button B does nothing.

Repeat the same investigation process.

Do not assume both buttons fail for the same reason.

---

## Problem

A+B does not stop the robot.

Possible causes

- stop command not generated,
- A+B checked after Button A,
- A+B checked after Button B.

Confirm the input priority.

```text
A+B

↓

Stop

↓

Else

↓

Single Buttons
```

---

## Problem

The robot keeps moving after I release the button.

Ask:

Was movement designed as:

```text
Momentary
```

or

```text
State Based
```

Starter Project 02 intentionally demonstrates state-based commands.

The robot continues until another command replaces the current state.

Compare this behaviour with your expectation.

---

## Problem

The robot ignores a new button while moving.

Possible causes

- blocking movement function,
- long sleep(),
- program not returning to input loop.

Observe:

```text
Button

↓

Input Loop

↓

New Command
```

If the input loop is blocked,

the learner has discovered an important architectural limitation.

---

## Problem

Forward and backward are reversed.

Check:

- servo direction,
- wheel installation,
- speed signs.

Do not change both wheels at once.

---

## Problem

Only one wheel moves.

Check:

- servo connector,
- servo pin,
- cable direction,
- servo power.

Investigate hardware before changing button handling.

---

## Problem

Display changes but robot does not move.

This usually indicates:

```text
Button

✓

↓

Program

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

Continue investigating below the program layer.

---

# Compare Your Hypothesis

After solving the problem,

compare your first hypothesis with the real cause.

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

Compared with Starter Project 01,

what changed?

Examples:

- command source,
- waiting state,
- button events,
- user timing.

```text
____________________________________

____________________________________
```

---

# What Remained the Same?

Examples:

- Arduino Runtime,
- communication,
- hardware,
- servo execution,
- Tandem architecture.

```text
____________________________________

____________________________________
```

Recognizing stability is just as important as recognizing change.

---

# Engineering Thinking

Starter Project 01 taught:

```text
Observe

↓

Compare

↓

Understand
```

Starter Project 02 adds:

```text
User Input

↓

Command Generation

↓

Observation

↓

Comparison
```

Good engineers ask:

```text
Which responsibility changed?

↓

Which responsibility remained stable?
```

before modifying software.

Good engineers reduce uncertainty

before reducing errors.

---

# Before You Continue

Ask yourself:

```text
Did I only make the button work?

or

Did I understand how the user's action became a movement command?
```

Those are different achievements.

Continue to:

```text
WHY_IT_WORKS.md
```

only after the interaction is clearly understood.

---

# Completion Check

- [ ] I observed before changing code.
- [ ] I investigated one layer at a time.
- [ ] I verified the button event.
- [ ] I verified command generation.
- [ ] I verified communication.
- [ ] I compared my first hypothesis with the real cause.
- [ ] I identified what changed.
- [ ] I identified what remained the same.
- [ ] I understand that troubleshooting is systematic thinking.

---

# Foundation Principle

Troubleshooting is not about fixing button input.

It is about understanding how responsibilities interact.

```text
User Action

↓

Observation

↓

Hypothesis

↓

Comparison

↓

Understanding
```

Starter Project 02 demonstrates that changing the command source does **not**
require changing the entire system.

The architecture remains stable.

The learner's understanding evolves.