# ABOT Hardware Foundation

> **Project:** Tandem Dual MCU  
> **Resource Type:** Supporting Hardware Reference  
> **Scope:** Mechanical structure, servos, sensors, and Arduino-based ABOT practice

---

# Purpose

The Tandem Dual MCU robot uses the same fundamental mechanical platform and many of the same sensors as the Arduino-based ABOT robot.

The controller architecture is different.

However, the following physical elements remain closely related:

- robot chassis,
- wheels,
- continuous rotation servos,
- servo mounting direction,
- battery and power structure,
- whisker sensors,
- infrared sensors,
- light sensors,
- ultrasonic sensors,
- mechanical movement principles.

This reference helps learners understand those shared hardware foundations before studying the Tandem Dual MCU architecture.

---

# Recommended Video

The following video provides a detailed Arduino-based ABOT coding and hardware walkthrough:

[Watch the ABOT Arduino Practice Video](https://www.youtube.com/watch?v=IzXwBBxzRwA)

---

# Important Scope Boundary

This video is not a Tandem Dual MCU tutorial.

It demonstrates an Arduino-based ABOT robot.

The video does not directly explain:

- micro:bit programming,
- MicroPython,
- two-microcontroller architecture,
- I2C communication between micro:bit and Arduino,
- I2C master and slave responsibilities,
- `microbit_abot.py`,
- the `MicroAbot` shared Runtime,
- responsibility separation between two controllers.

Do not use the video as the primary explanation of the Tandem software architecture.

---

# What Is Shared with the Tandem Robot?

Although the controller board is different, much of the physical robot platform is shared or closely related.

```text
Arduino ABOT

and

Tandem Dual MCU Robot

↓

Common Mechanical Foundation
```

Shared concepts include:

- chassis construction,
- left and right wheel arrangement,
- continuous rotation servo behavior,
- forward and backward movement,
- pivot turning,
- servo centering,
- wheel-direction verification,
- battery management,
- sensor placement,
- physical debugging.

---

# What Is Different?

## Arduino ABOT

```text
Arduino

↓

Direct sensor processing

↓

Direct servo control

↓

Robot movement
```

The Arduino program owns most or all robot responsibilities.

---

## Tandem Dual MCU

```text
micro:bit

↓

Decision and command generation

↓

I2C communication

↓

Arduino Runtime

↓

Sensor and servo hardware access

↓

Robot movement
```

The physical robot may look similar, but the software responsibility structure is different.

---

# How to Use the Video

Use the video for the following purposes.

## Mechanical Assembly

Refer to the video when checking:

- robot chassis structure,
- servo mounting,
- wheel installation,
- cable placement,
- sensor attachment,
- battery placement.

---

## Servo Understanding

Refer to the video when learning:

- why continuous rotation servos differ from angle servos,
- how left and right mounting affect wheel direction,
- why the two wheels may require opposite control values,
- why servo centering and calibration matter.

---

## Sensor Hardware

Refer to the video when examining:

- sensor wiring,
- sensor placement,
- the relationship between sensor position and robot behavior,
- basic hardware testing.

---

## Physical Debugging

The video may help diagnose:

- reversed wheels,
- loose connections,
- incorrect sensor placement,
- power problems,
- mechanical friction,
- unexpected physical movement.

---

# What Must Be Learned Elsewhere?

Use the Tandem project documentation and Starter Project for:

- Arduino–micro:bit communication,
- I2C data flow,
- shared Arduino Runtime installation,
- `microbit_abot.py`,
- stage-specific `main.py`,
- command generation,
- responsibility separation,
- dual-controller debugging.

Recommended project documents:

- [`../01_START.md`](../01_START.md)
- [`../02_RUN.md`](../02_RUN.md)
- [`../03_MODIFY.md`](../03_MODIFY.md)
- [`../04_UNDERSTAND.md`](../04_UNDERSTAND.md)
- [`../starter-project/README.md`](../starter-project/README.md)

---

# Recommended Learning Order

```text
Understand the common robot hardware

↓

Watch the relevant ABOT video sections

↓

Prepare the shared Arduino Runtime

↓

Prepare the shared micro:bit library

↓

Run the Tandem Starter Project

↓

Compare direct Arduino control with dual-MCU control

↓

Reflect on the responsibility difference
```

The learner does not need to watch the entire video before beginning.

Use the relevant sections when hardware understanding is required.

---

# Educational Comparison

The video and the Tandem project can be used together to reveal an important distinction.

```text
Same or similar physical robot

+

Different controller architecture

=

Different software responsibility model
```

This makes the video especially valuable as a comparison resource.

The learner can observe that changing the controller board does not necessarily change the chassis or sensors, but it can significantly change:

- where decisions are made,
- how commands are delivered,
- where hardware is accessed,
- how failures are diagnosed,
- how responsibilities are organized.

---

# Source Classification

| Resource | Primary Role |
|----------|--------------|
| ABOT YouTube video | Mechanical and sensor foundation |
| Tandem Robotics repository | Official libraries and executable source |
| Tandem project documents | PBL learning flow |
| Starter Project | Dual-MCU practical experience |
| InnerMirror | Reflection and changing understanding |

---

# Foundation Principle

A familiar physical robot can support several different software architectures.

The video helps the learner understand the robot body.

The Tandem project helps the learner understand how two processors cooperate inside that body.