# Tandem Dual MCU

> Status: MVP Project (Planned)  
> Project ID: `tandem-dual-mcu`  
> Difficulty: Intermediate  
> Estimated Duration: 2–4 Weeks

---

# Project Purpose

Modern robotic systems rarely rely on a single processor.

As systems become larger, responsibilities are naturally divided across
multiple controllers.

This project introduces one of the most important concepts in embedded
systems:

> **Why should different processors have different responsibilities?**

The learner does not simply connect two microcontrollers.

Instead, the learner gradually discovers why large systems become easier to
understand, maintain, and extend when responsibilities are clearly divided.

---

# Why This Project?

Many embedded projects begin with a single controller.

Initially, this approach works well.

As new features are added:

- sensors,
- motors,
- communication,
- displays,
- wireless networking,
- autonomous behaviors,

the software gradually becomes more difficult to understand.

Eventually the learner begins asking:

> "Should one controller really do everything?"

This project allows that question to emerge naturally.

The learner first experiences a working single-controller system.

Only then does the project introduce a second controller.

---

# Learning Goal

By completing this project, the learner should understand:

- why systems become complex,
- why responsibilities should be divided,
- how two controllers cooperate,
- how communication replaces direct control,
- why modular systems are easier to evolve.

The learner is **not** expected to master distributed systems.

The objective is to experience the first practical step toward distributed
thinking.

---

# Expected Learning Experience

The project follows the standard Fribot PBL learning flow.

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

Unlike a traditional communication tutorial,
this project gradually introduces collaboration between independent systems.

---

# What You Will Build

The learner will build a robotic system consisting of two independent
microcontrollers.

Typical responsibilities may include:

Controller A

- sensor processing,
- user input,
- wireless communication.

Controller B

- motor control,
- actuator management,
- low-level hardware execution.

The exact hardware configuration may change,
but the learning objective remains the same.

---

# What You Will Learn

Through this project the learner should begin understanding:

- responsibility separation,
- communication,
- message passing,
- synchronization,
- independent execution,
- modular design,
- scalability,
- fault isolation.

The learner is not expected to master every concept.

Instead, the learner should recognize why these concepts become necessary
as systems grow.

---

# Project Stages

## Stage 1 — Start

Prepare the hardware and development environment.

Understand:

- the overall project goal,
- the hardware configuration,
- the role of each controller,
- the expected final behavior.

---

## Stage 2 — Run

Execute the prepared example.

Verify that:

- both controllers operate correctly,
- communication works,
- the expected robotic behavior appears.

The learner first confirms a working baseline.

---

## Stage 3 — Modify

Make one controlled modification.

Examples:

- change a communication interval,
- modify one controller's responsibility,
- alter one message format,
- adjust one synchronization rule.

Observe how this modification changes the system.

---

## Stage 4 — Understand

Compare the original and modified system.

Begin asking:

- Which controller should own this responsibility?
- Which information should be shared?
- Which information should remain local?
- What happens when communication fails?

The learner begins seeing the robot as a collaboration of independent
systems rather than one large program.

---

## Stage 5 — Reflect

Record how your understanding changed.

Example Reflection question:

> **How has your understanding of responsibility separation changed since beginning this project?**

Reflection is completed through InnerMirror.

---

# Required Hardware

Replace this section with the actual hardware configuration.

Typical examples:

- Microcontroller A
- Microcontroller B
- Communication interface
- Robot chassis
- Motors
- Sensors
- USB cables
- Power supply

The project documentation should clearly distinguish required hardware from
optional extensions.

---

# Required Software

Replace this section with project-specific software.

Typical examples:

- Arduino IDE
- Visual Studio Code
- PlatformIO
- Communication library
- Robot control library

Only specify versions when compatibility requires them.

---

# Starter Materials

The project provides starter materials that already demonstrate basic
communication.

Typical structure:

```text
starter-code/

controller-a/

controller-b/

README.md

references/
```

The learner begins from a working example.

The learner is not expected to design a complete communication framework
from scratch.

---

# Completion Criteria

The project is complete when the learner can:

- execute the prepared dual-controller system,
- modify one communication behavior,
- explain one responsibility assigned to each controller,
- describe one benefit of separating responsibilities,
- explain one communication relationship,
- complete a Reflection in InnerMirror.

The learner is **not** expected to implement a production-quality
distributed architecture.

---

# Relationship with GitHub

GitHub is recommended.

The learner may record:

- commits,
- branches,
- pull requests,
- implementation history.

However,

GitHub is not required before the learner can begin the project.

The project should remain approachable for learners who are still becoming
comfortable with GitHub.

---

# Relationship with InnerMirror

This project naturally concludes with Reflection.

The intended experience is:

```text
Dual MCU Project

↓

Practical Collaboration Experience

↓

Reflection Entry

↓

InnerMirror

↓

Insight
```

Reflection remains a normal InnerMirror Reflection.

The learner writes directly.

No project-specific Reflection type is introduced.

---

# What This Project Does Not Teach

This project intentionally excludes:

- distributed operating systems,
- real-time scheduling theory,
- advanced networking,
- cloud robotics,
- ROS architecture,
- distributed databases,
- fault-tolerant consensus,
- multi-agent AI.

Those topics belong to future projects.

This project focuses on one practical discovery:

> **A system becomes easier to understand when responsibilities are clearly divided.**

---

# Foundation Principle

A learner should first experience one working controller.

Then experience two cooperating controllers.

Only after that experience should the learner begin asking:

> **Why is dividing responsibility often better than putting everything into one program?**

This project is designed to let that understanding emerge naturally through
practical experimentation rather than through theoretical explanation.