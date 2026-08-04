# Tandem Dual MCU Source Materials

> **Project:** Tandem Dual MCU  
> **Purpose:** Identify the role and scope of each external resource

---

# Overview

The Tandem Dual MCU project uses several source materials.

These resources do not all explain the same system.

Each resource has a distinct responsibility.

---

# 1. Tandem Robotics Repository

Repository:

[`wookjin-chung/Tandem_Robotics`](https://github.com/wookjin-chung/Tandem_Robotics)

Purpose:

- official Arduino `MicroAbot` library,
- official micro:bit `microbit_abot.py` library,
- Tandem-compatible examples,
- dual-MCU source code,
- I2C communication implementation.

This repository is the source of truth for the Tandem Dual MCU execution libraries.

---

# 2. SelfAbot Repository

Repository:

[`wookjin-chung/SelfAbot`](https://github.com/wookjin-chung/SelfAbot)

Purpose:

- Arduino-based single-controller ABOT examples,
- direct servo and sensor control,
- common robot chassis and hardware practice,
- comparison with the Tandem Dual MCU responsibility model.

The SelfAbot repository does not implement the Tandem Dual MCU architecture.

It is used as a related reference for understanding the common mechanical platform, sensors, and direct Arduino control model.

---

# 3. ABOT Arduino Practice Video

Video:

[ABOT Arduino Practice Video](https://www.youtube.com/watch?v=IzXwBBxzRwA)

Purpose:

- common robot chassis,
- servo installation and behavior,
- mechanical configuration,
- sensor hardware,
- Arduino-based robot practice,
- physical debugging.

The video does not explain the Tandem Dual MCU software architecture.

---

# 4. Tandem Educational PDF

Purpose:

- micro:bit and Arduino connection,
- MicroPython examples,
- I2C concepts,
- MicroAbot usage,
- sensors and servo commands,
- Tandem learning examples.

The PDF should be used as the primary educational reference for the dual-controller structure.

---

# 5. Fribot Learning Documents

Purpose:

- project progression,
- controlled modification,
- architectural understanding,
- Reflection questions,
- learner-facing PBL experience.

These documents reorganize the technical resources into the Fribot learning flow.

---

# Resource Boundary

```text
YouTube

→ physical robot foundation

Tandem_Robotics

→ official code foundation

Educational PDF

→ technical learning foundation

Fribot Learning

→ PBL experience

InnerMirror

→ Reflection continuity
```

No single resource replaces all the others.

Together they provide a complete learning path.