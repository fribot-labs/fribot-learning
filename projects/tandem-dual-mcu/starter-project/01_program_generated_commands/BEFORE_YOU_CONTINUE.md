# Before You Continue

> Project: Tandem Dual MCU  
> Starter Project: 01 — Program-Generated Commands  
> Difficulty: Beginner  
> Purpose: Recognize what changed in your understanding before continuing.

---

# Purpose

The prepared movement sequence is complete.

Before moving to the next Starter Project, pause briefly.

Do not ask only:

> Did the robot work?

Ask instead:

> **What do I understand now that I did not understand before?**

This document is not an examination.

It does not grade your performance.

It helps you notice whether the project changed how you understand:

- commands,
- processors,
- communication,
- hardware execution,
- and system responsibility.

The goal is awareness rather than evaluation.

---

# Learning Position

This project established the first command-source baseline.

```text
01 — Program-Generated Commands

The program generates the command.
```

The complete Tandem sequence will later compare:

```text
Program-Generated Commands

↓

User-Generated Commands

↓

Environment-Generated Commands
```

Before continuing, make sure the first form is visible enough to become a
meaningful comparison point.

---

# Step 1 — Experience Check

Confirm what you actually experienced.

- [ ] I prepared or verified the shared Arduino Runtime.
- [ ] I prepared the micro:bit project files.
- [ ] I downloaded `main.py` to the micro:bit.
- [ ] I observed the complete movement sequence.
- [ ] I observed the micro:bit display sequence.
- [ ] I compared expected behaviour with actual behaviour.
- [ ] I identified at least one element that changed.
- [ ] I identified at least one element that remained stable.

If the project did not complete, use:

```text
TROUBLESHOOTING.md
```

before attempting to interpret the architecture.

A failed or incomplete run may still produce useful observations.

However, make sure you understand what actually happened before continuing.

---

# Step 2 — Prediction Check

Return to the prediction you made before running the robot.

## Before Running

What did you expect?

```text
____________________________________

____________________________________

____________________________________
```

---

## After Running

What actually happened?

```text
____________________________________

____________________________________

____________________________________
```

---

## The Most Important Difference

What was different between your expectation and reality?

```text
____________________________________

____________________________________
```

Do not judge the prediction as good or bad.

The difference is the learning material.

---

# Step 3 — Observation Check

Watching movement is not the same as observing a system.

Without looking at the code, consider the following questions.

## Command Source

Where did the movement command originate?

```text
____________________________________
```

---

## Command Execution

Which controller converted the command into wheel-servo action?

```text
____________________________________
```

---

## Physical Movement

Which components produced the final physical movement?

```text
____________________________________
```

---

## Responsibility Separation

Did both processors perform the same responsibility?

```text
____________________________________

____________________________________
```

If these relationships remain unclear, review:

```text
WHY_IT_WORKS.md
```

You do not need advanced terminology.

You should be able to describe the relationship in your own words.

---

# Step 4 — Command Flow Check

Complete the command path.

```text
microbit/main.py

↓

____________________________

↓

I2C Communication

↓

____________________________

↓

Continuous-Rotation Servos

↓

Robot Movement
```

Suggested terms are available in `WHY_IT_WORKS.md`.

Try to complete the diagram from understanding rather than memorization.

---

# Step 5 — Responsibility Check

Complete each statement in your own words.

## `main.py` Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## `microbit_abot.py` Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## I2C Communication Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## The Arduino Runtime Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## The Servo Hardware Is Mainly Responsible For

```text
____________________________________

____________________________________
```

The purpose is not to find perfect wording.

The purpose is to avoid treating the entire robot as one invisible block.

---

# Step 6 — What Changed?

During the prepared sequence, several things changed.

Possible examples include:

- the movement command,
- the micro:bit display,
- wheel direction,
- robot movement,
- the current stage of the program.

Write what you observed.

```text
____________________________________

____________________________________

____________________________________
```

Then complete:

```text
When the command changed,

____________________________________ changed.
```

---

# Step 7 — What Remained the Same?

Although the movement changed, important parts of the system remained stable.

Possible examples include:

- the robot platform,
- the Arduino,
- the micro:bit,
- the shared Arduino Runtime,
- the communication path,
- the division between command generation and hardware execution.

Write what remained stable.

```text
____________________________________

____________________________________

____________________________________
```

Then complete:

```text
Even though the robot behaviour changed,

____________________________________ remained the same.
```

Recognizing continuity is as important as recognizing change.

---

# Step 8 — Troubleshooting Check

If something failed during the project, think about how you investigated it.

## My First Reaction

```text
____________________________________
```

---

## The First Layer I Checked

```text
____________________________________
```

---

## My First Hypothesis

```text
____________________________________
```

---

## The Actual Cause

```text
____________________________________
```

---

## What I Would Check First Next Time

```text
____________________________________
```

Now consider:

```text
Did I immediately change the code?

or

Did I observe and locate the system layer first?
```

Troubleshooting is not only about restoring operation.

It is an opportunity to compare a hypothesis with evidence.

---

# Step 9 — Engineering Thinking Check

Consider the following pairs.

Choose the approach you used most often.

```text
Guess First

or

Observe First
```

