# 03 Environment-Generated Commands

> Project: Tandem Dual MCU  
> Starter Project: 03  
> Difficulty: Beginner  
> Estimated Time: 30–45 Minutes

---

# Purpose

The previous Starter Projects introduced two command sources.

```text
Starter Project 01

Program

↓

Command

↓

Robot
```

```text
Starter Project 02

User

↓

Event

↓

Command

↓

Robot
```

This project introduces the third command source.

```text
Environment

↓

Sensor Observation

↓

Command

↓

Robot
```

The robot no longer depends only on a prepared program sequence or a user's
button press.

Instead, the system observes the surrounding environment and generates a
movement command from that observation.

The objective is not simply to learn how to read a light sensor.

The deeper objective is to understand how environmental data becomes system
behaviour.

---

# Constitutional Learning Principle

This project continues following the Fribot Learning Constitution.

The governing principle remains:

> **Learning does not begin with explanation.**

> **Learning begins when expectation meets reality.**

For that reason, this project does not begin by explaining thresholds,
environment interpretation, or hysteresis.

You will first:

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

Reflect
```

The explanation becomes meaningful only after you have observed the robot
respond to a changing environment.

---

# Learning Goal

By completing this project, you should begin understanding:

- how an environment can become an input source,
- how a sensor converts a physical condition into data,
- why sensor data is not yet a robot command,
- how software interprets continuous values,
- how an interpreted condition becomes a movement command,
- why the Arduino Runtime does not need to know which sensor was used,
- how one stable architecture can support different command sources.

You are not expected to master sensor processing yet.

The goal is to experience the relationship for the first time.

---

# Project Position

This Starter Project completes the first Tandem command-source sequence.

```text
01 — Program-Generated Commands

↓

02 — User-Generated Commands

↓

03 — Environment-Generated Commands
```

Each project changes where the command begins.

```text
Program Schedule

↓

User Action

↓

Environment Change
```

The underlying Tandem architecture remains stable.

This project therefore completes the first major comparison in the course.

---

# Command-Source Comparison

## Starter Project 01

```text
Program Schedule

↓

Movement Command
```

The program determined when the next movement occurred.

---

## Starter Project 02

```text
User Action

↓

Button Event

↓

Movement Command
```

The user determined when the next movement occurred.

---

## Starter Project 03

```text
Environment Change

↓

Sensor Value

↓

Program Interpretation

↓

Movement Command
```

The environment now provides the condition that begins the command process.

The environment does not directly control the servos.

The program still interprets the input and generates the command.

---

# Environment Input Used in This Project

This project uses the micro:bit display as a light sensor.

The built-in light-level reading allows the project to observe the surrounding
brightness without adding external sensor hardware.

The learning relationship is:

```text
Bright Environment

↓

Forward Command
```

```text
Dark Environment

↓

Stop Command
```

You can change the environment by:

- moving the robot between brighter and darker locations,
- changing nearby lighting,
- covering the micro:bit display with your hand,
- uncovering the display again.

Do not focus on producing an exact scientific light measurement.

Focus on the relationship between:

```text
Environment

↓

Observation

↓

Interpretation

↓

Command
```

---

# Before You Start

Complete Starter Projects 01 and 02 first.

You should already have experienced:

- program-generated commands,
- user-generated commands,
- command states,
- command execution,
- the shared Arduino Runtime,
- I2C communication,
- stable and changing responsibilities.

The shared environment remains the same.

```text
starter-project/

shared/

arduino/
```

```text
starter-project/

shared/

microbit/
```

No additional external sensor installation is required for this project.

---

# Project Files

This Starter Project contains:

```text
03_environment_generated_commands/

README.md

EXPECTED_OUTPUT.md

TROUBLESHOOTING.md

WHY_IT_WORKS.md

BEFORE_YOU_CONTINUE.md

microbit/

main.py
```

Each document has a different educational responsibility.

| Document | Educational Responsibility |
|---|---|
| `README.md` | Project map and command-source comparison |
| `EXPECTED_OUTPUT.md` | Environment prediction and observation criteria |
| `microbit/main.py` | Executable environment-response experience |
| `TROUBLESHOOTING.md` | Sensor, interpretation, communication, and behaviour diagnosis |
| `WHY_IT_WORKS.md` | Explanation after environmental experience |
| `BEFORE_YOU_CONTINUE.md` | Comparison of Program, User, and Environment command sources |

---

# Learning Flow

The project follows the same constitutional learning structure.

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

Reflect
```

The visible interaction is now:

```text
Observe Environment

↓

Read Sensor Value

↓

Interpret Condition

↓

Generate Command

↓

Observe Robot
```

You do not press a button to generate the movement command.

The system continuously observes its environment.

---

# What Changes?

Compared with Starter Project 02, the command source changes again.

```text
Before

User Button

↓

Command
```

```text
Now

Environment Condition

↓

Sensor Value

↓

Command
```

The following responsibilities change:

