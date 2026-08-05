# 01 Program-Generated Commands

[← Back to Tandem Starter Projects](../README.md)

> Project: Tandem Dual MCU  
> Starter Project: 01  
> Difficulty: Beginner  
> Estimated Time: 30–60 Minutes

---

# Purpose

This is the first executable Starter Project in the **Tandem Dual MCU**
learning path.

The objective is **not** to learn every detail of Arduino, micro:bit,
communication protocols, or robotics.

Instead, this project introduces one foundational engineering idea.

> **A single robot can be controlled by two independent processors, each
> owning a different responsibility.**

The robot is not the final learning goal.

The robot is the medium through which you begin understanding software
architecture.

The project is intentionally simple.

Its purpose is to establish a stable reference point for every Tandem project
that follows.

---

# Constitutional Learning Principle

This project implements the Learning Constitution of Fribot Learning.

The highest governing learning principle is:

> **Learning does not begin with explanation.**

> **Learning begins when expectation meets reality.**

For that reason, this project does **not** begin by explaining the complete
Tandem architecture.

Instead, you will:

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

The explanation becomes meaningful because you have already experienced the
system.

---

# Learning Goal

By completing this project, you should begin understanding:

- how two microcontrollers cooperate,
- why responsibilities are separated,
- how commands travel through the Tandem architecture,
- how one command becomes physical robot movement,
- why software architecture is more than writing code,
- why one stable architecture can produce different behaviors.

You are **not** expected to master the Tandem architecture yet.

The goal is to experience it for the first time.

Future projects will gradually deepen your understanding without replacing
what you learn here.

---

# Project Position

This Starter Project establishes the baseline of the Tandem Dual MCU
learning path.

The movement command is generated directly by the program itself.

Later projects will change **where the command comes from** while preserving
the same overall Tandem architecture.

```text
Program

↓

User

↓

Environment
```

The command source changes.

The architecture remains.

This project therefore becomes the reference point for every later
comparison.

---

# Why This Project Comes First

Many robotics tutorials begin by explaining hardware connections,
communication protocols, or source code.

This project deliberately takes a different approach.

You first experience a working Tandem robot.

Only after observing the robot are you encouraged to ask:

- Why did it move this way?
- Which processor made the decision?
- Which processor actually controlled the motors?
- Why were two processors used instead of one?

The project is designed so that these questions arise naturally.

Curiosity is not added afterwards.

It emerges from experience.

---

# Before You Start

Before running this project, complete the shared environment setup.

Arduino Runtime

```text
starter-project/

shared/

arduino/
```

micro:bit Library

```text
starter-project/

shared/

microbit/
```

The shared installation provides the common runtime used throughout every
Tandem Starter Project.

Only the learner program changes from project to project.

The shared Tandem platform remains the same.

---

# Project Files

This Starter Project contains:

```text
01_program_generated_commands/

README.md

EXPECTED_OUTPUT.md

TROUBLESHOOTING.md

WHY_IT_WORKS.md

BEFORE_YOU_CONTINUE.md

microbit/

main.py
```

Each document has a different educational responsibility.

Together they implement one complete learning experience.

---

# Learning Flow

Unlike traditional programming tutorials, this project separates
**project progression** from **learning progression**.

The visible project stages are:

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

Inside those stages, your understanding develops through:

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

Notice the difference.

The project tells you **where you are**.

The learning flow explains **how understanding grows**.

---

# Educational Responsibility of Each Document

Each document exists for one specific reason.

| Document | Educational Responsibility |
|-----------|----------------------------|
| README.md | Project map and learning guide |
| EXPECTED_OUTPUT.md | Build an expectation before execution |
| microbit/main.py | Create a real executable experience |
| TROUBLESHOOTING.md | Help observe reality accurately |
| WHY_IT_WORKS.md | Explain the experienced behavior |
| BEFORE_YOU_CONTINUE.md | Help recognize changed understanding |

The documents should work together.

They should not repeat the same explanation.

---

# What Changes?

During this project,

the movement command generated inside the program changes over time.

Different commands produce different robot behaviors.

You should observe how changing the command changes the robot.

Do not focus only on the movement.

Focus on **what caused the movement**.

---

# What Remains the Same?

Although the robot behavior changes,

the overall Tandem architecture remains stable.

```text
micro:bit

↓

Command

↓

Arduino

↓

Robot Motion
```

Throughout the entire Tandem course,

different projects will change the source of the command,

but this architectural relationship remains remarkably stable.

Understanding what remains unchanged is just as important as understanding
what changes.

---

# Step 1 — Predict

Before running the robot,

**do not open the source code yet.**

Instead,

begin with your own expectation.

Ask yourself the following questions.

```text
How do I think the robot will move?

Which processor creates the movement command?

Which processor actually drives the motors?

Do both processors perform the same work?
```

