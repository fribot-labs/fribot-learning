# Stage 2 — Run

> **Project:** Tandem Dual MCU  
> **Stage:** 02_RUN  
> **Goal:** Execute a working Tandem Dual MCU system and observe how two independent microcontrollers cooperate to control one robot.

---

# Purpose

In the previous stage, you learned that this project separates responsibility between two microcontrollers.

Now it is time to observe that cooperation in practice.

Do not modify the code yet.

The purpose of this stage is to experience a working Tandem Dual MCU system before changing anything.

---

# Learning Goal

After completing this stage, you should be able to explain:

- which device starts the robot,
- which device executes the movement,
- how one command becomes one robot action,
- why both processors must be operating correctly.

---

# System Overview

The system operates as follows.

```text
Program Start

↓

micro:bit

↓

I2C Command

↓

Arduino

↓

Servo Control

↓

Robot Movement
```

The important observation is that no single processor performs every task.

---

# Step 1 — Prepare the Hardware

Before powering the robot, confirm the following.

## micro:bit

- [ ] micro:bit inserted correctly
- [ ] MicroPython program downloaded
- [ ] USB disconnected after programming (if battery operation is used)

---

## Arduino

- [ ] Arduino program uploaded
- [ ] Required libraries installed
- [ ] No upload errors

---

## Robot

- [ ] Left servo connected correctly
- [ ] Right servo connected correctly
- [ ] Battery connected
- [ ] Power switch OFF before inspection

---

# Step 2 — Safe Power-On

Before placing the robot on the floor:

1. Raise the wheels above the table.
2. Turn on the robot.
3. Observe the first movement.
4. Confirm that both wheels rotate in the expected direction.
5. Turn power OFF if movement is unexpected.

Only after confirming correct wheel direction should the robot be placed on the floor.

---

# Step 3 — Execute the Demonstration

Run the prepared Tandem Dual MCU program without modification.

The robot should perform a predefined movement sequence.

For example:

```text
Forward

↓

Stop

↓

Backward

↓

Stop
```

The exact movement depends on the supplied Starter Project.

Your objective is **observation**, not modification.

---

# Observe Carefully

While the robot is moving, think about the following.

## Observation 1

Did the movement begin immediately after the micro:bit program started?

---

## Observation 2

Which processor actually generated the motor movement?

---

## Observation 3

What would happen if:

- the micro:bit were removed?
- the Arduino were disconnected?
- communication failed?

Would the robot still behave the same way?

---

# Follow the Command Flow

Mentally trace one command.

```text
Python Program

↓

Function Call

↓

I2C Message

↓

Arduino

↓

Servo Driver

↓

Motor Rotation
```

One robot movement is actually the result of several independent processing steps.

---

# Observe Responsibility

Notice that different parts of the system perform different jobs.

```text
micro:bit

↓

Decision

↓

Arduino

↓

Execution
```

The two processors cooperate.

Neither processor alone performs the complete task.

---

# Observe Failure Possibilities

Suppose the robot does not move.

Do not immediately assume that the motors are faulty.

Instead, consider each possible layer.

```text
Power

↓

Program

↓

Communication

↓

Arduino Runtime

↓

Servo

↓

Mechanical System
```

A robotics system should be diagnosed layer by layer.

---

# Questions to Think About

While watching the robot, ask yourself:

## Question 1

Where does the movement actually begin?

Inside the motor?

Inside the Arduino?

Inside the micro:bit?

Or earlier?

---

## Question 2

Is the Arduino making decisions,

or only executing instructions?

---

## Question 3

What information must travel between the two processors before the robot can move?

---

## Question 4

If the communication cable disappeared,

which parts of the system would continue working,

and which parts would stop?

---

# What NOT To Do Yet

Do not:

- change speed values,
- edit communication code,
- modify movement timing,
- redesign the program,
- add sensors.

Those activities belong to the next stage.

---

# Completion Check

Before continuing, confirm the following.

- [ ] The robot powers on correctly.
- [ ] The prepared program executes.
- [ ] The robot performs the expected movement.
- [ ] I observed both processors working together.
- [ ] I understand that micro:bit and Arduino have different responsibilities.
- [ ] I can describe the command flow from program to physical movement.

---

# Key Idea

The robot appears to move as one machine.

Internally,

it is already a distributed system.

```text
One Robot

=

Two Processors

+

Communication

+

Shared Goal
```

---

# Next Stage

Continue to:

```text
03_MODIFY.md
```

In the next stage, you will begin changing small parts of the system to discover how responsibility, communication, and behavior are connected.