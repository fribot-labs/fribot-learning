# Stage 3 — Modify

> **Project:** Tandem Dual MCU  
> **Stage:** 03_MODIFY  
> **Goal:** Modify one part of the Tandem Dual MCU system at a time and observe how changes propagate through the entire robot.

---

# Purpose

In the previous stage, you observed a working Tandem Dual MCU system.

This stage begins your first experiments.

Do **not** redesign the program.

Do **not** optimize the architecture.

Instead,

change **one small thing** and observe what happens.

The objective is to discover the relationship between:

- commands,
- communication,
- execution,
- and robot behavior.

---

# Learning Goal

After completing this stage, you should understand that:

- a small software change can produce a visible physical change,
- different responsibilities belong to different processors,
- changing one processor does not automatically change the other,
- communication is part of the system itself.

---

# Modification Rule

Throughout this stage, always follow the same process.

```text
Change

↓

Run

↓

Observe

↓

Compare

↓

Understand
```

Never modify multiple variables at the same time.

---

# Modification 1 — Change Robot Speed

Locate the movement command in the micro:bit program.

Example

```python
robot.servo_speed(100, -100)
```

Change it to

```python
robot.servo_speed(50, -50)
```

Run the robot again.

---

## Observe

- Does the robot move more slowly?
- Did the movement direction change?
- Which processor generated the new command?
- Which processor actually changed the wheel speed?

---

## Think

Did you modify the Arduino program?

No.

Only the command changed.

The execution system remained the same.

---

# Modification 2 — Change Movement Time

Locate the delay or sleep value.

Example

```python
sleep(1000)
```

Change it to

```python
sleep(3000)
```

Run the robot again.

---

## Observe

- Does the robot move farther?
- Did the wheel speed change?
- What changed?
- What remained the same?

---

## Think

Changing **speed** and changing **time** produce different results.

Understanding that difference is an important engineering skill.

---

# Modification 3 — Change Direction

Modify the command sent to the wheels.

Example

```python
robot.servo_speed(100, -100)
```

Try

```python
robot.servo_speed(-100, 100)
```

or

```python
robot.servo_speed(100, 0)
```

Run the robot.

---

## Observe

- Did the robot turn?
- Did it move backward?
- Did only one wheel rotate?

---

## Think

One small change in the command can completely change the robot's behavior.

---

# Modification 4 — Change User Input

Instead of moving automatically,

connect the movement to a button.

Example

```python
if button_a.was_pressed():
    robot.servo_speed(100, -100)
```

Run again.

---

## Observe

Now the robot moves only after a human action.

The Arduino program did not change.

Only the command source changed.

---

# Modification 5 — Stop Command

Add a stop command after movement.

Example

```python
robot.servo_speed(100, -100)

sleep(1000)

robot.servo_stop()
```

Observe the robot.

---

## Think

The robot only stops after another command is sent.

The Arduino does not "decide" to stop by itself.

---

# Compare the Responsibilities

After several modifications,

compare the responsibilities again.

## micro:bit

Responsible for

- user interaction
- timing
- decisions
- command generation

---

## Arduino

Responsible for

- receiving commands
- hardware execution
- servo control
- physical movement

---

# Cause and Effect

Every modification follows the same chain.

```text
Code Change

↓

Command Change

↓

Communication

↓

Arduino Execution

↓

Robot Behavior
```

A robot never changes its behavior without a reason.

Always look for the earliest cause.

---

# Debugging Thought Process

When something unexpected happens,

avoid guessing.

Instead, investigate layer by layer.

```text
Did I change the Python code?

↓

Was the command transmitted?

↓

Did Arduino receive it?

↓

Did the servo receive a new signal?

↓

Did the robot move?

↓

If not,

where did the chain stop?
```

This systematic approach is more valuable than memorizing commands.

---

# Experiment Carefully

Good experiments change only one variable.

Bad experiments change many variables at once.

Good

```text
Speed

↓

Observe
```

Bad

```text
Speed

Direction

Timing

Sensor

Communication

↓

Confusing result
```

---

# Reflection Before the Next Stage

Consider these questions.

## Question 1

Which processor did you modify?

---

## Question 2

Which processor produced the visible movement?

---

## Question 3

How many different system layers were involved before the robot moved?

---

## Question 4

What surprised you most during today's experiments?

---

# Completion Check

Before continuing, confirm the following.

- [ ] I successfully changed one movement command.
- [ ] I changed only one variable at a time.
- [ ] I observed the resulting behavior.
- [ ] I understand the difference between speed and time.
- [ ] I understand that micro:bit creates commands.
- [ ] I understand that Arduino executes commands.
- [ ] I can explain how one software change became one physical movement.

---

# Key Idea

Changing software is easy.

Understanding **where** that change belongs is much harder.

This project is helping you recognize that distinction.

---

# Next Stage

Continue to:

```text
04_UNDERSTAND.md
```

In the next stage, you will step back from the code and examine the entire Tandem Dual MCU system as one connected architecture rather than two separate programs.