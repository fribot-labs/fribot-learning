# Tandem Dual MCU

> **Status:** MVP Learning Course  
> **Project ID:** `tandem-dual-mcu`  
> **Current Milestone:** Phase 1 — Command Source Architecture  
> **Difficulty:** Beginner to Intermediate  
> **Estimated Duration:** 2–4 Weeks

---

# Overview

The **Tandem Dual MCU** project introduces one of the most important ideas in
modern embedded systems:

> **A complex robotic system becomes easier to understand when
> responsibilities are clearly separated and connected through
> communication.**

Unlike traditional beginner robotics projects that place every responsibility
inside one controller, this project uses two independently executing
microcontrollers that cooperate to produce one robot behaviour.

```text
micro:bit

↓

I2C Communication

↓

Arduino

↓

Continuous-Rotation Servos

↓

Robot Movement
```

The robot is the learning medium.

The deeper objective is to understand:

- responsibility,
- communication,
- command generation,
- interpretation,
- execution,
- aand how meaningful comparison reveals system architecture.

---

# Current MVP Learning Unit

The current MVP implements:

```text
Tandem Phase 1

Command Source Architecture
```

Phase 1 compares three different sources of movement commands while preserving
one stable Tandem architecture.

```text
Program

↓

User

↓

Environment
```

The learner experiences three different interactions and gradually discovers
that most of the downstream system does not need to change.

```text
Different Command Sources

↓

One Stable Execution Architecture
```

---

# Why This Project?

Many beginner robotics projects place every responsibility inside one
microcontroller.

Initially, this may appear simple.

As more capabilities are added, however, the controller may become responsible
for:

- sensors,
- motors,
- wireless communication,
- displays,
- autonomous behaviour,
- user interaction,
- timing,
- and hardware execution.

The system becomes harder to understand because different responsibilities are
mixed together.

Eventually, an important question emerges:

> **Should one controller really do everything?**

Tandem Dual MCU allows this question to arise through direct experience rather
than theory alone.

The learner observes one robot whose behaviour depends on two processors
performing different responsibilities.

---

# Learning Goal

By completing Tandem Phase 1, the learner should begin understanding:

- why robotic systems divide responsibilities,
- why communication is part of software architecture,
- how independently executing processors cooperate,
- how different input sources become commands,
- how commands travel through a stable interface,
- why hardware execution can remain unchanged while interaction changes,
- and how one robot can behave as one system.

The learner is **not** expected to master distributed computing.

The objective is to experience the first practical step toward:

```text
System Thinking
```

---

# Hardware Responsibilities

## micro:bit

Primary responsibilities:

- MicroPython execution,
- learner-facing project logic,
- user interaction,
- built-in sensor observation,
- command-source interpretation,
- high-level command generation,
- I2C communication initiation.

In simplified form:

```text
What should happen next?
```

---

## Arduino

Primary responsibilities:

- I2C command processing,
- servo motor control,
- digital and analog I/O,
- low-level hardware timing,
- hardware-specific command execution.

In simplified form:

```text
How should the connected hardware execute the command?
```

Neither processor is better.

Each processor owns a different responsibility.

---

# Stable Tandem Architecture

Across Tandem Phase 1, the command source changes.

The downstream path remains recognizable.

```text
Input Source

↓

micro:bit Project Logic

↓

Movement Command

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino MicroAbot Runtime

↓

Continuous-Rotation Servos

↓

Robot Movement
```

This stable path makes comparison possible.

---

# Shared Setup

The shared Arduino Runtime and micro:bit communication library should be
prepared once and reused across all three Starter Projects.

```text
starter-project/

shared/

├── arduino/

└── microbit/
```

The intended setup relationship is:

```text
Shared Setup

↓

Install Once

↓

Reuse Across Projects 01, 02, and 03
```

The shared Arduino Runtime remains stable throughout Tandem Phase 1.

Only the learner-facing micro:bit project logic changes between Starter
Projects.

---

# Required Hardware

The current MVP is based on the following hardware.

## Controllers

- micro:bit v2
- Arduino Uno compatible with the MicroAbot Runtime

## Robot

- Tandem Base Robot
- two continuous-rotation servos
- battery pack
- USB cables

## Servo Configuration

```text
Left wheel servo  → Arduino digital pin 13

Right wheel servo → Arduino digital pin 12
```

Starter Project 03 uses the micro:bit built-in display light sensor.

No additional external sensor is required for the current Phase 1 project.

---

# Required Software

Prepare:

- Arduino IDE
- micro:bit Python editor or equivalent
- MicroAbot Arduino Runtime
- `microbit_abot.py`
- Starter Project source files

Version requirements should be specified only when compatibility requires
them.

