# Tandem Dual MCU

> **Status:** MVP Project (In Development)  
> **Project ID:** `tandem-dual-mcu`  
> **Difficulty:** Intermediate  
> **Estimated Duration:** 2–4 Weeks

---

# Overview

The **Tandem Dual MCU** project introduces one of the most important ideas in modern embedded systems:

> **A complex robotic system becomes easier to understand when responsibilities are clearly separated and connected through communication.**

Unlike traditional robotics projects that rely on a single microcontroller, this project uses two independent controllers that cooperate to produce one robot behavior.

The learner gradually discovers that communication is not simply a technical feature.

It is the bridge that allows independently responsible components to become one system.

---

# Why This Project?

Many beginner robotics projects place every responsibility inside a single microcontroller.

Initially this works well.

As more features are added:

- sensors,
- motors,
- wireless communication,
- displays,
- autonomous behaviors,
- user interaction,

the software gradually becomes more difficult to understand and maintain.

Eventually the learner begins asking:

> **Should one controller really do everything?**

This project allows that question to emerge naturally through practical experimentation rather than theoretical explanation.

---

# Learning Goal

By completing this project, the learner should understand:

- why modern robotic systems divide responsibilities,
- why communication is part of software architecture,
- how independent processors cooperate,
- how one robot can behave as one system,
- why modular systems scale more effectively.

The learner is **not** expected to master distributed computing.

The objective is to experience the first practical step toward **system thinking**.

---

# What You Will Build

The learner builds one robotic system using two cooperating microcontrollers.

```text
micro:bit

↓

I2C Communication

↓

Arduino

↓

Servo Motors

↓

Robot Movement
```

The robot itself is only the learning tool.

The true objective is understanding responsibility, communication, and collaboration.

---

# Hardware Responsibilities

## micro:bit

Primary responsibilities

- MicroPython execution
- user interaction
- built-in sensors
- high-level decision making
- I2C command generation

---

## Arduino

Primary responsibilities

- servo motor control
- digital and analog I/O
- hardware execution
- low-level timing
- I2C command processing

Neither processor is "better."

Each processor performs a different responsibility.

---

# Learning Flow

Every Fribot project follows the same learner experience.

```text
Start

↓

Run

↓

Modify

↓

Understand

↓

Reflect
```

The learner first experiences a working system.

Only after that experience does the learner begin exploring why the architecture was designed that way.

---

# Project Stages

## Stage 1 — Start

Understand the complete system before writing code.

Topics include:

- project objective
- hardware overview
- processor responsibilities
- communication overview
- expected robot behavior

The learner begins by seeing the entire architecture.

---

## Stage 2 — Run

Execute the prepared Tandem Dual MCU project.

Observe:

- micro:bit startup,
- communication,
- Arduino execution,
- robot movement.

The learner confirms a working baseline before making any changes.

---

## Stage 3 — Modify

Modify one small part of the system.

Examples include:

- movement speed,
- movement duration,
- direction,
- user input,
- command timing.

Only one change should be made at a time.

The learner observes how a software change propagates through the entire robot.

---

## Stage 4 — Understand

Step back from the code.

Instead of asking:

> "How does this function work?"

begin asking:

> "How does the complete system work?"

Topics include:

- responsibility separation,
- communication,
- architectural boundaries,
- debugging strategy,
- system thinking.

---

## Stage 5 — Reflect

Reflect on how your understanding has changed.

Example questions:

- Why do two processors cooperate?
- What responsibility belongs to each processor?
- How has your understanding of communication changed?
- What architectural idea became clear during the project?

Reflection continues through InnerMirror.

---

# Required Hardware

This MVP project is based on the following hardware.

## Controllers

- micro:bit v2
- Arduino Uno (microbit-abot compatible)

---

## Robot

- Tandem Base Robot
- two continuous rotation servos
- battery pack
- USB cable

Additional sensors may be introduced in future versions.

---

# Required Software

The learner should prepare:

- Arduino IDE
- micro:bit Python Editor (or equivalent)
- MicroAbot Library
- required project source code

The project documentation specifies any version requirements only when compatibility requires them.

---

# Starter Project

The executable project is organized as follows.

```text
starter-project/

01_basic_tandem_drive/

02_button_command/

03_sensor_role_split/
```

Each stage builds upon the previous one.

The learner always begins from a working example rather than an empty project.

---

# What You Will Learn

Through this project the learner begins understanding:

- responsibility separation,
- command generation,
- message passing,
- communication,
- modular architecture,
- debugging by system layers,
- collaboration between independent processors,
- system thinking.

The project emphasizes understanding rather than memorization.

---

# Completion Criteria

The project is complete when the learner can:

- execute the prepared Tandem Dual MCU system,
- modify one robot behavior,
- explain the responsibility of each processor,
- describe the communication flow,
- identify one architectural boundary,
- explain why responsibility separation improves system design,
- complete a Reflection through InnerMirror.

The learner is **not** expected to design a production-quality distributed system.

---

# Relationship with GitHub

GitHub is recommended but optional.

Learners may record:

- commits,
- branches,
- pull requests,
- implementation history.

However,

GitHub should never become a barrier to beginning the project.

---

# Relationship with InnerMirror

The final stage naturally continues into InnerMirror.

```text
Tandem Dual MCU

↓

Practical Experience

↓

Reflection

↓

InnerMirror

↓

Long-term Understanding
```

Reflection remains a standard InnerMirror Reflection.

The learner writes directly.

No project-specific Reflection type is introduced.

No project metadata is automatically transferred during the MVP.

---

# What This Project Does Not Teach

This project intentionally excludes:

- distributed operating systems,
- advanced networking,
- ROS architecture,
- cloud robotics,
- distributed databases,
- fault-tolerant consensus,
- swarm robotics,
- multi-agent AI,
- AI orchestration.

Those topics belong to future projects.

The purpose of this project is much simpler.

> **One robot can become easier to understand when different responsibilities are assigned to different processors.**

---

# Relationship with Other Fribot Projects

The **Class Concept Robot** project teaches:

```text
State

+

Behavior

↓

Class
```

The **Tandem Dual MCU** project teaches:

```text
Responsibility

+

Communication

↓

System
```

Together,

the two projects introduce two complementary ideas of software engineering.

```text
Class

↓

Organizes related state and behavior.

System

↓

Organizes related responsibilities.
```

---

# Foundation Principle

A learner should first experience a working dual-controller robot.

Only after observing that experience should the learner begin asking:

> **Why does separating responsibilities often produce a simpler and more maintainable system?**

This project is designed to let that understanding emerge naturally through practical experimentation rather than through theoretical explanation.