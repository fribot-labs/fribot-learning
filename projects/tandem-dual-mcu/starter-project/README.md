# Tandem Dual MCU Starter Projects

> **Course:** Tandem Dual MCU  
> **Current Milestone:** Phase 1 — Command Source Architecture  
> **Status:** MVP Learning Path  
> **Recommended Order:** 01 → 02 → 03

---

# Purpose

This directory contains the executable learning path for Tandem Phase 1.

The three Starter Projects are designed as one comparison-based learning
sequence.

```text
01 — Program-Generated Commands

↓

02 — User-Generated Commands

↓

03 — Environment-Generated Commands
```

Each project changes the source of the command while preserving most of the
Tandem architecture.

The learner does not simply complete three robot examples.

The learner compares three different ways in which a command can begin.

```text
Program Schedule

User Action

Environment Change

↓

Interpretation

↓

Command

↓

Communication

↓

Execution
```

---

# How to Use This Directory

If this is your first visit, follow the learning path below.

```text
Shared Setup

↓

Project 01

↓

Project 02

↓

Project 03

↓

Optional Reflection
```

Do not begin with Project 02 or Project 03.

Each project uses the previous project as a comparison baseline.

Meaningful understanding emerges through comparison rather than by skipping
ahead.

## Begin Here

Complete the shared setup first.

- [Open Shared Setup](./shared/)

Then begin the first executable project.

- [Start Project 01 — Program-Generated Commands](./01_program_generated_commands/README.md)

---

# Before Starting

Before opening Starter Project 01, prepare the shared hardware and software
environment.

Confirm:

- [ ] The Tandem robot is assembled.
- [ ] The left wheel servo is connected to Arduino digital pin 13.
- [ ] The right wheel servo is connected to Arduino digital pin 12.
- [ ] The Arduino Uno is available.
- [ ] The micro:bit v2 is available.
- [ ] The battery and USB connections are ready.
- [ ] The robot can be tested safely.
- [ ] The shared Arduino Runtime has been prepared.
- [ ] `microbit_abot.py` has been prepared.

The robot should be placed in a safe test position before every execution.

---

# Shared Setup

Complete the shared setup once.

```text
shared/

├── arduino/

└── microbit/
```

Use:

- [Shared Arduino Runtime](./shared/arduino/)
- [Shared micro:bit Library](./shared/microbit/)

The intended setup relationship is:

```text
Prepare Shared Runtime Once

↓

Reuse Across Project 01

↓

Reuse Across Project 02

↓

Reuse Across Project 03
```

Do not redesign or reinstall the shared Arduino Runtime for every Starter
Project.

The shared Runtime is intentionally kept stable so that the learner can
observe what changes elsewhere in the system.

---

# Stable Hardware Configuration

The current Starter Projects use:

```text
Left wheel servo  → Arduino digital pin 13

Right wheel servo → Arduino digital pin 12
```

The stable command path is:

```text
micro:bit Project Logic

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

This path remains recognizable across all three projects.

---

# Constitutional Learning Flow

Every Starter Project follows the Fribot Learning Constitution.

The governing principle is:

> **Learning does not begin with explanation.**

> **Learning begins when expectation meets reality.**

The intended progression is:

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

Do not begin with `WHY_IT_WORKS.md`.

The explanation is designed to follow experience and comparison.

---

# Learning Order

You are now ready to begin the first executable Starter Project.

Complete the projects in the recommended order.

1. [01 — Program-Generated Commands](./01_program_generated_commands/)
2. [02 — User-Generated Commands](./02_user_generated_commands/)
3. [03 — Environment-Generated Commands](./03_environment_generated_commands/)

Each Starter Project can be opened independently.

However, the intended learning value emerges from completing them in order.

```text
Project 01

Creates the baseline
```

```text
Project 02

Changes the command source
and compares with Project 01
```

```text
Project 03

Changes the command source again
and compares all three projects
```

---

# Project 01 — Program-Generated Commands

## Command Source

```text
Program Schedule
```

## Core Relationship

```text
Program

↓

Movement Command

↓

Robot
```

## Main Experience

The robot follows a movement sequence already written into the program.

The learner observes:

- startup,
- servo attachment,
- forward movement,
- stopping,
- left and right pivots,
- backward movement,
- final completion.

## Primary Question

> **Where does the movement command begin?**

## Learning Position

This project establishes the baseline for every later comparison.

Do not skip it merely because the movement sequence appears simple.

The simplicity allows the stable architecture to become visible.

Start:

- [Open Project 01](./01_program_generated_commands/)

---

# Project 02 — User-Generated Commands

## Command Source

```text
User Action
```

## Core Relationship

```text
User

↓

Button Event

↓

Movement Command

↓

Robot
```

## Main Experience

The robot waits for user input.

The learner generates commands through the micro:bit buttons.

The project introduces:

- button-state interpretation,
- user-controlled command timing,
- Forward, Backward, and Stop states,
- responsive input handling,
- command-state transitions.

## Primary Question

> **What changed when the user became the initiating source?**

## Main Comparison

```text
Project 01