---

# Constitutional Learning Flow

Tandem Phase 1 follows the Fribot Learning Constitution.

The governing principle is:

> **Learning does not begin with explanation.**

> **Learning begins when expectation meets reality.**

The common learning progression is:

```text
Predict

↓

Run

↓

Observe

↓

Compare

↓

Understand

↓

Optional Reflection
```

The learner first experiences a working system.

Architectural explanation follows experience and comparison.

---

# Start Tandem Phase 1

Before opening an individual Starter Project, review the complete Phase 1
navigation and shared setup.

- [Open Tandem Phase 1 Starter Projects](./starter-project/README.md)

The Starter Project guide explains:

- what to prepare first,
- why the projects should be completed in order,
- how Project 01, 02, and 03 are compared,
- and when Phase 1 is complete.

---

# MVP Learning Path

Complete the Starter Projects in the recommended order.

| Step | Starter Project | Command Source | Main Experience |
|---|---|---|---|
| 01 | [Program-Generated Commands](./starter-project/01_program_generated_commands/) | Program schedule | Observe a prepared movement sequence |
| 02 | [User-Generated Commands](./starter-project/02_user_generated_commands/) | User action | Generate commands through button input |
| 03 | [Environment-Generated Commands](./starter-project/03_environment_generated_commands/) | Environment change | Convert sensor observation into movement commands |

Each Starter Project can be opened independently.

However, the intended learning value emerges from completing them in order,
because every later project uses the previous project as a comparison
baseline.

---

# Starter Project 01 — Program-Generated Commands

```text
Program Schedule

↓

Movement Command

↓

Robot Movement
```

The program contains a prepared sequence.

The learner observes:

- forward movement,
- stopping,
- left and right pivots,
- backward movement,
- the complete command path.

This project establishes the baseline.

Primary question:

> **Where does the movement command begin?**

Start here:

- [01 — Program-Generated Commands](./starter-project/01_program_generated_commands/)

---

# Starter Project 02 — User-Generated Commands

```text
User Action

↓

Button Event

↓

Movement Command

↓

Robot Movement
```

The learner initiates commands through micro:bit buttons.

The project introduces:

- user-controlled timing,
- input events,
- command states,
- responsive input handling,
- explicit Stop commands.

Primary question:

> **What changed when the user became the initiating source?**

Continue here:

- [02 — User-Generated Commands](./starter-project/02_user_generated_commands/)

---

# Starter Project 03 — Environment-Generated Commands

```text
Environment Change

↓

Sensor Observation

↓

Interpretation

↓

Movement Command

↓

Robot Movement
```

The micro:bit observes ambient light and interprets sensor data as Forward or
Stop commands.

The project introduces:

- environmental input,
- continuous sensor values,
- threshold interpretation,
- hysteresis,
- state-dependent interpretation.

Primary question:

> **How does environmental data become a movement command?**

Continue here:

- [03 — Environment-Generated Commands](./starter-project/03_environment_generated_commands/)

Starter Project 03 also includes a **Reference Foundation** showing how the
micro:bit built-in light-sensor example is extended into an
environment-driven command architecture.

Reference traceability is currently limited to this sensor-based project.

---

# What Changes Across the Projects?

| Architectural Concern | Project 01 | Project 02 | Project 03 |
|---|---|---|---|
| Command source | Program | User | Environment |
| Input form | Prepared sequence | Button state | Sensor value |
| Command timing | Predetermined | User-controlled | Environment-dependent |
| Interpretation | Sequence order | Button mapping | Threshold and current-state rule |
| Learner role | Observer | Command initiator | System investigator |
| micro:bit control flow | Prepared execution | Responsive input loop | Repeated environment observation |

The main changing area is upstream of the movement-command interface.

---

# What Remains the Same?

The following remain stable across Phase 1:

- Tandem robot hardware,
- Arduino Uno,
- micro:bit,
- wheel-servo pin configuration,
- `microbit_abot.py`,
- I2C communication,
- shared Arduino Runtime,
- hardware-execution responsibility,
- continuous-rotation servo control.

```text
Command Source Changes

↓

Interpretation Changes

↓

Movement Command Interface Remains

↓

Communication Remains

↓

Runtime Execution Remains
```

This continuity is one of the central learning outcomes of the course.

---

# Common Starter Project Structure

Each Starter Project uses the same learner-facing document structure.

```text
README.md

↓

Predict

↓

microbit/main.py

↓

Run and Observe

↓

EXPECTED_OUTPUT.md

↓

TROUBLESHOOTING.md when needed

↓

WHY_IT_WORKS.md

↓

BEFORE_YOU_CONTINUE.md
```

