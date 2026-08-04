# BEFORE YOU CONTINUE

> Project: Tandem Dual MCU  
> Starter Project: 01 Basic Tandem Drive

---

# Purpose

Congratulations.

Your robot has completed its first Tandem Dual MCU demonstration.

Before moving to the next stage,

pause for a moment.

Do **not** ask:

> "Did the robot work?"

Instead ask:

> **"What do I understand now that I did not understand before?"**

The goal of this document is not evaluation.

The goal is awareness.

---

# Step 1 — Experience Check

Confirm your own experience.

- [ ] I prepared the Arduino Runtime.
- [ ] I prepared the micro:bit program.
- [ ] I successfully downloaded the program.
- [ ] I watched the complete movement sequence.
- [ ] I compared the expected behavior with the actual behavior.

If any item is unchecked,

repeat the project before continuing.

---

# Step 2 — Observation Check

Did you actually observe,

or did you only watch?

Consider the following.

## Can you answer these questions?

Without looking at the code:

- Which controller generated the movement command?
- Which controller controlled the servo?
- Which controller directly moved the wheels?

If you hesitate,

repeat the experiment.

The answer is more important than memorizing the code.

---

# Step 3 — Comparison Check

One of the most important learning activities is comparison.

Complete the following.

## Before the project

I believed:

```text
____________________________________

____________________________________
```

---

## After the project

Now I understand:

```text
____________________________________

____________________________________
```

---

## The biggest difference

```text
____________________________________

____________________________________
```

Do not skip this step.

Learning becomes meaningful when change becomes visible.

---

# Step 4 — Troubleshooting Check

Suppose the robot suddenly stopped moving.

What would you check first?

Choose your own order.

```text
____ Power

____ Hardware

____ Arduino Runtime

____ micro:bit Program

____ Communication

____ Robot Behaviour
```

Now compare your answer with the troubleshooting guide.

Did your investigation order change?

---

# Step 5 — Architectural Check

Without opening the source code,

complete the following diagram.

```text
micro:bit

↓

_____________

↓

Arduino Runtime

↓

_____________

↓

Robot Movement
```

If you cannot complete it,

review:

```text
WHY_IT_WORKS.md
```

---

# Step 6 — Responsibility Check

Complete the sentences.

---

The micro:bit is mainly responsible for:

```text
____________________________________
```

---

The Arduino Runtime is mainly responsible for:

```text
____________________________________
```

---

The robot hardware is responsible for:

```text
____________________________________
```

---

# Step 7 — Engineering Thinking Check

Think about your debugging process.

Did you immediately change the code?

Or did you investigate the system first?

Circle one.

```text
Code First

or

Observation First
```

The second answer reflects the engineering mindset this project is designed to develop.

---

# Step 8 — Reflection Readiness

You are ready to continue when the following statements feel true.

- [ ] I understand more than I did before.
- [ ] I can explain why the robot moved.
- [ ] I can distinguish command generation from hardware execution.
- [ ] I know how to begin debugging.
- [ ] I understand that different responsibilities belong to different parts of the system.

---

# One Final Question

Imagine that the robot behaved differently from what you expected.

Which became more valuable?

```text
The Answer

or

The Difference
```

There is no correct choice.

Think carefully.

Many engineers eventually discover that the difference teaches more than the answer.

---

# Looking Ahead

The next project introduces a new idea.

Until now,

the robot followed a prepared sequence.

In the next stage,

**you** will begin creating the commands.

```text
Prepared Sequence

↓

User Input

↓

Decision

↓

Robot Movement
```

The architecture remains the same.

Only one responsibility changes.

Observe carefully which one.

---

# Ready?

If you can honestly answer:

> "I understand why the robot moved,

not only that it moved."

then you are ready to continue.

Proceed to:

```text
02_button_command
```

---

# Foundation Principle

Do not continue because the robot worked.

Continue because **your understanding changed.**

Projects do not exist to produce working robots.

Projects exist to produce changing engineers.

Every new stage should begin

only after the previous stage has changed

how you think.