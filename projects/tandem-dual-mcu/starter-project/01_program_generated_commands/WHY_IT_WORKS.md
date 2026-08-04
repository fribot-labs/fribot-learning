# Why It Works

> Project: Tandem Dual MCU  
> Starter Project: 01 — Program-Generated Commands  
> Difficulty: Beginner  
> Read After: Running and observing the complete project sequence

---

# Purpose

This document does **not** teach you how to rewrite the program.

It explains why the project behaves as it does and why the Tandem architecture
was designed this way.

Most programming tutorials ask:

> How does this code work?

This document asks a broader question:

> **Why are these responsibilities separated in this way?**

The difference matters.

Understanding individual instructions helps you read code.

Understanding responsibility helps you read systems.

---

# Read This After Experience

Before reading this document, you should already have:

- predicted the robot's behaviour,
- run the prepared project,
- observed the complete movement sequence,
- compared the expected result with reality,
- investigated any unexpected behaviour.

The intended order is:

```text
Expectation

↓

Execution

↓

Observation

↓

Comparison

↓

Explanation

↓

Understanding
```

The explanation becomes meaningful because it now describes something you
have already experienced.

---

# The First Question

When the robot moved, what actually made it move?

A beginner may answer:

```text
The Python program made the robot move.
```

That answer is understandable.

However, it is incomplete.

The Python program began the command process.

It did not perform every responsibility required to move the robot.

---

# What Actually Happened?

The movement passed through a chain of responsibilities.

```text
microbit/main.py

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino MicroAbot Runtime

↓

Continuous-Rotation Servo Commands

↓

Robot Movement
```

Each layer contributed something different.

The robot moved because these responsibilities were connected successfully.

No single file or processor performed the entire process alone.

---

# Command Source

This Starter Project is called:

```text
01 — Program-Generated Commands
```

The movement commands originate inside `main.py`.

The program calls functions such as:

```text
move_forward()

pivot_left()

pivot_right()

move_backward()
```

No learner button determines the next command.

No sensor determines the next command.

No environmental event determines the next command.

The sequence has already been written into the program.

```text
Program State

↓

Movement Function

↓

Command Values

↓

Robot Behaviour
```

This is the first command-source baseline.

---

# What Does `main.py` Own?

`main.py` describes the learner-visible behaviour of the project.

Its responsibility includes:

- choosing the movement sequence,
- determining when each movement begins,
- determining how long each movement continues,
- selecting forward, pivot, backward, and stop behaviour,
- showing the corresponding micro:bit display image.

In simplified form:

```text
main.py

=

What should the robot do next?
```

For example:

```python
move_forward()
pivot_left()
pivot_right()
move_backward()
```

The sequence expresses intention.

It does not directly generate the electrical servo signals used by the
Arduino-connected wheels.

---

# Why Doesn't `main.py` Drive the Servos Directly?

The wheel servos are connected to the Arduino.

```text
Left wheel servo  → Arduino digital pin 13

Right wheel servo → Arduino digital pin 12
```

The micro:bit cannot directly control those Arduino pins merely by calling a
Python movement function.

The command must travel from the micro:bit environment to the Arduino Runtime.

That means the project must separate:

```text
Command Generation

from

Hardware Execution
```

The micro:bit-side program decides what movement is requested.

The Arduino-side Runtime executes the hardware operation.

---

# What Does `microbit_abot.py` Own?

`microbit_abot.py` is the micro:bit-side communication library.

It translates learner-facing method calls such as:

```python
robot.servo_speed(left_speed, right_speed)
```

into the command format expected by the Arduino MicroAbot Runtime.

Its responsibility is not to decide the learning sequence.

Its responsibility is to make communication possible.

```text
Learner Method Call

↓

Command Encoding

↓

I2C Transfer
```

Without this layer, `main.py` would need to contain low-level communication
details.

That would make the first learning experience much harder to understand.

---

# What Does I2C Own?

I2C is the communication path between the two microcontrollers.

It allows the micro:bit to send structured commands to the Arduino.

The important architectural relationship is:

```text
Decision

↓

Message

↓

Execution
```

The message must cross a hardware and software boundary.

That boundary is not an inconvenience.

It is one of the central learning features of the Tandem platform.

Communication becomes visible because the system contains two independent
controllers.

