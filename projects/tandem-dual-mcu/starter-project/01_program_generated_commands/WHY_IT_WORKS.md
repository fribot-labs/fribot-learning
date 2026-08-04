# WHY IT WORKS

> Project: Tandem Dual MCU  
> Starter Project: 01 Basic Tandem Drive

---

# Purpose

This document does **not** explain how to write the code.

Instead,

it explains **why the project was designed this way.**

Most programming tutorials explain:

> "How does this program work?"

This document asks a different question.

> **Why was this architecture chosen?**

Understanding that difference is one of the most important learning goals of this project.

---

# The First Question

When the robot moved,

what actually made it move?

Many beginners answer:

```text
The Python program.
```

That answer is understandable.

But it is incomplete.

---

# What Actually Happened?

The movement followed a chain of responsibilities.

```text
main.py

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Signal

↓

Robot Movement
```

The robot moved because every layer performed its own responsibility.

No single component performed every task.

---

# Why Doesn't main.py Drive the Robot Directly?

A beginner may ask:

> Why not control the servos directly from main.py?

Because `main.py` has a different responsibility.

Its purpose is:

```text
Describe

What

the robot should do.
```

It does **not** describe:

```text
How

the hardware should execute it.
```

---

# Why Use a Shared Runtime?

Every Starter Project uses the same Arduino Runtime.

Only the learner's program changes.

```text
Starter Project

↓

main.py changes

↓

Arduino Runtime stays the same
```

Why?

Because changing everything at once makes learning difficult.

The project intentionally keeps one layer stable while another layer changes.

This makes comparison possible.

---

# The Hidden Design Principle

This project is built around one simple idea.

```text
Stable

↓

Changing
```

The Arduino Runtime is stable.

The learner's program changes.

The robot hardware is stable.

The learner's understanding changes.

The architecture intentionally mirrors the learning process.

---

# Why Two Microcontrollers?

The second processor was not added because the robot needed more computing power.

It was added because the learner needed to see responsibility.

One processor says:

```text
What should happen?
```

The other processor answers:

```text
How should it happen?
```

That separation is much easier to understand than one large program doing everything.

---

# Why Not Hide the Communication?

Many educational examples hide communication behind libraries.

This project does not.

Communication is visible because communication is part of the architecture.

The learner should recognize that:

```text
Decision

↓

Communication

↓

Execution
```

is itself a software structure.

---

# Why Doesn't the Project Start with Theory?

Because experience comes first.

The project intentionally follows this order.

```text
Experience

↓

Observation

↓

Comparison

↓

Understanding

↓

Reflection
```

Theory becomes much easier to understand after the learner has already experienced the system.

---

# Why Compare Before Explaining?

Suppose two learners read exactly the same explanation.

One built the robot.

The other only read the documentation.

Their understanding will not be the same.

This project therefore encourages comparison before explanation.

```text
Prediction

↓

Reality

↓

Comparison

↓

Explanation
```

The explanation becomes meaningful because the learner has something to compare it with.

---

# Why Does Reflection Appear at the End?

Reflection is not actually the last step.

Reflection begins much earlier.

It begins the first time you ask:

```text
Why did that happen?
```

Every comparison throughout this project is already preparing you for Reflection.

The final Reflection simply gathers those comparisons into one place.

---

# The Real Learning Objective

This project is not trying to teach only:

- Arduino,
- micro:bit,
- I2C,
- robotics.

Those are learning tools.

The real objective is different.

```text
Observe

↓

Compare

↓

Reason

↓

Understand

↓

Improve
```

That thinking process is transferable to every engineering discipline.

---

# Compare Your Thinking

Think back to the beginning of this project.

Before running the robot,

what did you believe?

Now compare that with your current understanding.

---

## Before

```text
____________________________________
```

---

## Now

```text
____________________________________
```

---

## What Changed?

```text
____________________________________

____________________________________

____________________________________
```

---

# One More Question

Suppose the Arduino Runtime were replaced tomorrow.

Would the learner's `main.py` necessarily change?

Why?

Think carefully before answering.

The answer reveals whether you understand the architecture or only the code.

---

# Engineering Principle

Good software is not created by making one program larger.

Good software is created by making responsibilities clearer.

This project demonstrates that principle through a robot.

Tomorrow,

the same principle may apply to:

- cloud systems,
- AI systems,
- operating systems,
- distributed services.

The hardware changes.

The architectural idea remains.

---

# Foundation Principle

The purpose of this project is not simply to move a robot.

The purpose is to change how you think about software.

When responsibilities become visible,

architecture becomes understandable.

When architecture becomes understandable,

Reflection becomes natural.

That is why this project was designed this way.