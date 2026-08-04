# References

> **Project:** Tandem Dual MCU  
> **Directory:** `references/`  
> **Purpose:** Supporting learning resources for the Tandem Dual MCU project.

---

# Purpose

The `references/` directory contains the supporting materials that complement the Tandem Dual MCU Starter Projects.

Unlike the `starter-project/` directory, these resources are **not required** to execute the project.

Instead, they help learners understand:

- the robot hardware,
- the software architecture,
- the communication model,
- the educational background,
- the official source repositories.

The Starter Project teaches through practice.

The References explain the broader context behind that practice.

---

# Relationship with the Starter Project

The Tandem Dual MCU project intentionally separates **learning resources** from **executable projects**.

```text
Starter Project

↓

Run

↓

Modify

↓

Understand

↓

Need More Context?

↓

References
```

Learners should begin with the Starter Project whenever possible.

Reference materials are provided when additional understanding is needed.

---

# Directory Structure

```text
references/

README.md

SOURCE_MATERIALS.md

HARDWARE_FOUNDATION.md

TANDEM_ARCHITECTURE.md
```

Additional documents may be added as the project evolves.

---

# Reference Documents

## SOURCE_MATERIALS.md

Describes the official learning resources used by this project.

Examples include:

- Tandem_Robotics repository
- SelfAbot repository
- educational PDF
- YouTube videos

The document explains the role of each resource and how they relate to the Tandem project.

---

## HARDWARE_FOUNDATION.md

Introduces the physical robot platform shared by the Arduino ABOT and Tandem Dual MCU projects.

Topics include:

- chassis
- wheels
- continuous rotation servos
- batteries
- sensors
- mechanical construction

This document explains the common hardware foundation before introducing the different controller architectures.

---

## TANDEM_ARCHITECTURE.md

Explains the architectural philosophy of the Tandem Dual MCU system.

Topics include:

- responsibility separation
- communication
- system boundaries
- shared runtime
- layered architecture
- system thinking

This document focuses on **why** the system is organized the way it is rather than how individual functions are implemented.

---

# Official Learning Resources

The Tandem Dual MCU project is built upon several complementary resources.

## Official Source Code

### Tandem Robotics

Repository

https://github.com/wookjin-chung/Tandem_Robotics

Purpose

- official Arduino Runtime
- official micro:bit library
- communication implementation
- executable examples

This repository is the source of truth for the Tandem software platform.

---

### SelfAbot

Repository

https://github.com/wookjin-chung/SelfAbot

Purpose

- Arduino-only robot platform
- single-controller examples
- common robot hardware
- comparison with Tandem architecture

This repository helps learners compare single-controller and dual-controller system design.

---

## Educational Materials

### Educational PDF

The project PDF provides:

- MicroPython programming
- Arduino Runtime usage
- I2C communication
- robot examples
- sensor examples
- communication APIs

The PDF serves as the primary technical reference.

---

### YouTube

The recommended video demonstrates the Arduino-based ABOT robot.

It is **not** a Tandem Dual MCU tutorial.

Instead, it provides an excellent introduction to the robot's:

- mechanical structure,
- servo installation,
- sensor configuration,
- robot movement,
- Arduino-based programming.

Recommended video:

https://www.youtube.com/watch?v=IzXwBBxzRwA

---

# Understanding the Resource Boundaries

Each resource has a different responsibility.

```text
Tandem_Robotics

↓

Official Runtime
```

```text
SelfAbot

↓

Single MCU Reference
```

```text
Educational PDF

↓

Technical Learning
```

```text
YouTube

↓

Mechanical Foundation
```

```text
Fribot Learning

↓

Project-Based Learning
```

```text
InnerMirror

↓

Reflection
```

No single resource replaces the others.

Together they provide a complete learning experience.

---

# Recommended Learning Order

The recommended progression is:

```text
Project README

↓

Starter Project

↓

References (when needed)

↓

Reflection
```

A learner does **not** need to study every reference before beginning.

Instead:

- start building,
- return to the references whenever additional understanding is needed.

---

# Future Expansion

As the Tandem project grows, this directory may include:

```text
references/

COMMUNICATION_PROTOCOL.md

HARDWARE_CALIBRATION.md

SENSOR_GUIDE.md

ROBOT_MECHANICS.md

TROUBLESHOOTING.md

FAQ.md
```

Each document should focus on one topic.

---

# Foundation Principle

Projects teach through experience.

References deepen understanding.

The purpose of this directory is not to replace hands-on experimentation.

Its purpose is to help learners understand **why** the project works the way it does after they have experienced it.