---

# What Does the Arduino Runtime Own?

The Arduino MicroAbot Runtime receives the command and performs the
hardware-specific operation.

Its responsibilities include:

- receiving the I2C command,
- interpreting the command type,
- identifying the configured servo pins,
- generating servo-control signals,
- stopping or detaching the servos when requested.

In simplified form:

```text
Arduino Runtime

=

How should the hardware execute the received command?
```

The Arduino Runtime does not choose the project sequence.

It does not decide that forward should be followed by left.

It executes the command it receives.

---

# Command Generation and Command Execution

The first major architectural distinction is:

```text
micro:bit Program

=

Command Generation and Coordination
```

```text
Arduino Runtime

=

Hardware Command Execution
```

This distinction explains why two processors can participate in one robot
without performing the same work.

They cooperate because their responsibilities differ.

---

# Why Use Two Microcontrollers?

The second controller was not added merely because the robot needed more
computing power.

For this learning platform, the deeper reason is visibility of responsibility.

With one large program, several responsibilities may appear as one block.

With two controllers, the learner can observe:

```text
One Side Chooses

↓

One Message Connects

↓

The Other Side Executes
```

The hardware architecture makes the software relationship easier to see.

---

# One Robot, Two Independent Execution Contexts

The robot appears to be one machine.

However, the micro:bit and Arduino run independently.

Each controller has:

- its own program,
- its own processor,
- its own execution timing,
- its own local responsibility.

Their cooperation is not automatic.

It depends on communication.

```text
micro:bit Execution

↓

I2C Message

↓

Arduino Execution
```

This is an early example of a distributed system relationship.

The project does not require you to master distributed-system theory.

It gives you a concrete experience from which that idea may later grow.

---

# Why Use a Shared Arduino Runtime?

Every Tandem Starter Project uses the same shared Arduino Runtime whenever
possible.

Only the learner-facing micro:bit program changes.

```text
Starter Project Changes

↓

main.py Changes

↓

Arduino Runtime Remains Stable
```

This design reduces the number of simultaneous changes.

If both programs, the hardware wiring, and the communication protocol changed
for every project, it would become difficult to know what caused the new
behaviour.

A stable Runtime makes comparison possible.

---

# Stable Platform, Changing Experience

The project is built around a deliberate contrast.

```text
Stable Platform

↓

Changing Commands

↓

Different Behaviour
```

Stable elements include:

- the robot chassis,
- the wheel servos,
- the Arduino,
- the micro:bit,
- the communication path,
- the shared Arduino Runtime,
- the overall division of responsibility.

Changing elements include:

- the current movement command,
- the speed values,
- the movement duration,
- the robot's visible behaviour,
- later, the source of the command.

The architecture stays stable enough for the learner to see the effect of one
controlled change.

---

# What Changes in This Project?

Inside the prepared program, the selected movement changes over time.

```text
Forward

↓

Pivot Left

↓

Pivot Right

↓

Backward
```

Each function produces different speed values.

Those values cause different physical wheel behaviour.

```text
Different Command Values

↓

Different Servo Actions

↓

Different Robot Movement
```

---

# What Remains the Same?

Although the movement changes, the command path remains the same.

```text
micro:bit Program

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Wheel Servos

↓

Robot Movement
```

The same system carries every command.

This distinction between changing behaviour and stable structure is one of the
most important ideas in the project.

---

# Why Are the Wheel Speeds Different?

The robot uses two continuous-rotation servos mounted on opposite sides.

Because the servos face opposite physical directions, moving the robot
forward may require opposite speed signs.

The project uses:

```text
Left wheel  → positive speed

Right wheel → negative speed
```

for forward movement.

Backward movement reverses those signs.

```text
Forward:

Left  = positive

Right = negative
```

```text
Backward:

Left  = negative

Right = positive
```

The signs are not universal mathematical truths.

They depend on the physical servo installation.

The code expresses the relationship expected by the current robot platform.

---

# Why Do the Pivot Functions Stop One Wheel?

A pivot is produced by moving one wheel while keeping the other wheel stopped.

For example:

```text
Pivot Left

=

Left wheel stopped

Right wheel moving
```

```text
Pivot Right

=

Left wheel moving

Right wheel stopped
```

The robot rotates around the side with the stopped wheel.