Do not worry about being correct.

The purpose of this step is not accuracy.

The purpose is to create a prediction that you can later compare with
reality.

If possible,

write your prediction in one or two short sentences.

For example:

> "I think the Arduino decides every movement."

or

> "I think both controllers perform the same job."

These predictions become valuable only after you observe the actual system.

---

# Step 2 — Run

Now execute the project exactly as provided.

Open:

```text
microbit/

main.py
```

Download the program to the micro:bit.

Power on the Tandem robot.

Allow the robot to complete the entire movement sequence.

Do not stop the robot early.

Do not modify the program.

Do not attempt to improve the code.

Simply observe.

---

## What Should You Observe?

Pay attention to observable behavior.

Examples include:

- when the robot starts moving,
- whether movement changes over time,
- whether movement repeats,
- whether movement stops,
- whether movement appears to follow a predefined sequence.

Do not attempt to explain the behavior yet.

Your only responsibility at this stage is careful observation.

---

## Why Observation Matters

Many beginners immediately begin changing code.

This project intentionally delays modification.

Good engineering begins with observation.

Poor observation often leads to unnecessary debugging.

The purpose of this stage is therefore:

```text
Prediction

↓

Reality

↓

Observation
```

Only after reality has been observed should comparison begin.

---

# Step 3 — Compare

After the robot has completed the movement sequence,

open:

```text
EXPECTED_OUTPUT.md
```

Compare three things.

```text
Your Prediction

↓

Expected Behavior

↓

Actual Behavior
```

Ask yourself:

- Which part of my prediction was correct?
- Which part was incorrect?
- What surprised me?
- What happened that I did not expect?

The objective is **not** to discover mistakes.

The objective is to discover differences.

Meaningful learning begins when those differences become visible.

---

## Compare What Changed

During the movement sequence,

observe what changes.

Examples may include:

- robot direction,
- movement timing,
- command sequence,
- visible robot behavior.

Do not immediately ask why.

Simply notice that the behavior changes.

---

## Compare What Remains the Same

At the same time,

notice what does **not** change.

The Tandem command architecture remains stable.

```text
micro:bit

↓

Command

↓

Arduino

↓

Robot Motion
```

Regardless of the individual command,

the command still follows the same architectural path.

This observation becomes extremely important in later projects.

---

## Comparison Is The Learning Tool

The comparison is not simply:

```text
Correct

vs

Incorrect
```

Instead,

the comparison is:

```text
Expectation

↓

Reality

↓

Difference

↓

Understanding
```

Learning grows from the difference,

not from memorizing the correct answer.

---

# Step 4 — If Something Unexpected Happens

If the robot behaves differently from expected,

**do not immediately modify the code.**

Instead,

open:

```text
TROUBLESHOOTING.md
```

Investigate the system one layer at a time.

A useful troubleshooting process is:

```text
Observed Symptom

↓

What Should Be Checked?

↓

Possible Cause

↓

Minimal Correction

↓

Run Again

↓

Compare Again
```

Changing several things at once usually hides the real cause.

Instead,

make one small correction,

run the project again,

and compare the result.

---

## Observe Before Changing

Good engineers do not begin with assumptions.

They begin with evidence.

When something unexpected happens,

first ask:

```text
What did I actually observe?
```

Then ask:

```text
Did the system fail,

or was my expectation incorrect?
```

Those two situations are very different.

Sometimes the software contains a bug.

Sometimes the learner simply predicted the wrong behavior.

Both situations are valuable learning opportunities.

---

## Repeat The Observation

After each correction,

repeat the observation.

```text
Run

↓

Observe

↓

Compare
```

Do not continue until the observed behavior becomes understandable.

Understanding is built through repeated comparison,

not through repeated guessing.

---

# Step 5 — Understand the Design

Once the robot behaves as expected,

open:

```text
WHY_IT_WORKS.md
```

Only now should you begin studying the architecture.

This document explains:

- why two processors are used,
- why responsibilities are separated,
- how commands travel through the Tandem architecture,
- why the Arduino executes rather than generates commands,
- why communication is an architectural responsibility rather than a hardware detail.

Notice the order.

You already experienced the robot.

Now the explanation connects that experience with engineering concepts.

The explanation should feel familiar,

because you have already observed the system.

---

## Connect Experience With Explanation

Do not try to memorize the architecture.

Instead,

connect each explanation with something you already observed.

For example:

```text
Observed Robot Movement

↓

Command Sequence

↓

Communication

↓

Processor Responsibility

↓

Architecture
```

The explanation becomes meaningful because it describes something that you
have already experienced.

That is the educational purpose of this project.

---

# Step 6 — Check Yourself

Before moving to the next Starter Project,

pause for a moment.

Do not ask:

> "Did the robot work?"

