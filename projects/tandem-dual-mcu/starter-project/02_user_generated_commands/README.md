# 02 User-Generated Commands

[← Back to Tandem Starter Projects](../README.md)

> Project: Tandem Dual MCU  
> Starter Project: 02  
> Difficulty: Beginner  
> Estimated Time: 30–45 Minutes

---

# Purpose

The previous Starter Project introduced one important idea.

```text
Program

↓

Command

↓

Robot Movement
```

The robot followed a movement sequence already written inside the program.

This project changes one important responsibility.

> **The learner now generates the command.**

The Tandem architecture remains almost entirely unchanged.

Only the command source changes.

---

# Constitutional Learning Principle

This project continues following the Learning Constitution.

The governing learning principle remains:

> **Learning does not begin with explanation.**

> **Learning begins when expectation meets reality.**

This project also continues the same learning flow.

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

The comparison is now between two different command sources.

---

# Learning Goal

By completing this project, you should begin understanding:

- how user input becomes a movement command,
- how events differ from prepared program sequences,
- why the Arduino Runtime does not need to change,
- how stable architecture supports new interaction,
- why changing one responsibility creates a new learning experience.

The purpose is not to learn every detail of button programming.

The purpose is to understand how command generation changes while the
architecture remains stable.

---

# Project Position

This project is the second step of the Tandem learning path.

```text
01

Program-Generated Commands

↓

02

User-Generated Commands

↓

03

Environment-Generated Commands
```

The command source changes.

The Tandem architecture remains.

---

# Before You Start

Complete Starter Project 01 first.

You should already understand:

- command generation,
- command execution,
- Arduino Runtime,
- micro:bit responsibility,
- communication flow.

The shared environment remains identical.

```text
shared/

arduino/

shared/

microbit/
```

No additional installation is required.

---

# What Changes?

Unlike the previous project,

the robot no longer moves automatically.

Instead,

the learner creates each movement command.

```text
User Button

↓

Command

↓

Robot Movement
```

The learner now controls **when** movement begins.

---

# What Remains the Same?

The Tandem architecture remains unchanged.

```text
micro:bit

↓

Command

↓

Arduino Runtime

↓

Robot Motion
```

The Runtime,

communication,

hardware,

and servo execution all remain the same.

Only the command source changes.

---

# Learning Flow

The project intentionally follows the same learning progression.

```text
Predict

↓

Press

↓

Observe

↓

Compare

↓

Understand

↓

Reflect
```

Notice the difference.

In Starter Project 01,

the program decided when movement occurred.

Now,

**you** decide.

---

# Step 1 — Predict

Before pressing any button,

predict what will happen.

Ask yourself:

```text
Will the robot move immediately?

Which button will create movement?

Will Arduino know which button I pressed?

Will the communication path change?
```

Write your prediction.

---

# Step 2 — Run

Download:

```text
microbit/

main.py
```

Power on the robot.

Observe.

Unlike the previous project,

the robot should remain still.

Now begin pressing the available buttons.

Observe how each button changes the robot behaviour.

Do not modify the program yet.

---

# Step 3 — Compare

Open:

```text
EXPECTED_OUTPUT.md
```

Compare:

- your prediction,
- expected behaviour,
- actual behaviour.

Then compare this project with Starter Project 01.

Ask:

```text
What changed?

What remained the same?
```

That comparison is the central learning activity.

---

# Step 4 — If Something Unexpected Happens

If the robot behaves unexpectedly,

do not immediately modify the code.

Instead,

open:

```text
TROUBLESHOOTING.md
```

Observe the system one layer at a time.

A new troubleshooting layer now exists.

```text
Button Input
```

Determine whether:

- the button generated an event,
- the event generated a command,
- the command reached Arduino,
- Arduino executed the movement.

---

# Step 5 — Understand the Design

After successfully controlling the robot,

read:

```text
WHY_IT_WORKS.md
```

This document explains:

- how button events become commands,
- why Runtime remains unchanged,
- why only command generation changed,
- why stable interfaces make system evolution easier.

The explanation becomes meaningful because you have already experienced the
difference.

---

# Step 6 — Check Yourself

Complete:

```text
BEFORE_YOU_CONTINUE.md
```

Do not ask:

> "Did the button work?"

Ask:

> **"What changed compared to the previous project?"**

Also ask:

> **"What remained exactly the same?"**

The second question is just as important.

---

# Expected Outcome

By the end of this project,

you should recognize:

```text
User

↓

Command

↓

Robot
```

while also recognizing:

```text
micro:bit

↓

Communication

↓

Arduino Runtime

↓

Robot
```

The architecture did not change.

Only the source of the command changed.

---

# Common Beginner Mistakes

Avoid:

- expecting the robot to move automatically,
- modifying the Runtime,
- changing multiple buttons at once,
- assuming Arduino knows which button was pressed,
- skipping comparison with Starter Project 01.

The comparison is the learning experience.

---

# Looking Ahead

The next project changes one responsibility again.

Instead of the user,

the environment becomes the command source.

```text
Program

↓

User

↓

Environment
```

Observe carefully.

The command source changes.

The architecture remains.

Continue to:

- [03 — Environment-Generated Commands](../03_environment_generated_commands/)

only after completing:

```text
BEFORE_YOU_CONTINUE.md
```

---

# Foundation Principle

The previous project showed that a program can generate commands.

This project shows that a learner can generate commands.

The next project will show that the environment can generate commands.

The command source evolves.

The architecture remains remarkably stable.

Learning grows through comparing those changes.

That is the purpose of this Starter Project.

---

Return to:

- [Tandem Starter Projects](../README.md)