This makes the cause-and-effect relationship easy to observe.

A more advanced project could use different wheel speeds for smoother turns.

This Starter Project uses a simpler form because the relationship is more
visible.

---

# Why Are There Stops Between Movements?

Each movement is followed by a stop.

```text
Movement

↓

Stop

↓

Next Movement
```

The pauses are educationally intentional.

Without them, the learner may struggle to identify when one command ends and
another begins.

The stop creates a clear comparison boundary.

It helps the learner observe:

- command transition,
- movement completion,
- the next command beginning,
- whether both wheels respond correctly.

The pause is therefore not wasted time.

It is part of the learning design.

---

# Why Does the micro:bit Display Change?

The micro:bit display provides a visible sign of program state.

```text
Display Image

↓

Current Program Stage
```

For example:

- north arrow indicates forward,
- west arrow indicates left,
- east arrow indicates right,
- south arrow indicates backward,
- square indicates stop,
- check mark indicates completion.

The display helps separate two questions:

```text
Did the micro:bit reach the command?
```

and:

```text
Did the robot execute the command?
```

If the display changes but the robot does not move, the learner gains evidence
that the problem may exist after the program-stage decision.

This is why the display is also useful during troubleshooting.

---

# Why Attach the Servos Before Movement?

Before sending speed commands, the program calls:

```python
robot.servo_attachpins()
```

This prepares the configured Arduino pins for servo operation.

The relationship is:

```text
Configure Servo Pins

↓

Send Speed Commands

↓

Observe Movement
```

Explicit preparation makes the execution sequence easier to understand.

The system does not assume that hardware control is already active.

---

# Why Detach the Servos at the End?

At the end, the program calls:

```python
robot.servo_detach()
```

Detaching ends the active servo-control configuration after the prepared
sequence is complete.

The project therefore has a visible lifecycle.

```text
Attach

↓

Execute

↓

Stop

↓

Detach
```

The detach operation may not produce an obvious physical movement.

Its meaning is architectural rather than visually dramatic.

It marks the end of active hardware control for the demonstration.

---

# Why Does the Demonstration Run Once?

The movement sequence runs once and then enters a completion state.

This allows the learner to observe a clear beginning and end.

```text
Start

↓

Prepared Sequence

↓

Complete
```

Automatic infinite repetition could make it harder to identify:

- the first command,
- the last command,
- the final stop,
- the completion state.

A single run creates a bounded experience.

The learner can restart intentionally by touching the micro:bit logo or using
the physical reset control when necessary.

---

# Why Is the Command Source Important?

The Tandem learning path is organized around one major variable:

> **Where does the command come from?**

This first project uses:

```text
Program-Generated Command
```

The next projects will introduce:

```text
User-Generated Command
```

and:

```text
Environment-Generated Command
```

The source changes.

The command path remains mostly stable.

```text
Command Source

↓

micro:bit Processing

↓

Message

↓

Arduino Execution

↓

Robot Behaviour
```

This creates a controlled comparison across the course.

---

# Baseline for the Next Projects

This project establishes the baseline.

```text
01 — Program-Generated Commands

The program decides.
```

The next project changes one responsibility.

```text
02 — User-Generated Commands

The user initiates the command.
```

The following project changes it again.

```text
03 — Environment-Generated Commands

The environment initiates the command.
```

The learner can then compare:

```text
Program

vs

User

vs

Environment
```

without rebuilding the entire hardware architecture.

---

# Why Doesn't the Project Begin With Theory?

Because the project follows Experience Before Explanation.

The learner first:

```text
Predicts

↓

Runs

↓

Observes

↓

Compares
```

Only then does this document explain the architecture.

If the explanation came first, the learner might repeat the correct words
without understanding what they refer to.

Experience creates a concrete reference.

Explanation gives that reference meaning.

---

# Why Compare Before Explaining?

Imagine two learners reading the same architecture explanation.

One has already:

- seen the robot move,
- watched the display change,
- observed the stops,
- investigated a failure,
- compared expected and actual behaviour.

The other has only read the text.

The words may be identical.

The understanding is not.

This is why the project follows:

```text
Prediction

↓

Reality

↓

Comparison

↓

Explanation
```

The explanation becomes connected to memory, observation, and consequence.

---

# Why Is Troubleshooting Part of the Learning Architecture?