```text
Change Many Things

or

Change One Thing
```

```text
Search for an Answer

or

Locate the Responsibility
```

```text
Ask Whether It Works

or

Ask Why It Behaves This Way
```

This is not a score.

It is a record of your current working habit.

Future projects may help that habit evolve.

---

# Step 10 — Understanding Check

You may be ready to continue when you can explain the following in your own
words.

- [ ] The movement commands originated inside the program.
- [ ] No button generated the commands in this project.
- [ ] No sensor generated the commands in this project.
- [ ] The micro:bit-side program selected the movement sequence.
- [ ] Communication connected two independently running processors.
- [ ] The Arduino Runtime executed hardware-specific servo operations.
- [ ] The two processors owned different responsibilities.
- [ ] Robot behaviour changed while the overall Tandem structure remained stable.
- [ ] This project forms the baseline for later command-source comparisons.

You do not need to feel that every technical detail is fully understood.

You should understand the central relationship well enough to recognize what
the next project changes.

---

# Step 11 — Explain It Simply

Imagine explaining this project to someone who has not seen the code.

Complete the sentence:

```text
The robot moved because the program ________________________________,

the micro:bit-side library ________________________________________,

the communication path ___________________________________________,

and the Arduino Runtime __________________________________________.
```

Now explain the system in one short paragraph.

```text
____________________________________

____________________________________

____________________________________

____________________________________
```

If your explanation focuses only on code syntax, return to the responsibility
chain.

The deeper objective is understanding relationships.

---

# Step 12 — One Architectural Question

Suppose the Arduino Runtime were replaced by another implementation that
accepted the same approved commands.

Would `main.py` necessarily need to change?

```text
Yes

No

Not sure yet
```

Why?

```text
____________________________________

____________________________________
```

You do not need a complete answer.

The question introduces the relationship between:

```text
Stable Interface

and

Replaceable Implementation
```

This idea will become more meaningful in future projects.

---

# Step 13 — Prepare the Next Comparison

The current project used commands already written into the program.

The next project changes the command source.

```text
Current Project

Program

↓

Command

↓

Robot
```

```text
Next Project

User

↓

Command

↓

Robot
```

Before opening the next project, predict what will change.

## What Do You Expect to Change?

```text
____________________________________

____________________________________
```

---

## What Do You Expect to Remain the Same?

```text
____________________________________

____________________________________
```

---

## Which New Component or Event Will Generate the Command?

```text
____________________________________
```

This prediction creates the starting point for the next learning comparison.

---

# Reflection Readiness

Reflection is optional.

It should not be completed merely because the project folder has ended.

Reflection becomes meaningful when you recognize a change such as:

- an assumption became incomplete,
- a hidden responsibility became visible,
- communication became part of the architecture,
- debugging became a process of reducing uncertainty,
- stable structure became easier to distinguish from changing behaviour.

Use the following questions only if they feel meaningful.

```text
What surprised me?

Which expectation changed?

Which responsibility became visible?

What remained stable?

What do I now understand differently?

What question do I want to carry forward?
```

There is no correct Reflection.

The learner owns the Reflection.

Fribot Learning only creates the experience from which Reflection may emerge.

---

# Optional Reflection Draft

If you choose to reflect, you may begin with:

```text
Before this project, I thought...

After observing the robot, I noticed...

The most important relationship I now see is...

What still feels unresolved is...

In the next project, I expect...
```

Write in your own language and structure.

Do not copy a model conclusion.

---

# One Final Comparison

At the beginning, the project may have appeared to be:

```text
Code

↓

Robot Movement
```

After completing it, the system may now appear more like:

```text
Program Intention

↓

Command Translation

↓

Communication

↓

Hardware Execution

↓

Physical Behaviour
```

What was added to your understanding?

```text
____________________________________

____________________________________

____________________________________
```

---

# Ready to Continue?

You are not required to master every detail.

You are ready for the next Starter Project when you can reasonably say:

> I understand that the program generated the command, while another part of
> the system executed the physical movement.

And:

> I can identify what changed during the sequence and what remained stable.

Proceed to:

```text
02_user_generated_commands
```

The next project will be more meaningful when you carry forward a clear
prediction.

---

# Completion Check

- [ ] I reviewed my original prediction.
- [ ] I compared the prediction with actual behaviour.
- [ ] I identified the command source.
- [ ] I distinguished command generation from hardware execution.
- [ ] I traced the command path through the system.
- [ ] I identified what changed.
- [ ] I identified what remained stable.
- [ ] I reviewed my troubleshooting process where applicable.
- [ ] I formed a prediction for the next project.
- [ ] I understand that Reflection is optional and learner-owned.

---

# Foundation Principle

Do not continue merely because the robot worked.

Continue because the experience gave you something meaningful to compare.

```text
Expectation

↓

Reality

↓

Difference

↓

Changed Understanding
```

Projects do not exist only to produce working robots.

They exist to create experiences through which learners can see systems more
clearly.

The robot may remain the same.

The architecture may remain stable.

The most important change may occur in how you understand them.

That change is the beginning of the next project.

---

# Next Project

When you can explain what generated the command and what remained stable,
continue to:

- [Project 02 — User-Generated Commands](../02_user_generated_commands/README.md)