Program decides when the command occurs.
```

```text
Project 02

User action determines when the command occurs.
```

The Arduino Runtime and downstream hardware execution remain stable.

Continue:

- [Open Project 02](./02_user_generated_commands/)

---

# Project 03 — Environment-Generated Commands

## Command Source

```text
Environment Change
```

## Core Relationship

```text
Environment

↓

Sensor Observation

↓

Interpretation

↓

Movement Command

↓

Robot
```

## Main Experience

The micro:bit observes ambient light through its built-in display light
sensor.

The program interprets the sensor value and generates:

```text
Bright

↓

Forward
```

```text
Dark

↓

Stop
```

The project introduces:

- environmental input,
- numerical sensor data,
- threshold interpretation,
- hysteresis,
- state-dependent decisions,
- stable command transitions.

## Primary Question

> **How does environmental data become a movement command?**

## Main Comparison

```text
Project 01

Program Schedule
```

```text
Project 02

User Action
```

```text
Project 03

Environment Change
```

Project 03 also includes a Reference Foundation showing how the micro:bit
built-in light-sensor example is extended into a complete environment-driven
command architecture.

Continue:

- [Open Project 03](./03_environment_generated_commands/)

---

# Common Project File Structure

Each Starter Project follows the same learner-facing structure.

```text
project-folder/

├── README.md
├── EXPECTED_OUTPUT.md
├── TROUBLESHOOTING.md
├── WHY_IT_WORKS.md
├── BEFORE_YOU_CONTINUE.md
└── microbit/
    └── main.py
```

Each file owns one educational responsibility.

| File | Responsibility |
|---|---|
| `README.md` | Introduces the project position, goal, and learning flow |
| `EXPECTED_OUTPUT.md` | Defines predictions and observable comparison criteria |
| `microbit/main.py` | Provides the executable project experience |
| `TROUBLESHOOTING.md` | Guides layer-based investigation |
| `WHY_IT_WORKS.md` | Explains the architecture after experience |
| `BEFORE_YOU_CONTINUE.md` | Helps recognize understanding change and prepare the next comparison |

---

# How to Use Each Starter Project

Use the same sequence for every project.

## Recommended Reading Order

Each Starter Project uses the same document sequence.

```text
README

↓

EXPECTED_OUTPUT

↓

Run microbit/main.py

↓

TROUBLESHOOTING (if needed)

↓

WHY_IT_WORKS

↓

BEFORE_YOU_CONTINUE
```

The document order is part of the learning experience.

Do not begin with the explanation.

---

## Step 1 — Open `README.md`

Understand:

- where the project belongs,
- what command source is being introduced,
- what should be predicted,
- what should remain stable.

Do not study the implementation deeply yet.

---

## Step 2 — Predict

Write your expectations before running the project.

Possible prediction areas include:

- startup behaviour,
- command source,
- movement response,
- processor responsibility,
- what will change,
- what will remain the same.

The prediction does not need to be correct.

It exists to create a meaningful comparison.

---

## Step 3 — Run `microbit/main.py`

Download the prepared program to the micro:bit.

Run the robot in a safe test environment.

Do not modify the program immediately.

Observe the complete interaction first.

---

## Step 4 — Open `EXPECTED_OUTPUT.md`

Compare:

```text
Prediction

↓

Expected Behaviour

↓

Actual Behaviour
```

Focus on the difference.

Do not focus only on whether the robot was correct.

---

## Step 5 — Use `TROUBLESHOOTING.md` When Needed

If something unexpected occurs, investigate by responsibility layer.

```text
Observe

↓

Locate the Layer

↓

Form One Hypothesis

↓

Test One Cause

↓

Change One Thing

↓

Run Again

↓

Compare
```

Do not change several parts of the system at once.

---

## Step 6 — Read `WHY_IT_WORKS.md`

Read the architectural explanation only after the experience is observable.

Connect the explanation to:

- what you predicted,
- what you observed,
- what failed,
- what remained stable.

The goal is not code memorization.

The goal is structural understanding.

---

## Step 7 — Complete `BEFORE_YOU_CONTINUE.md`

Use the final document to examine:

- what changed in your understanding,
- what changed in the system,
- what remained stable,
- what question should continue into the next project.

Reflection remains optional.

---

# Moving Between Projects

Do not move forward only because the expected robot behaviour appeared.

Move forward when you can reasonably identify:

- the current command source,
- how the command was interpreted,
- which processor generated the high-level command,
- which processor executed the hardware operation,
- what changed from the previous project,
- what remained stable,
- which new question appeared.

The learner does not need to master every technical detail.

The learner should understand the central relationship well enough to compare
the next project.

---

# What Changes Across Phase 1?

| Concern | Project 01 | Project 02 | Project 03 |
|---|---|---|---|
| Command source | Program | User | Environment |
| Input representation | Prepared sequence | Button state | Sensor value |
| Timing | Predetermined | User-controlled | Environment-dependent |
| Interpretation | Sequence order | Button mapping | Threshold and current-state rule |
| Learner role | Observer | Command initiator | System investigator |
| Control flow | Prepared sequence | Responsive input loop | Repeated environment observation |

The most important changing region is the upstream command-generation layer.

---

# What Remains the Same Across Phase 1?

The following remain stable:

- Tandem robot hardware,
- micro:bit,
- Arduino Uno,
- servo pin configuration,
- `microbit_abot.py`,
- I2C communication,
- shared Arduino Runtime,
- servo execution,
- robot movement hardware.

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

This continuity is the architectural discovery of Phase 1.

---

# Phase 1 Comparison

The complete comparison is:

```text
Program Schedule

