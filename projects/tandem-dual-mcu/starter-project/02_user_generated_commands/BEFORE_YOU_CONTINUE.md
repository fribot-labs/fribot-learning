# Before You Continue

> Project: Tandem Dual MCU  
> Starter Project: 02 — User-Generated Commands  
> Difficulty: Beginner  
> Purpose: Compare command sources and recognize how your understanding changed.

---

# Purpose

You have now completed a second Tandem Dual MCU experience.

Starter Project 01 showed:

```text
Program

↓

Command

↓

Robot
```

Starter Project 02 showed:

```text
User

↓

Event

↓

Command

↓

Robot
```

Before continuing, pause briefly.

Do not ask only:

> Did the buttons work?

Ask instead:

> **What changed when the user became the command source?**

And:

> **What remained stable even though the interaction changed?**

This document is not an examination.

It helps you recognize whether your understanding of input, command, state,
communication, and execution has changed.

---

# Learning Position

You are now at the second comparison point in the Tandem learning path.

```text
01 — Program-Generated Commands

↓

02 — User-Generated Commands

↓

03 — Environment-Generated Commands
```

The first project established a stable command path.

The second project changed the command source.

The next project will change it again.

This sequence is designed to help you observe both:

```text
Change

and

Continuity
```

---

# Step 1 — Experience Check

Confirm what you actually experienced.

- [ ] I completed or reviewed Starter Project 01.
- [ ] I verified the shared Arduino Runtime.
- [ ] I downloaded the Starter Project 02 `main.py`.
- [ ] The robot began in a stopped waiting state.
- [ ] I tested Button A.
- [ ] I tested Button B.
- [ ] I tested A+B.
- [ ] I tested more than one command without resetting the program.
- [ ] I compared the result with Starter Project 01.
- [ ] I identified at least one changed responsibility.
- [ ] I identified at least one stable responsibility.

If the interaction was unclear or unreliable, return to:

```text
EXPECTED_OUTPUT.md
```

or:

```text
TROUBLESHOOTING.md
```

before interpreting the architecture.

---

# Step 2 — Return to Your Prediction

Before running this project, what did you expect?

## Initial-State Prediction

```text
What did I expect the robot to do after startup?

____________________________________

____________________________________
```

---

## Button Prediction

```text
What did I expect Button A to do?

____________________________________
```

```text
What did I expect Button B to do?

____________________________________
```

```text
What did I expect A+B to do?

____________________________________
```

---

## Responsibility Prediction

```text
Which device did I expect to interpret the button input?

____________________________________
```

```text
Did I expect the Arduino Runtime to know which button was pressed?

____________________________________
```

---

# Step 3 — Compare Prediction With Reality

Now record what actually happened.

## Startup Behaviour

```text
____________________________________

____________________________________
```

---

## Button A Behaviour

```text
____________________________________

____________________________________
```

---

## Button B Behaviour

```text
____________________________________

____________________________________
```

---

## A+B Behaviour

```text
____________________________________

____________________________________
```

---

## The Most Important Difference

What was the most important difference between your expectation and reality?

```text
____________________________________

____________________________________

____________________________________
```

Do not treat an incorrect prediction as failure.

The difference is the learning material.

---

# Step 4 — Compare Starter Projects 01 and 02

Complete the following comparison.

| Question | Starter Project 01 | Starter Project 02 |
|---|---|---|
| Who initiated the command? | __________________ | __________________ |
| When was the command generated? | __________________ | __________________ |
| Did the robot move immediately after startup? | __________________ | __________________ |
| Was the movement order predetermined? | __________________ | __________________ |
| Was the Arduino Runtime changed? | __________________ | __________________ |
| Was the communication path changed? | __________________ | __________________ |
| What was the learner's role? | __________________ | __________________ |

Now summarize the comparison.

```text
The most important change was:

____________________________________

____________________________________
```

```text
The most important continuity was:

____________________________________

____________________________________
```

---

# Step 5 — What Changed?

Compared with Starter Project 01, what changed?

Possible examples include:

- the command source,
- command timing,
- the learner's role,
- the need to wait for input,
- the program control flow,
- the importance of responsiveness,
- the use of command state.

Write your own observations.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
In Starter Project 01,

____________________________________ generated the command.
```

```text
In Starter Project 02,

____________________________________ generated the initiating event.
```

```text
The micro:bit program then

____________________________________.
```

---

# Step 6 — What Remained the Same?

Although the command source changed, much of the system remained stable.

Possible examples include:

- the robot hardware,
- the micro:bit,
- the Arduino,
- the shared Arduino Runtime,
- `microbit_abot.py`,
- I2C communication,
- the servo pins,
- the hardware-execution responsibility.

Write what remained stable.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
Even though the command source changed,

____________________________________ remained the same.
```

