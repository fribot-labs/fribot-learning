# TROUBLESHOOTING

> Project: Tandem Dual MCU  
> Starter Project: 01 Basic Tandem Drive

---

# Purpose

This document is **not** a list of answers.

Instead,

it teaches how engineers investigate problems.

The objective is not simply to make the robot work.

The objective is to understand **how to think when something does not work.**

---

# The First Rule

Do **not** immediately modify the code.

When something unexpected happens,

first determine **where** the problem belongs.

Every robot problem belongs to one or more system layers.

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

Communication

↓

Robot Behaviour
```

Always investigate in this order.

---

# Step 1 — Safety

Before investigating any problem,

confirm the robot is safe.

Check:

- [ ] Wheels lifted from the table
- [ ] Robot cannot unexpectedly drive away
- [ ] Battery securely connected
- [ ] USB cable connected correctly
- [ ] Power switch understood

Only continue after the robot is safe.

---

# Step 2 — Observe Before Changing

Write down exactly what happened.

Example

```text
The robot did not move.

Only one wheel moved.

The robot rotated continuously.

The robot stopped halfway.

The program restarted repeatedly.
```

Do not explain the cause yet.

Only describe the observation.

---

# Step 3 — Form Your First Hypothesis

What do you think caused the problem?

Write only one hypothesis.

Example

```text
Maybe the battery is empty.

Maybe Arduino was not uploaded.

Maybe communication failed.
```

Avoid changing multiple things at once.

---

# Step 4 — Investigate by Layers

Always investigate from the outside toward the software.

---

# Layer 1 — Power

Check

- battery connected
- power switch ON
- battery charged

If power is missing,

nothing else can work.

---

# Layer 2 — Hardware

Check

- servo connectors
- wheel installation
- loose cables
- sensor wiring

A disconnected cable cannot be fixed by changing software.

---

# Layer 3 — Arduino Runtime

Confirm

- Arduino uploaded successfully
- MicroAbot library installed
- correct board selected
- correct COM port selected

The Arduino Runtime should already be running before the micro:bit starts.

---

# Layer 4 — micro:bit

Confirm

- main.py downloaded
- microbit_abot.py included
- program starts correctly

Observe the LED display.

Does it match the expected sequence?

---

# Layer 5 — Communication

Ask

```text
Did the command leave the micro:bit?

↓

Did Arduino receive it?

↓

Did Arduino execute it?
```

Do not assume communication succeeded simply because the code compiled.

---

# Layer 6 — Behaviour

Only after confirming the previous layers should you evaluate the robot movement itself.

Observe

- direction
- speed
- stopping
- turning

---

# Common Problems

---

## Problem

Robot does not move.

Possible causes

- battery disconnected
- Arduino Runtime missing
- servo power unavailable
- communication not established

Check order

```text
Power

↓

Arduino

↓

micro:bit

↓

Communication

↓

Servo
```

---

## Problem

Only one wheel moves.

Possible causes

- loose servo connector
- incorrect servo pin
- damaged servo
- wrong wheel connection

Check

- left servo
- right servo
- cable direction
- servo attachment

---

## Problem

Robot spins continuously.

Possible causes

- left/right wheel values incorrect
- servo direction misunderstanding
- wheel mounted incorrectly

Do not immediately modify both wheel values.

Change only one variable.

Observe again.

---

## Problem

Robot never stops.

Check

- stop command executed
- sleep timing
- detach sequence

Observe whether the stop command was actually sent.

---

## Problem

Program restarts repeatedly.

Possible causes

- unstable power
- communication initialization failure
- repeated reset

Observe

Does the startup sequence repeat?

---

## Problem

Nothing happens after download.

Check

- downloaded to correct micro:bit
- Arduino connected
- battery connected
- power switch ON

---

# Compare Your Hypothesis

After solving the problem,

compare your original guess with the real cause.

---

## My first hypothesis

```text
____________________________________
```

---

## Actual cause

```text
____________________________________
```

---

## What surprised me?

```text
____________________________________
```

---

## What will I check first next time?

```text
____________________________________
```

---

# Engineering Thinking

Engineers rarely solve problems by guessing.

Instead,

they reduce uncertainty.

```text
Observe

↓

Hypothesis

↓

Test

↓

Compare

↓

Understand
```

The robot becomes a learning tool for systematic thinking.

---

# Reflection Prompt

Before moving on,

consider:

```text
Did I solve the problem,

or

did I understand why the problem happened?
```

Those are different achievements.

---

# Completion Check

- [ ] I observed before changing code.
- [ ] I investigated layer by layer.
- [ ] I changed only one thing at a time.
- [ ] I compared my first hypothesis with the real cause.
- [ ] I understand that debugging is a thinking process.

---

# Foundation Principle

Troubleshooting is not about fixing robots.

It is about improving how engineers think.

Every unexpected result creates an opportunity to compare:

```text
Expectation

↓

Observation

↓

Reasoning

↓

Understanding
```

That comparison is the beginning of meaningful Reflection.

The robot is only the medium.

Your thinking is the real project.