Troubleshooting reveals the same responsibility chain from another direction.

When the robot fails, the learner asks:

```text
Did main.py reach the command?

Did the message cross the communication boundary?

Did the Arduino Runtime receive it?

Did the servo execute it?

Did the physical robot respond?
```

Failure makes architectural layers visible.

A working system can hide its internal boundaries.

A carefully investigated failure often reveals them.

---

# Reflection Does Not Begin Because the Project Ended

Reflection is not meaningful merely because the movement sequence has
finished.

Reflection becomes meaningful when the learner recognizes a change such as:

- a previous assumption was incomplete,
- two processors have different responsibilities,
- communication is part of architecture,
- stable structure makes comparison possible,
- command source differs from command execution.

The sequence is:

```text
Experience

↓

Observation

↓

Comparison

↓

Changed Understanding

↓

Reflection
```

Reflection is therefore an outcome of meaningful experience, not a required
summary attached mechanically to the end.

---

# The Real Learning Objective

This project includes:

- Arduino,
- micro:bit,
- I2C,
- Python,
- continuous-rotation servos,
- robot movement.

These are important technical materials.

However, the deeper learning objective is:

```text
Observe

↓

Separate Responsibilities

↓

Trace Relationships

↓

Compare Change and Continuity

↓

Understand the System
```

This way of thinking transfers beyond robotics.

---

# Engineering Beyond This Robot

The same architectural idea appears in many systems.

```text
User Interface

↓

Service Request

↓

Backend Processing

↓

Database Operation
```

```text
Sensor

↓

Controller

↓

Message

↓

Actuator
```

```text
Application

↓

Operating System

↓

Hardware Driver

↓

Physical Device
```

The technologies differ.

The pattern remains:

```text
One Layer Requests

↓

Another Layer Communicates

↓

Another Layer Executes
```

The Tandem robot makes this pattern physically observable.

---

# Compare Your Thinking

Think back to your original prediction.

---

## Before Running

```text
What did I think made the robot move?

____________________________________

____________________________________
```

---

## After Observing

```text
How do I now describe the responsibility chain?

____________________________________

____________________________________
```

---

## What Changed?

```text
____________________________________

____________________________________

____________________________________
```

---

## What Remained the Same?

```text
____________________________________

____________________________________
```

---

# One More Architectural Question

Suppose the shared Arduino Runtime were replaced with a new implementation
that accepted the same approved commands.

Would `main.py` necessarily need to change?

Think carefully.

The answer depends on whether the communication contract remains compatible.

This question reveals an important architectural idea:

```text
Stable Interface

↓

Replaceable Implementation
```

The project does not require a complete answer yet.

It introduces the question for future learning.

---

# Understanding Check

Before continuing, confirm that you can explain the following in your own
words.

- [ ] The command originates inside `main.py`.
- [ ] `microbit_abot.py` translates learner-facing calls into communication.
- [ ] I2C transfers the command between processors.
- [ ] The Arduino Runtime executes the hardware operation.
- [ ] The wheel servos create physical movement.
- [ ] The two processors do not own the same responsibility.
- [ ] The movement changes while the command path remains stable.
- [ ] The shared Runtime makes later comparison easier.
- [ ] Program-generated commands form the baseline for the next projects.

You do not need to use advanced terminology.

You should be able to explain the relationship.

---

# Continue

Before moving to the next Starter Project, open:

```text
BEFORE_YOU_CONTINUE.md
```

That document does not test whether you memorized this explanation.

It helps you recognize whether your understanding changed.

The next project will change the source of the command while preserving much
of the same architecture.

---

# Engineering Principle

Good software architecture does not grow by placing every responsibility into
one increasingly large program.

It grows by making responsibilities and relationships clear.

```text
Clear Responsibility

↓

Clear Boundary

↓

Clear Communication

↓

Understandable System
```

This project demonstrates that principle through physical robot movement.

---

# Foundation Principle

The purpose of this project is not merely to move a robot.

Its purpose is to make a hidden relationship visible.

```text
Program Intention

↓

Communication

↓

Hardware Execution

↓

Physical Behaviour
```

When responsibility becomes visible, architecture becomes understandable.

When comparison reveals a change in understanding, Reflection may emerge
naturally.

That is why this project was designed this way.