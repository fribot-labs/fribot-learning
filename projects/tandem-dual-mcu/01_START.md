# Stage 1 — Start

> **Project:** Tandem Dual MCU  
> **Stage:** 01_START  
> **Goal:** Understand why two microcontrollers work together before writing or modifying code.

---

# Welcome

Most beginner robotics projects use a single microcontroller.

This project is different.

Instead of asking one processor to perform every task, the Tandem Dual MCU project separates responsibilities between two independent microcontrollers that cooperate through communication.

The purpose of this project is **not** to learn I2C syntax.

The purpose is to understand why software systems become easier to build when responsibilities are clearly divided.

---

# Learning Goal

After completing this project, you should be able to explain:

- why two microcontrollers are used,
- how they communicate,
- which device makes decisions,
- which device controls hardware,
- why role separation becomes important as systems grow.

---

# What You Will Build

You will build a robot controlled by two cooperating microcontrollers.

```text
micro:bit

↓

I2C Communication

↓

Arduino

↓

Robot Motion
```

The robot itself is only the learning tool.

The real objective is understanding **collaboration between independent computing systems**.

---

# Hardware Overview

This project uses the following hardware.

## Primary Controller

micro:bit v2

Responsibilities

- MicroPython execution
- button input
- built-in sensors
- high-level decision making
- I2C communication

---

## Secondary Controller

Arduino Uno (microbit-abot)

Responsibilities

- digital I/O
- servo control
- external sensor processing
- hardware execution
- I2C slave communication

---

## Robot Hardware

- Tandem Base Robot
- two continuous rotation servos
- battery pack
- USB cable

Additional sensors may be introduced later.

---

# System Architecture

The project follows a simple responsibility model.

```text
User

↓

micro:bit

↓

I2C Command

↓

Arduino

↓

Servo Motors

↓

Robot Movement
```

Notice that the robot never receives commands directly.

Every movement passes through multiple layers.

---

# Why Two Microcontrollers?

A beginner might ask:

> "Why not use only Arduino?"

or

> "Why not use only micro:bit?"

Those are good questions.

This project exists to help you discover that different processors often have different strengths.

Instead of forcing one processor to do everything,

we allow each processor to specialize.

This idea appears repeatedly in modern software engineering.

---

# Project Learning Flow

Every Fribot project follows the same structure.

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

This project is no exception.

---

# Before You Begin

Confirm the following items.

## Hardware

- [ ] micro:bit installed
- [ ] Arduino board connected
- [ ] robot assembled
- [ ] battery connected
- [ ] USB connection available

---

## Software

- [ ] Arduino IDE installed
- [ ] micro:bit Python editor ready
- [ ] required libraries prepared

---

## Safety

Before inserting or removing the micro:bit from the robot board,

always disconnect power first.

Do not insert or remove hardware while power is supplied.

---

# What You Will NOT Learn Yet

This stage intentionally avoids advanced topics.

You do NOT need to understand:

- I2C protocol details
- packet structures
- library implementation
- object-oriented design
- autonomous navigation
- PID control
- wireless communication

Those topics will appear later.

Today, your goal is simply understanding the overall structure.

---

# Think Before Coding

Before writing any code, consider the following questions.

## Question 1

Why might one processor be better suited for user interaction,

while another processor controls motors?

---

## Question 2

If communication between the two processors stops,

what happens to the robot?

---

## Question 3

If the robot moves incorrectly,

how can you determine whether the problem comes from:

- micro:bit,
- communication,
- Arduino,
- or hardware?

---

# Completion Criteria

Before continuing to **02_RUN.md**, you should be able to explain the following sentence in your own words.

> The micro:bit decides what should happen.
>
> The Arduino performs the physical work.
>
> Together they behave as one robot.

If that idea is clear,

you are ready to execute your first Tandem Dual MCU program.

---

# Next Stage

Continue to:

```text
02_RUN.md
```

In the next stage, you will execute a working Tandem Dual MCU project and observe how two independent microcontrollers cooperate to produce a single robot behavior.