```text
The Arduino Runtime still

____________________________________.
```

```text
The communication path still

____________________________________.
```

Recognizing stability is essential.

Without it, every project may appear to be a completely new system.

---

# Step 7 — Input, Command, and Execution

Complete the three-part distinction.

## Input

What physical action did the user perform?

```text
____________________________________
```

---

## Command

What system meaning was generated from that action?

```text
____________________________________
```

---

## Execution

What hardware action was finally performed?

```text
____________________________________
```

Now complete:

```text
User Action

↓

____________________________

↓

Movement Command

↓

____________________________

↓

Robot Movement
```

The button press is not the same thing as the servo operation.

The system connects them through several responsibilities.

---

# Step 8 — Command Flow Check

Complete the full path.

```text
User

↓

micro:bit Buttons

↓

____________________________

↓

Command Selection

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

Try to complete the diagram from understanding rather than memorization.

Review:

```text
WHY_IT_WORKS.md
```

if the relationship remains unclear.

---

# Step 9 — Responsibility Check

Explain each responsibility in your own words.

## The User Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## The micro:bit Buttons Are Mainly Responsible For

```text
____________________________________

____________________________________
```

---

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

## The Servos Are Mainly Responsible For

```text
____________________________________

____________________________________
```

The goal is not perfect terminology.

The goal is to avoid treating the entire robot as one invisible block.

---

# Step 10 — Event and Command Check

Consider this sequence:

```text
Button A Pressed

↓

Forward Command

↓

Robot Moves Forward
```

Now answer:

## Is Button A Itself the Forward Command?

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

---

## Where Is the Meaning of Button A Defined?

```text
____________________________________

____________________________________
```

---

## Could Button A Be Assigned a Different Command?

```text
____________________________________
```

This question reveals that physical input and software meaning are separate.

---

# Step 11 — State Check

In this project, the robot may continue moving after the button is released.

Why?

Choose the statement that best matches your understanding.

```text
The button continuously powers the motors.
```

```text
The button changes the current command state.
```

```text
The Arduino remembers which button was pressed.
```

```text
I am not sure yet.
```

Explain your choice.

```text
____________________________________

____________________________________
```

Now complete:

```text
No active button

does not automatically mean

____________________________________.
```

And:

```text
A+B explicitly generates

____________________________________.
```

---

# Step 12 — Why Is Stop a Command?

Think about the difference between:

```text
No New Input
```

and:

```text
Stop Command
```

Complete:

```text
No new input means:

____________________________________
```

```text
A Stop command means:

____________________________________
```

Why is this distinction important?

```text
____________________________________

____________________________________
```

Stop is an intentional system state.

It is not simply the absence of software activity.

---

# Step 13 — Responsiveness Check

Starter Project 01 could use long movement delays because the command timing
was already known.

Starter Project 02 must repeatedly return to user input.

Complete:

```text
Starter Project 01 could wait because

____________________________________.
```

```text
Starter Project 02 must remain responsive because

____________________________________.
```

What might happen if a movement function contained a long blocking
`sleep()`?

```text
____________________________________

____________________________________
```

This reveals how a new command source may require a new control-flow
structure even when the hardware Runtime remains stable.

---

# Step 14 — Duplicate Command Check

The program stores:

```text
current_command
```

Why?

Complete:

```text
If the current command is already Forward

and the user keeps holding Button A,

the program should

____________________________________.
```

What unnecessary behaviour does this avoid?

```text
____________________________________

____________________________________
```

The important event is a change in state, not every repeated loop iteration.

---

# Step 15 — Troubleshooting Check

If something failed, review how you investigated it.

## Observed Symptom

```text
____________________________________

____________________________________
```

---

## First Layer Checked

```text
____________________________________
```

---

## First Hypothesis

```text
____________________________________
```

---

## Actual Cause

```text
____________________________________
```

---

## What I Would Check First Next Time

```text
____________________________________
```

Now ask:

```text
Did I treat the problem as a button problem,

or did I trace the entire responsibility chain?
```

A user-input symptom may originate in:

- input detection,
- command selection,
- communication,
- Runtime execution,
- physical hardware.

---

# Step 16 — Engineering Habit Check

Choose the approach you used most often.

```text
Press Random Buttons

or

Test One Input
```

```text
Rewrite Code Immediately

or

Observe the Display First
```

```text
Assume Arduino Knows the Button