- the source of input,
- the form of input,
- the timing of command changes,
- the micro:bit's observation responsibility,
- the rule that interprets input,
- the need for threshold-based decisions.

The learner is no longer the direct command initiator.

---

# What Remains the Same?

The overall Tandem architecture remains stable.

```text
micro:bit

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

The following remain unchanged:

- the robot hardware,
- the Arduino,
- the micro:bit,
- the wheel servos,
- the servo pins,
- `microbit_abot.py`,
- the shared Arduino Runtime,
- the communication path,
- the Arduino's hardware-execution responsibility.

Only the source and interpretation of the input change.

---

# The Stable Architecture

Across all three Starter Projects, the reusable relationship is:

```text
Input Source

↓

Interpretation

↓

Command

↓

Communication

↓

Execution
```

The input source changes.

```text
Program

User

Environment
```

The later responsibilities remain mostly stable.

This is the primary architectural lesson of the Tandem Phase 1 sequence.

---

# Step 1 — Predict

Before opening `microbit/main.py`, predict how the robot will respond.

Ask yourself:

```text
Will the robot move immediately after startup?

What will happen in a bright environment?

What will happen when the display is covered?

Will the Arduino receive the raw light value?

Who decides whether the environment is bright or dark?

Will the robot change state near the brightness boundary?
```

Write your prediction.

```text
____________________________________

____________________________________

____________________________________
```

Do not worry about being correct.

The prediction exists so that the environmental response can become a
meaningful comparison.

---

# Step 2 — Run

Open:

```text
microbit/

main.py
```

Download the program to the micro:bit.

Place the robot in a safe testing position.

Power on the robot.

The project should begin from an explicit stopped state.

Allow the sensor to observe the current environment.

Do not press any buttons.

---

# Step 3 — Change the Environment

Begin with the display exposed to the surrounding light.

Observe the robot.

Then cover the micro:bit display with your hand or another object.

Observe again.

Repeat the comparison.

```text
Display Exposed

↓

Observe Robot
```

```text
Display Covered

↓

Observe Robot
```

Do not modify the threshold values yet.

First observe the prepared relationship.

---

# Step 4 — Compare

Open:

```text
EXPECTED_OUTPUT.md
```

Compare:

- your prediction,
- the expected environmental response,
- the actual sensor-driven behaviour,
- Starter Project 02,
- and the command path that remained stable.

Ask:

```text
What changed?
```

And:

```text
What remained the same?
```

Also ask:

```text
Did the environment directly send a servo command?
```

Do not answer only from memory.

Use what you observed.

---

# Step 5 — Observe the Boundary

Slowly change the amount of light reaching the display.

For example:

- partially cover the display,
- move your hand closer,
- move your hand farther away,
- change the surrounding light gradually.

Observe whether the robot changes state immediately or maintains its current
state for a range of light levels.

This boundary behaviour becomes important later.

Do not study the threshold implementation yet.

First notice that continuous environmental values must somehow become
discrete robot commands.

```text
Many Possible Light Values

↓

Forward or Stop
```

---

# Step 6 — If Something Unexpected Happens

If the robot does not respond as expected, open:

```text
TROUBLESHOOTING.md
```

Do not immediately change the thresholds.

Investigate the system one layer at a time.

```text
Environment Condition

↓

Sensor Reading

↓

Interpretation

↓

Command Selection

↓

Communication

↓

Execution
```

A robot that does not stop in darkness may have:

- an environment problem,
- a sensor-reading problem,
- an interpretation problem,
- a command problem,
- a communication problem,
- or a hardware problem.

The visible symptom does not reveal the layer automatically.

---

# Step 7 — Understand the Design

After the environmental response is observable and repeatable, read:

```text
WHY_IT_WORKS.md
```

This document explains:

- why the environment is called the command source,
- why the environment does not directly generate a servo command,
- how the light sensor produces data,
- how the program interprets continuous values,
- why thresholds are required,
- why two thresholds can stabilize behaviour,
- why the Arduino Runtime remains unchanged.

The explanation comes after the experience.

---

# Step 8 — Check Yourself

Complete:

```text
BEFORE_YOU_CONTINUE.md
```

Do not ask only:

> Did the sensor work?

Ask:

> **How did an environmental condition become a movement command?**

Also ask:

> **What changed across Program, User, and Environment command sources?**

And:

> **What remained stable across all three projects?**

This final comparison completes Tandem Phase 1.

---

# Expected Interaction

The prepared project should follow this general relationship.

```text
Power On

↓

Servo Attach

↓

Stop

↓

Observe Light Level
```

When the environment is interpreted as bright:

```text
Bright

↓

Forward Command

↓

Robot Moves Forward
```

When the environment is interpreted as dark:

```text
Dark

↓

Stop Command

↓

Robot Stops
```

When the light value remains between the two decision boundaries:

```text
Intermediate Light Level

↓

Keep Current Command
```

The robot should not rapidly switch commands because of very small changes
near one threshold.

---

# Sensor Value Is Not a Command

The project intentionally separates three concepts.

## Sensor Value

```text
A numerical light reading
```

## Environment Interpretation

```text
Bright