Instead ask:

> **"What do I understand now that I did not understand before?"**

This project is not about successfully moving a robot.

It is about changing the way you think about a robotic system.

If your understanding has changed,

the project has already achieved its primary educational objective.

---

## What Changed?

Think about the following questions.

```text
What surprised me?

What assumption turned out to be incorrect?

Which relationship became visible?

What now seems much simpler than before?

What question has become more important?
```

There are no model answers.

Every learner may notice something different.

The purpose is simply to recognize whether your understanding has evolved.

---

## What Remained the Same?

Now ask a second set of questions.

```text
Although the robot behavior changed,

what remained stable?
```

Possible observations include:

- the Tandem hardware,
- the communication path,
- the responsibility of each processor,
- the overall system architecture.

Future projects will intentionally change one important element at a time.

Recognizing what remains stable makes those later comparisons much easier.

---

## Reflection

Reflection is optional.

It should never interrupt your learning momentum.

Reflection becomes meaningful only when you recognize that your own
understanding has changed.

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

If you decide to continue into InnerMirror,

write your own Reflection.

Do not try to produce the "correct" Reflection.

There is no correct Reflection.

Only your own understanding can be preserved.

---

# Learning Resources

Additional background material is available in:

```text
references/
```

Recommended reading order:

1. Hardware Foundation
2. Source Materials
3. Tandem Architecture

These documents provide deeper context after you have already experienced
the project.

They are intended to strengthen understanding,

not replace hands-on learning.

---

# Expected Outcome

By the end of this Starter Project,

you should recognize something like the following.

```text
One Robot

↓

Two Processors

↓

Different Responsibilities

↓

One Coordinated System
```

You should also recognize a second idea.

```text
Different Commands

↓

Same Architecture
```

The movement may change.

The command source may change.

Future projects will change even more.

The architecture remains remarkably stable.

This observation becomes the foundation for the rest of the Tandem course.

---

# Common Beginner Mistakes

Avoid the following.

## 1. Changing Code Before Observing

Many beginners immediately begin modifying code.

Observe first.

Modification becomes meaningful only after observation.

---

## 2. Changing Too Many Things

Change one thing.

Run again.

Compare again.

Changing several variables at once usually hides the real cause.

---

## 3. Assuming Every Unexpected Result Is A Bug

Sometimes the software contains a bug.

Sometimes your prediction was simply incorrect.

Both situations are valuable.

The comparison matters more than being right.

---

## 4. Skipping The Comparison

Running the project is not enough.

Ask yourself:

```text
What did I expect?

↓

What actually happened?

↓

What changed?
```

The comparison is the learning experience.

---

## 5. Reading The Explanation Too Early

Try not to read:

```text
WHY_IT_WORKS.md
```

before running the project.

The explanation is designed to become meaningful after experience.

---

## 6. Treating Reflection As Homework

Reflection is not another assignment.

Reflection is simply a way to preserve meaningful changes in understanding.

If nothing meaningful changed,

forcing Reflection provides little educational value.

---

# Where This Project Fits

This Starter Project establishes the baseline for the Tandem learning path.

```text
01

Program-Generated Commands
```

↓

```text
02

User-Generated Commands
```

↓

```text
03

Environment-Generated Commands
```

Only one major responsibility changes at each stage.

Everything else should remain as stable as possible.

This allows you to clearly observe:

```text
What Changes?

↓

What Remains the Same?

Understanding what remains stable
allows later comparisons to become much easier.
```

That comparison is one of the central learning mechanisms of the entire
course.

---

# Next Stage

The current project generates commands entirely inside the program.

The next project changes one important responsibility.

Instead of:

```text
Program

↓

Command

↓

Robot
```

the learner becomes part of the command generation process.

```text
User

↓

Command

↓

Robot
```

Continue to:

- [02 — User-Generated Commands](../02_user_generated_commands/)

only after completing:

```text
BEFORE_YOU_CONTINUE.md
```

There is no advantage in rushing.

The next project becomes much more meaningful when this project's
architecture is already familiar.

---

# Foundation Principle

Most programming tutorials begin by explaining.

This project begins by creating an experience.

You first predict.

Then you run.

You observe.

You compare.

Only then are you encouraged to understand.

Learning begins when your expectations meet reality.

Reflection begins when you recognize that your understanding has changed.

That is the purpose of this Starter Project.

---

# Closing Message

This project is intentionally simple.

The robot does not become significantly more complex.

The software does not become significantly longer.

Instead,

your understanding begins to change.

That is the beginning of engineering.

The purpose of this Starter Project is not to teach you one robot.

Its purpose is to help you see one system differently than you did before.

Everything that follows in the Tandem Dual MCU course builds upon that first
change in understanding.

---

Return to:

- [Tandem Starter Projects](../README.md)