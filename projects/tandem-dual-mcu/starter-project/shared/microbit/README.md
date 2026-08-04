# Shared micro:bit Library

> Project: Tandem Dual MCU  
> Platform: micro:bit v2

---

# Purpose

This directory defines the shared MicroPython library used by every Tandem Dual MCU Starter Project.

The actual implementation is maintained in the official Tandem Robotics repository.

This repository does not duplicate the communication library.

Instead, it provides one consistent learning workflow built upon the official implementation.

---

# Source Repository

Official Repository

https://github.com/wookjin-chung/Tandem_Robotics

The shared MicroPython library is:

```text
microbit_abot.py
```

Every Starter Project uses the same file.

---

# Responsibility

The shared library provides:

- I2C communication
- Robot API
- Servo commands
- Digital I/O
- Analog I/O
- Sensor access

The learner modifies only the project-specific `main.py`.

The shared library should remain unchanged during the MVP.

---

# Learning Architecture

```text
main.py

↓

microbit_abot.py

↓

I2C

↓

Arduino Runtime

↓

Robot
```

The learner changes the application.

The communication layer remains stable.

---

# Why One Shared Library?

Every learning stage uses the same communication API.

Only the learner's program changes.

This allows the learner to focus on:

- software structure,
- responsibility,
- communication,
- experimentation.

---

# Repository Boundary

This repository provides the learning experience.

The shared MicroPython Runtime belongs to the Tandem Robotics repository.

Keeping one official implementation prevents version divergence.

---

# Next Step

Continue to:

```text
INSTALL.md
```