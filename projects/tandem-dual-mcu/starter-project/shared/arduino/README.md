# Shared Arduino Runtime

> Project: Tandem Dual MCU  
> Directory: `starter-project/shared/arduino/`

---

# Purpose

This directory does **not** implement a new Arduino Runtime.

Instead, it defines the shared Arduino Runtime used by every Starter Project in this repository.

The actual runtime implementation is provided by the **Tandem_Robotics** project.

The learner installs the official Arduino library once and reuses it throughout all Tandem Dual MCU learning stages.

---

# Source of Truth

The official Arduino Runtime is maintained in:

**Tandem_Robotics**

GitHub Repository

https://github.com/wookjin-chung/Tandem_Robotics

The repository contains:

```text
arduino/

MicroAbot.zip

MicroAbot/

examples/

microbit_abot/
```

Do not create another implementation inside this repository.

The public PBL repository should always use the official Runtime.

---

# Required Library

Install the official Arduino library.

```text
MicroAbot.zip
```

Installation

```text
Arduino IDE

↓

Sketch

↓

Include Library

↓

Add .ZIP Library

↓

MicroAbot.zip
```

---

# Shared Arduino Sketch

After installing the library,

open:

```text
MicroAbot

↓

examples

↓

microbit_abot

↓

microbit_abot.ino
```

Upload the sketch to the Arduino Uno.

The example already provides the shared Arduino Runtime used throughout this course.

---

# Runtime Responsibility

The Arduino Runtime owns:

- I2C slave communication
- command decoding
- servo control
- digital input
- digital output
- analog output
- sensor access

The learner does not modify these responsibilities during the MVP.

---

# Reuse Strategy

Every Starter Project uses the same Arduino Runtime.

```text
Stage 01

↓

Stage 02

↓

Stage 03

↓

Same Arduino Runtime
```

Only the micro:bit program changes.

This allows learners to focus on responsibility separation instead of repeatedly rebuilding the hardware layer.

---

# Relationship with micro:bit

```text
micro:bit

↓

microbit_abot.py

↓

I2C

↓

MicroAbot Runtime

↓

Robot Hardware
```

Both sides must use the matching libraries supplied by the Tandem_Robotics repository.

Do not mix different versions.

---

# Repository Boundary

This repository provides:

- learning documentation,
- Starter Projects,
- educational workflow.

The actual Arduino Runtime belongs to the Tandem_Robotics repository.

Keeping a single source of truth prevents version divergence and ensures that every project uses the same verified communication library.

---

# Next Step

Continue to:

```text
../microbit/README.md
```

Install the shared `microbit_abot.py` library before running the first Starter Project.

---

# Foundation Principle

The Arduino Runtime should remain stable.

Learning should happen by changing the micro:bit program,

not by rewriting the communication library.

This separation allows the learner to understand architecture before modifying infrastructure.