Each file owns one educational responsibility.

| Document | Responsibility |
|---|---|
| `README.md` | Project position, purpose, and learning map |
| `EXPECTED_OUTPUT.md` | Prediction and observable comparison |
| `microbit/main.py` | Executable learning experience |
| `TROUBLESHOOTING.md` | Layer-based investigation |
| `WHY_IT_WORKS.md` | Explanation after experience |
| `BEFORE_YOU_CONTINUE.md` | Understanding change and next-stage preparation |

Do not begin with `WHY_IT_WORKS.md`.

Explanation is intended to follow experience.

---

# Moving Between Projects

Do not continue only because the robot produced the expected movement.

Before moving forward, identify:

- what generated the command,
- what changed from the previous project,
- what remained stable,
- which responsibility became clearer,
- which question should be carried into the next project.

The projects are not examinations.

They are structured comparisons.

---

# Phase 1 Completion

Tandem Phase 1 is not complete merely because all three programs ran.

You may consider the learning unit complete when you can:

- [ ] distinguish Program, User, and Environment command sources,
- [ ] explain how each source begins the command process,
- [ ] distinguish input data from command meaning,
- [ ] distinguish interpretation from hardware execution,
- [ ] trace the stable command-delivery path,
- [ ] identify what changed across the three projects,
- [ ] identify what remained stable,
- [ ] explain why the shared Arduino Runtime could be reused,
- [ ] explain why the Arduino does not need to know the original input source.

The intended relationship is:

```text
Experience

+

Comparison

+

Structural Understanding

=

Phase 1 Completion
```

---

# Relationship with GitHub

GitHub is recommended but optional for the current MVP.

Learners may record:

- branches,
- commits,
- pull requests,
- implementation changes,
- troubleshooting history.

However, GitHub should not become a barrier to beginning the project.

The learning experience remains valid without mandatory repository automation.

---

# Relationship with InnerMirror

Fribot Learning provides:

- project experience,
- observation structures,
- meaningful comparisons,
- learning questions,
- optional Reflection prompts.

InnerMirror provides a place where learners may continue their Reflection
after completing a project.

The MVP relationship is:

```text
Tandem Project

↓

Practical Experience

↓

Optional Learner Reflection

↓

InnerMirror
```

Reflection remains:

```text
Optional

and

Learner-Owned
```

During the current MVP:

- learners write a general Reflection,
- no project-specific Reflection type is introduced,
- no project metadata is automatically transferred,
- no private Runtime behaviour is exposed.

The internal implementation of Reflection processing belongs to the
InnerMirror ecosystem and remains outside the scope of this repository.

---

# MVP Boundary

The current Tandem MVP includes:

```text
Phase 1

Command Source Architecture
```

It does not yet include:

- advanced state architecture,
- class-based redesign,
- concurrency,
- asynchronous coordination,
- message scheduling,
- dual-controller failure recovery,
- sensor fusion,
- distributed responsibility analysis.

These are possible future learning extensions.

They are not part of the current MVP navigation and integration work.

---

# Future Work

Phase 2 is intentionally deferred.

The current priority is completing and validating the remaining Fribot
Learning MVP structure.

Advanced topics such as:

- State,
- Class,
- Concurrency,
- Distributed Responsibility,

may be connected after the MVP learning path is complete.

No Phase 2 project is created or required by the current milestone.

Future work will begin only after the current MVP learner journey has been
completed and validated.

---

# What This Project Does Not Teach

The current MVP intentionally excludes:

- distributed operating systems,
- advanced networking,
- ROS architecture,
- cloud robotics,
- distributed databases,
- fault-tolerant consensus,
- swarm robotics,
- multi-agent AI,
- AI orchestration.

The current objective is more fundamental:

> **Different command sources can cooperate with one stable execution
> architecture when responsibilities are clearly separated.**

---

# Relationship with Other Fribot Projects

Other Fribot projects may teach different software-engineering relationships.

For example, the Class Concept Robot may later explore:

```text
State

+

Behaviour

↓

Class
```

Tandem Phase 1 currently explores:

```text
Command Source

+

Interpretation

+

Communication

↓

System Behaviour
```

These relationships may be connected after the current MVP is complete.

They are not combined inside the present Tandem Phase 1 learning path.

---

# Foundation Principle

A learner should first experience three working command sources.

```text
Program

↓

User

↓

Environment
```

Only after comparing those experiences should the learner ask:

> **Why can the command source change while communication, Runtime, and
> hardware execution remain stable?**

The robot is the medium.

The comparison is the learning process.

The stable architecture is the discovery.

That is the purpose of Tandem Phase 1.

Meaningful Reflection may naturally emerge from that discovery.