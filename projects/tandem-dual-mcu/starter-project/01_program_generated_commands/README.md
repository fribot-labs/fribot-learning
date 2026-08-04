# 01 Basic Tandem Drive

> Project: Tandem Dual MCU  
> Starter Project: 01  
> Difficulty: Beginner  
> Estimated Time: 30–60 Minutes

---

# Purpose

This is the first executable project in the Tandem Dual MCU course.

The objective is **not** to learn every detail of Arduino, micro:bit, or I2C communication.

Instead, this project introduces one simple but important idea.

> **One robot can be controlled by two different processors, each with its own responsibility.**

The robot is the learning tool.

Understanding system architecture is the real objective.

---

# Learning Goal

By completing this project, you should begin understanding:

- how two microcontrollers cooperate,
- why responsibilities are separated,
- how commands become physical movement,
- why software architecture is more than writing code.

You are **not** expected to master the Tandem architecture yet.

The goal is simply to experience it for the first time.

---

# Before You Start

Before running the project, make sure you have completed the shared setup.

Arduino Runtime

```text
starter-project/

shared/

arduino/
```

micro:bit Library

```text
starter-project/

shared/

microbit/
```

If these have not been prepared, complete the installation first.

---

# Project Files

This Starter Project contains:

```text
01_basic_tandem_drive/

README.md

EXPECTED_OUTPUT.md

TROUBLESHOOTING.md

WHY_IT_WORKS.md

BEFORE_YOU_CONTINUE.md

microbit/

main.py
```

Each document has a different responsibility.

---

# Learning Flow

This project intentionally follows a different learning order from traditional tutorials.

```text
Predict

↓

Run

↓

Observe

↓

Compare

↓

Understand

↓

Reflect
```

Notice that explanation comes **after** experience.

---

# Step 1 — Predict

Before running the robot,

do **not** open the source code.

Instead,

ask yourself:

```text
How do I think the robot will move?

Which controller creates the movement?

Which controller actually drives the motors?
```

Write down your prediction.

The comparison will become important later.

---

# Step 2 — Run

Open:

```text
microbit/

main.py
```

Download the program to the micro:bit.

Power on the robot.

Observe the complete movement sequence.

Do not modify the program yet.

---

# Step 3 — Compare

After running the robot,

open:

```text
EXPECTED_OUTPUT.md
```

Compare:

- your prediction,
- the expected behaviour,
- the actual behaviour.

Do not focus on being correct.

Focus on discovering differences.

---

# Step 4 — If Something Unexpected Happens

If the robot behaves differently from expected,

do **not** immediately modify the code.

Instead,

open:

```text
TROUBLESHOOTING.md
```

Investigate the system layer by layer.

Remember:

Good engineers observe before changing.

---

# Step 5 — Understand the Design

Once the robot behaves correctly,

read:

```text
WHY_IT_WORKS.md
```

This document explains:

- why two processors are used,
- why the Runtime remains unchanged,
- why only the learner's program changes,
- why communication is part of the architecture.

It explains the design,

not merely the code.

---

# Step 6 — Check Yourself

Before continuing,

complete:

```text
BEFORE_YOU_CONTINUE.md
```

Do not ask:

> "Did the robot work?"

Ask:

> **"What do I understand now that I did not understand before?"**

Only continue when your understanding has changed.

---

# Learning Resources

Additional resources are available in:

```text
references/
```

Recommended reading:

- Hardware Foundation
- Source Materials
- Tandem Architecture

These documents provide deeper context without interrupting the hands-on learning experience.

---

# Expected Outcome

By the end of this Starter Project,

you should recognize that:

```text
One Robot

↓

Two Processors

↓

Different Responsibilities

↓

One System
```

The robot itself has not become more complicated.

Your understanding has.

---

# Common Beginner Mistakes

Avoid the following.

- changing the code before observing,
- modifying multiple variables at once,
- assuming every unexpected behaviour is a software bug,
- skipping the comparison step,
- skipping Reflection.

The learning process is more important than completing the movement sequence quickly.

---

# Next Stage

The current project uses a prepared movement sequence.

The next project changes one important responsibility.

```text
Prepared Sequence

↓

User Button

↓

Command Generation

↓

Robot Movement
```

Continue to:

```text
02_button_command
```

only after completing:

```text
BEFORE_YOU_CONTINUE.md
```

---

# Foundation Principle

Most programming tutorials begin by explaining.

This project begins by creating an experience.

Only after experiencing the system are you encouraged to compare,

question,

and understand.

Learning begins when your expectations differ from reality.

Reflection begins when you become curious about why.

That is the purpose of this Starter Project.