or

Trace the Command Meaning
```

```text
Change Several Conditions

or

Change One Condition
```

```text
Ask Only Whether It Works

or

Ask Which Responsibility Failed
```

This is not a score.

It is a record of your current working habit.

---

# Step 17 — Explain the Project Simply

Imagine explaining the project to someone who completed Starter Project 01
but has not seen Starter Project 02.

Complete:

```text
In the previous project, commands came from

____________________________________.
```

```text
In this project, commands begin with

____________________________________.
```

```text
The micro:bit program converts that into

____________________________________.
```

```text
The Arduino Runtime still

____________________________________.
```

Now explain the difference in one paragraph.

```text
____________________________________

____________________________________

____________________________________

____________________________________
```

---

# Step 18 — Stable Interface Question

Suppose Button A were replaced with a joystick-up event.

Would the Arduino Runtime necessarily need to change?

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

Now suppose the new input still generated the same Forward command.

Complete:

```text
The input source can change

while

____________________________________ remains stable.
```

This is an early example of a stable interface supporting replaceable input
sources.

---

# Step 19 — Prepare the Next Project

Starter Project 03 will replace user input with environmental input.

```text
Current Project

User Action

↓

Command

↓

Robot
```

```text
Next Project

Environment Change

↓

Command

↓

Robot
```

Predict what may change.

## What New Input Source Do You Expect?

```text
____________________________________

____________________________________
```

---

## What Do You Expect the micro:bit to Observe?

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

## Will the Arduino Runtime Need to Know Which Sensor Was Used?

```text
____________________________________
```

Why?

```text
____________________________________

____________________________________
```

This prediction becomes the starting point for the next comparison.

---

# Reflection Readiness

Reflection is optional.

It should not be completed simply because Starter Project 02 is finished.

Reflection may become meaningful when you recognize a change such as:

- user action and command meaning are different,
- a command source can change without replacing the Runtime,
- event timing changes the program control flow,
- no new input differs from an explicit Stop command,
- stable interfaces make new interactions easier to add,
- the learner's role changed from observer to command initiator.

Consider:

```text
What surprised me?

What changed from Starter Project 01?

What remained stable?

Which responsibility became clearer?

What do I now understand about events and commands?

What question do I want to carry into Starter Project 03?
```

There is no correct Reflection.

The learner owns the Reflection.

---

# Optional Reflection Draft

You may begin with:

```text
In Starter Project 01, I thought...

In Starter Project 02, I noticed...

The biggest change was...

The most important continuity was...

I now understand that a button event...

What still feels unresolved is...

For the next project, I expect...
```

Use your own words.

Do not copy a predetermined conclusion.

---

# One Final Comparison

At first, the project may have appeared to be:

```text
Press Button

↓

Robot Moves
```

After completing the project, the relationship may now appear more like:

```text
User Action

↓

Input Detection

↓

Event Interpretation

↓

Command State

↓

Communication

↓

Hardware Execution

↓

Robot Movement
```

What was added to your understanding?

```text
____________________________________

____________________________________

____________________________________
```

---

# Ready to Continue?

You do not need to master every implementation detail.

You may be ready for the next project when you can reasonably explain:

> The user creates the initiating action, but the micro:bit program interprets
> that action and generates the movement command.

And:

> The command source changed, while the Arduino Runtime and downstream
> hardware-execution path remained stable.

Proceed to:

```text
03_environment_generated_commands
```

Carry forward your prediction about what will change and what will remain the
same.

---

# Completion Check

- [ ] I reviewed my original prediction.
- [ ] I compared Starter Projects 01 and 02.
- [ ] I identified the user as the initiating command source.
- [ ] I distinguished input events from movement commands.
- [ ] I traced the command path through the system.
- [ ] I understood why A+B has input priority.
- [ ] I distinguished no new input from an explicit Stop command.
- [ ] I understood why the project uses a responsive input loop.
- [ ] I understood the role of `current_command`.
- [ ] I identified what changed.
- [ ] I identified what remained stable.
- [ ] I formed a prediction for environment-generated commands.
- [ ] I understand that Reflection remains optional and learner-owned.

---

# Foundation Principle

Do not continue merely because the buttons produced movement.

Continue because the comparison revealed a new relationship.

```text
Program-Generated Command

↓

User-Generated Command
```

The source changed.

The timing changed.

The learner's role changed.

The micro:bit control flow adapted.

The shared Runtime remained stable.

The hardware-execution responsibility remained stable.

Learning grows when the learner can see both the local change and the larger
continuity.

That understanding becomes the foundation for the next project.