Dark

or Hold Current State
```

## Movement Command

```text
Forward

or Stop
```

The complete transformation is:

```text
Light Value

↓

Environment Meaning

↓

Movement Command
```

This distinction is central to the project.

---

# Why the Environment Is Called the Command Source

The environment creates the condition that begins the command process.

However, the exact responsibility chain is:

```text
Environment Changes

↓

Sensor Produces Data

↓

Program Interprets Data

↓

Program Generates Command
```

The environment is the source of change.

The program remains responsible for interpretation.

This is more accurate than saying that light directly controls the motors.

---

# Common Beginner Mistakes

Avoid the following.

## 1. Expecting Exact Light Values Everywhere

Light readings depend on:

- room lighting,
- display orientation,
- shadows,
- nearby objects,
- sensor condition.

The objective is not one universal number.

The objective is understanding the interpretation relationship.

---

## 2. Changing Thresholds Before Observing

First record the prepared behaviour.

Then modify one threshold only if the current environment makes the project
unusable.

Without a baseline, the effect of the change is unclear.

---

## 3. Treating Sensor Data as a Command

A light value such as:

```text
117
```

does not inherently mean Forward.

The program gives that value meaning through a rule.

---

## 4. Assuming the Arduino Reads the Light Sensor

The micro:bit reads and interprets the environmental input.

The Arduino Runtime receives a movement-related hardware command.

The Arduino does not need to know which sensor produced it.

---

## 5. Ignoring Boundary Instability

If the robot rapidly changes between Forward and Stop, do not assume the
sensor is broken.

The light value may be moving around a decision boundary.

Observe before changing the code.

---

## 6. Changing the Shared Runtime

This project does not require a new Arduino Runtime.

The change belongs to the micro:bit input and interpretation layer.

---

## 7. Skipping the Three-Project Comparison

This is not only a light-sensor project.

Its meaning depends on comparing:

```text
Program

vs

User

vs

Environment
```

---

# Normal Variations

The following may be normal:

- different light values in different rooms,
- small changes caused by shadows,
- slightly delayed state transitions,
- different response depending on how completely the display is covered,
- small physical drift while moving forward,
- sensor readings that do not match another micro:bit exactly.

These variations do not automatically indicate a software failure.

---

# Expected Outcome

By the end of this Starter Project, you should recognize:

```text
Environment

↓

Sensor Data

↓

Interpretation

↓

Command

↓

Robot
```

You should also recognize the complete Phase 1 comparison.

```text
Program

↓

User

↓

Environment
```

Different command sources can use the same downstream architecture.

```text
Input Source Changes

↓

Command Interface Remains

↓

Communication Remains

↓

Runtime Remains

↓

Execution Remains
```

---

# Tandem Phase 1 Completion

This project completes the first Tandem Dual MCU learning sequence.

```text
Starter Project 01

Program-Generated Commands
```

```text
Starter Project 02

User-Generated Commands
```

```text
Starter Project 03

Environment-Generated Commands
```

Together, they form one comparison-based systems lesson.

```text
Stable Architecture

+

Three Command Sources

=

Reusable System Understanding
```

---

# Learning Resources

Additional technical and architectural references are available in:

```text
references/
```

Read them after the environmental behaviour is observable.

The references should strengthen experience.

They should not replace it.

---

# Reflection

Reflection remains optional.

It becomes meaningful when you recognize something such as:

- sensor data and command meaning are different,
- the environment begins the command process without directly controlling hardware,
- interpretation belongs to the micro:bit program,
- command execution remains inside the Arduino Runtime,
- one architecture can support several input sources,
- stable responsibility boundaries make extension easier.

Possible questions include:

```text
What did I think an environmental command was?

What do I understand now?

Which responsibility changed across the three projects?

Which responsibility remained stable?

What new question appeared?
```

The learner owns the Reflection.

---

# Foundation Principle

Starter Project 01 showed:

```text
Program

↓

Command
```

Starter Project 02 showed:

```text
User

↓

Event

↓

Command
```

Starter Project 03 shows:

```text
Environment

↓

Observation

↓

Interpretation

↓

Command
```

The sources differ.

The architecture remains recognizable.

Learning develops when the learner sees that a system does not need to be
rebuilt every time its input source changes.

Clear responsibilities make local change possible.

Stable interfaces make reuse possible.

That is the purpose of this Starter Project.

---

# Reference Trace

This Starter Project reuses the following reference examples.

```text
micro:bit Examples

↓

Light Sensor Reading
```

↓

```text
Fribot Learning

↓

Environment Observation
```

↓

```text
Environment Interpretation
```

↓

```text
Movement Command
```

↓

```text
Arduino Runtime
```

The original example demonstrates how to read a light value.

This Starter Project extends that example into a complete command-generation
architecture.

The learner is encouraged to compare the original reference with the final
project implementation.
```