or

User Action

or

Environment Change

↓

Input Representation

↓

Interpretation

↓

Command State

↓

Command Translation

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Execution

↓

Robot Movement
```

Three different upstream sources connect to one reusable downstream
architecture.

---

# Phase 1 Completion Check

Tandem Phase 1 is not complete merely because all three programs ran.

You may consider the learning unit complete when:

- [ ] I completed Project 01 as the program-generated baseline.
- [ ] I compared Project 02 with Project 01.
- [ ] I compared Project 03 with Projects 01 and 02.
- [ ] I can identify Program, User, and Environment command sources.
- [ ] I can distinguish input from command meaning.
- [ ] I can distinguish interpretation from hardware execution.
- [ ] I can trace the stable micro:bit-to-Arduino command path.
- [ ] I can explain what changed across the three projects.
- [ ] I can explain what remained stable.
- [ ] I can explain why the shared Arduino Runtime did not need to change.
- [ ] I can explain why the Arduino does not need to know the original input source.
- [ ] I completed or intentionally skipped optional Reflection.

The intended completion relationship is:

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

# Reflection Boundary

Fribot Learning provides:

- executable project experiences,
- observation structures,
- meaningful comparisons,
- learning questions,
- optional Reflection prompts.

Fribot Learning does not perform:

- private Reflection analysis,
- continuity analysis,
- personal memory processing,
- identity interpretation,
- private coaching generation.

Those responsibilities belong to the InnerMirror ecosystem and remain
outside the scope of this repository.

Reflection remains:

```text
Optional

and

Learner-Owned
```

No project-specific Reflection type is required for the current MVP.

---

# GitHub Boundary

GitHub is recommended but optional.

Learners may use GitHub to record:

- branches,
- commits,
- pull requests,
- source changes,
- troubleshooting history.

However, GitHub should not prevent a learner from beginning the physical
project experience.

The current MVP does not require:

- automatic GitHub synchronization,
- mandatory pull requests,
- background repository monitoring,
- automatic project metadata transfer.

---

# MVP Boundary

This directory completes the current Tandem Phase 1 learning path.

```text
Tandem Phase 1

Command Source Architecture
```

The next repository priority is completing the remaining Fribot Learning MVP
structure.

This navigation does not begin Phase 2.

---

# Future Extension

Phase 2 is intentionally deferred until the MVP is complete.

Possible future concepts include:

- State,
- Class,
- Concurrency,
- asynchronous coordination,
- message timing,
- failure recovery,
- sensor fusion,
- Distributed Responsibility.

These concepts are not required to complete the current learning path.

No Phase 2 project should be expected inside this directory yet.

---

# Return to Course Overview

For the full Tandem Dual MCU course purpose, architecture, hardware
responsibilities, and MVP boundary, return to:

- [Tandem Dual MCU Course Overview](../README.md)

---

# Foundation Principle

The three Starter Projects are not three unrelated robot exercises.

They are one comparison.

```text
Program

↓

User

↓

Environment
```

The source changes.

The timing changes.

The interpretation changes.

The larger execution architecture remains stable.

The learner completes Tandem Phase 1 when this repeating structure becomes
visible beneath three different experiences.

Meaningful Reflection may naturally emerge from that comparison.

That is the purpose of this Starter Project navigation.

---

---

# After Phase 1

When you complete Tandem Phase 1, you may choose to continue your learning in
one of two ways.

```text
Continue Exploring

↓

Future Fribot Learning Projects
```

or

```text
Optional Reflection

↓

InnerMirror
```

Reflection remains optional.

If you would like to preserve how your understanding changed during Phase 1,
you may continue your Reflection in InnerMirror.

The purpose of Reflection is not to evaluate the project.

It is to preserve what changed in your own understanding after completing
the learning experience.

## Optional Reflection

If you would like to preserve how your understanding changed during Phase 1,
you may continue to:

The public InnerMirror link will be added when the MVP reflection entry is
available.

Reflection is optional.

You may also stop here and return when you are ready.