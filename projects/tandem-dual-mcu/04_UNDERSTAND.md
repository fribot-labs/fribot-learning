# Stage 4 — Understand

> **Project:** Tandem Dual MCU  
> **Stage:** 04_UNDERSTAND  
> **Goal:** Understand the Tandem Dual MCU system as one connected architecture rather than two independent programs.

---

# Purpose

Until now,

you have:

- observed a working system,
- executed the robot,
- modified individual behaviors.

Now it is time to step back.

Instead of asking,

> "How does this code work?"

begin asking,

> **"How does the entire system work?"**

This stage is about understanding relationships rather than memorizing code.

---

# Learning Goal

After completing this stage, you should understand:

- why two processors cooperate,
- how responsibilities are divided,
- where communication fits into the system,
- why software architecture becomes important as systems grow.

---

# From Program Thinking to System Thinking

At first, the project may have seemed like two separate programs.

```text
micro:bit Program

+

Arduino Program
```

After running and modifying the robot, a different picture should begin to emerge.

```text
One Robot

=

Two Processors

+

Communication

+

Shared Responsibilities
```

The software is distributed,

but the robot behaves as one system.

---

# The Responsibility Model

The Tandem Dual MCU architecture intentionally separates responsibilities.

```text
micro:bit

↓

Decision

↓

Communication

↓

Arduino

↓

Execution

↓

Robot
```

Neither processor is "more important."

Each processor performs a different role.

---

# What Does Each Processor Own?

## micro:bit

Responsible for:

- user interaction
- button input
- built-in sensors
- high-level decisions
- creating commands
- initiating communication

It answers the question:

> **"What should happen?"**

---

## Arduino

Responsible for:

- receiving commands
- servo control
- digital outputs
- analog inputs
- hardware timing
- physical execution

It answers the question:

> **"How should it happen?"**

---

# Communication Is a Responsibility

Many beginners think communication is only a cable.

In reality,

communication is part of the software architecture.

Without communication,

the two processors cannot cooperate.

```text
Decision

↓

Communication

↓

Execution
```

Removing communication breaks the entire system.

---

# A Robot Is Not One Program

One of the most important discoveries in this project is:

```text
Robot

≠

One Program
```

Instead,

a robot is a collection of cooperating components.

```text
Input

↓

Decision

↓

Communication

↓

Execution

↓

Movement
```

Each layer has a different responsibility.

---

# Trace One Movement

Imagine pressing Button A.

The movement does not begin at the motor.

Instead, it follows this path.

```text
Button A

↓

micro:bit

↓

Python Function

↓

I2C Command

↓

Arduino

↓

Servo Control

↓

Wheel Rotation

↓

Robot Movement
```

Understanding this chain is more important than memorizing individual functions.

---

# Communication Does Not Create Motion

Communication itself does not move the robot.

Communication only transfers intention.

```text
Command

↓

Transmission

↓

Execution

↓

Movement
```

This distinction is essential.

---

# Responsibility Is Different from Ability

The Arduino is capable of reading buttons.

The micro:bit is capable of driving motors.

Yet the project deliberately assigns different responsibilities.

Why?

Because good system design is about **clarity**, not only capability.

---

# Growing Systems

Imagine adding:

- ultrasonic sensors
- line sensors
- Bluetooth
- wireless remote control
- another robot

Would one processor still perform every task?

Probably not.

As systems grow,

clear responsibility becomes increasingly valuable.

---

# Think Beyond Robotics

This idea appears throughout software engineering.

Examples include:

```text
Frontend

↓

Backend
```

```text
Client

↓

Server
```

```text
Sensor Node

↓

Gateway
```

```text
AI Client

↓

AI Runtime
```

Different components perform different responsibilities,

yet together they behave as one system.

---

# Compare with the Previous Project

The Class Concept Robot introduced a different idea.

```text
State

+

Behavior

↓

Class
```

This project introduces another layer.

```text
Component

+

Responsibility

+

Communication

↓

System
```

The two projects teach different aspects of software architecture.

---

# System Boundaries

Every system should have clear boundaries.

For the Tandem Dual MCU project:

```text
micro:bit

↓

Command Boundary

↓

Arduino

↓

Hardware Boundary

↓

Robot
```

Boundaries make systems easier to understand,

maintain,

and expand.

---

# Failure Analysis

Suppose the robot does not move.

A systematic engineer investigates layer by layer.

```text
Power

↓

Program

↓

Communication

↓

Execution

↓

Hardware
```

Instead of asking:

> "Why doesn't it work?"

ask:

> **"Which responsibility failed?"**

This change in thinking is one of the most valuable outcomes of the project.

---

# Key Architectural Insight

The Tandem Dual MCU project is not really about two processors.

It is about separating concerns.

```text
Different Responsibility

↓

Clear Communication

↓

One System
```

The same principle appears in operating systems,

cloud services,

distributed computing,

robotics,

and AI systems.

---

# Questions to Think About

## Question 1

Why is communication a responsibility rather than merely a technology?

---

## Question 2

What would happen if the Arduino also tried to make every decision?

---

## Question 3

Could the micro:bit directly replace the Arduino?

If so,

what advantages might be lost?

---

## Question 4

Where does one responsibility end,

and another begin?

---

## Question 5

Can you identify similar responsibility boundaries in software systems you already know?

---

# Completion Check

Before moving to Reflection, confirm the following.

- [ ] I understand the responsibilities of both processors.
- [ ] I understand why communication is part of the architecture.
- [ ] I can explain the path from user input to robot movement.
- [ ] I understand that one robot is composed of multiple cooperating components.
- [ ] I can distinguish responsibility from capability.
- [ ] I recognize that responsibility boundaries simplify large systems.
- [ ] I can relate this project to larger software architectures.

---

# Key Idea

The most important lesson is not that two processors can control one robot.

The most important lesson is that:

```text
A complex system becomes understandable

when responsibilities are clearly separated

and communication between them is well defined.
```

---

# Next Stage

Continue to:

```text
05_REFLECT.md
```

The project is almost complete.

The final step is not to write more code,

but to reflect on how your understanding of system architecture has changed.