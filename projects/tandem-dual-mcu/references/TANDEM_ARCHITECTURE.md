# Tandem Dual MCU Architecture

> Project: Tandem Dual MCU  
> Document Type: Architecture  
> Scope: Public Learning Architecture

---

# Purpose

This document explains the architectural design of the Tandem Dual MCU project.

It does **not** explain every implementation detail.

Instead, it explains why the project is intentionally built around two cooperating microcontrollers.

The learner should understand that this project is fundamentally about **responsibility separation** rather than communication technology.

---

# Core Idea

The Tandem Dual MCU project teaches one architectural principle.

> A complex robotic system becomes easier to understand when responsibilities are clearly separated and connected through communication.

The project is therefore not about using two processors simply because two processors are available.

The second processor exists to make architectural boundaries visible.

---

# Learning Architecture

The learner experiences the following progression.

```text
One Robot

↓

Two Processors

↓

Communication

↓

Responsibility Separation

↓

System Thinking

↓

Reflection
```

The robot is only the learning medium.

The architectural understanding is the real learning objective.

---

# Overall System Architecture

The Tandem system consists of four logical layers.

```text
Learner

↓

micro:bit

↓

I2C Communication

↓

Arduino Runtime

↓

Robot Hardware
```

Each layer owns different responsibilities.

---

# Layer Responsibilities

## Learner

Responsible for:

- observing,
- experimenting,
- modifying,
- reflecting.

The learner owns the architectural decisions.

---

## micro:bit

Responsible for:

- user interaction,
- built-in sensors,
- command generation,
- high-level logic,
- communication initiation.

The micro:bit answers:

> What should happen?

---

## Arduino Runtime

Responsible for:

- receiving commands,
- interpreting commands,
- servo control,
- hardware access,
- sensor reading,
- returning requested values.

The Arduino answers:

> How should it happen?

---

## Robot Hardware

Responsible for:

- physical movement,
- sensing,
- interaction with the environment.

The hardware simply responds to electrical control.

---

# Responsibility Boundary

The project intentionally separates responsibilities.

```text
micro:bit

Decision

↓

Communication

↓

Arduino

Execution

↓

Robot
```

The communication boundary is one of the most important architectural concepts in the project.

---

# Why I2C?

The project uses I2C not because it is the only possible protocol.

It is used because it clearly demonstrates:

- master/slave communication,
- request/response,
- command transfer,
- hardware abstraction.

The communication protocol itself is not the learning objective.

Responsibility separation is.

---

# Runtime Boundary

The Arduino Runtime remains stable.

```text
Arduino Runtime

↓

Stable
```

The learner modifies only:

```text
main.py
```

The project therefore separates:

```text
Infrastructure

↓

Application
```

This mirrors real software engineering.

---

# Shared Runtime

Every Starter Project shares the same Runtime.

```text
01 Basic Drive

↓

02 Button Command

↓

03 Sensor Role Split

↓

Shared Arduino Runtime
```

The learner experiences different robot behavior without replacing the Runtime.

---

# Hardware Foundation

The Tandem project shares the same mechanical platform as the Arduino ABOT robot.

Common elements include:

- chassis,
- wheels,
- continuous rotation servos,
- sensors,
- battery,
- mechanical movement.

The controller architecture differs.

```text
Same Robot

↓

Different Software Architecture
```

This allows learners to compare architectural approaches while keeping the physical platform familiar.

---

# Relationship with Tandem_Robotics

The official implementation is maintained in:

https://github.com/wookjin-chung/Tandem_Robotics

The Fribot Learning repository does not become another Runtime repository.

Instead,

it provides:

- learning flow,
- project progression,
- educational explanations,
- Reflection.

The Runtime remains the source of truth.

---

# Relationship with SelfAbot

The SelfAbot repository demonstrates the same robot platform using a single Arduino controller.

Repository:

https://github.com/wookjin-chung/SelfAbot

This project helps learners compare:

```text
Single MCU

↓

Dual MCU
```

without changing the robot itself.

The learner therefore discovers that architecture changes independently from hardware.

---

# Relationship with Educational Resources

The Tandem project combines several educational resources.

```text
GitHub

↓

Arduino Library

↓

MicroPython Library

↓

Educational PDF

↓

YouTube

↓

PBL Project

↓

Reflection
```

Each resource has a different role.

No single resource replaces the others.

---

# Learning Philosophy

This project intentionally delays discussing advanced distributed systems.

Instead,

it begins with:

- one robot,
- two processors,
- one communication channel.

The learner first experiences collaboration before studying theory.

---

# Expansion Path

Later projects may introduce:

- radio communication,
- wireless robots,
- leader/follower systems,
- multiple robots,
- cloud connectivity,
- AI-assisted robotics.

The architectural principle remains unchanged.

```text
Clear Responsibilities

↓

Clear Communication

↓

Reliable System
```

---

# Foundation Principle

The Tandem Dual MCU project is not fundamentally about I2C.

It is about understanding that software architecture improves when responsibilities become visible.

The learner should finish this project believing:

```text
A robot is not one processor.

A robot is a system of cooperating responsibilities.
```