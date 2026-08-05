# Before You Continue

> Project: Tandem Dual MCU  
> Starter Project: 03 — Environment-Generated Commands  
> Difficulty: Beginner  
> Purpose: Compare all three command sources and recognize the stable architecture beneath them.

---

# Purpose

You have now completed the third Starter Project in the Tandem Dual MCU
command-source sequence.

The three projects were:

```text
01 — Program-Generated Commands

↓

02 — User-Generated Commands

↓

03 — Environment-Generated Commands
```

Before moving forward, pause and compare the complete learning path.

Do not ask only:

> Did the light sensor work?

Ask instead:

> **How did an environmental condition become a movement command?**

And:

> **What changed across Program, User, and Environment?**

Also ask:

> **What remained stable across all three projects?**

This document is not an examination.

It helps you recognize whether three different robot experiences now appear
as variations of one reusable system.

---

# Tandem Phase 1 Position

Starter Project 01 established the first command source.

```text
Program Schedule

↓

Command
```

Starter Project 02 changed the source.

```text
User Action

↓

Event

↓

Command
```

Starter Project 03 changed it again.

```text
Environment Change

↓

Sensor Data

↓

Interpretation

↓

Command
```

The sources are different.

The downstream architecture remains recognizable.

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

This comparison completes Tandem Phase 1.

---

# Step 1 — Experience Check

Confirm what you actually experienced.

- [ ] I completed or reviewed Starter Project 01.
- [ ] I completed or reviewed Starter Project 02.
- [ ] I downloaded the Starter Project 03 `main.py`.
- [ ] The robot began from a stopped state.
- [ ] I observed the robot in a bright condition.
- [ ] I observed the robot in a dark condition.
- [ ] I changed the environment more than once.
- [ ] I observed the intermediate-light hold region.
- [ ] I compared all three command sources.
- [ ] I identified at least one responsibility that changed.
- [ ] I identified at least one responsibility that remained stable.

If the environment-driven behaviour was unclear, return to:

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

## Startup Prediction

```text
What did I expect immediately after power-on?

____________________________________

____________________________________
```

---

## Bright-Environment Prediction

```text
What did I expect in a bright environment?

____________________________________

____________________________________
```

---

## Dark-Environment Prediction

```text
What did I expect when the display was covered?

____________________________________

____________________________________
```

---

## Responsibility Prediction

```text
Which device did I expect to read the light level?

____________________________________
```

```text
Which part did I expect to decide Forward or Stop?

____________________________________
```

```text
Did I expect the Arduino Runtime to receive the raw light value?

____________________________________
```

---

# Step 3 — Compare Prediction With Reality

Record what actually happened.

## Startup Behaviour

```text
____________________________________

____________________________________
```

---

## Bright-Environment Behaviour

```text
____________________________________

____________________________________
```

---

## Dark-Environment Behaviour

```text
____________________________________

____________________________________
```

---

## Intermediate-Light Behaviour

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

The prediction does not need to be correct.

The difference is the learning material.

---

# Step 4 — Compare All Three Starter Projects

Complete the comparison table.

| Question | Project 01 — Program | Project 02 — User | Project 03 — Environment |
|---|---|---|---|
| What initiated the command process? | __________________ | __________________ | __________________ |
| What form did the input take? | __________________ | __________________ | __________________ |
| Who or what determined the timing? | __________________ | __________________ | __________________ |
| What interpretation rule was used? | __________________ | __________________ | __________________ |
| Did the Arduino Runtime change? | __________________ | __________________ | __________________ |
| Did the communication path change? | __________________ | __________________ | __________________ |
| Did the robot hardware change? | __________________ | __________________ | __________________ |
| What was the learner's role? | __________________ | __________________ | __________________ |

Now summarize the sequence.

```text
Project 01 began with:

____________________________________
```

```text
Project 02 began with:

____________________________________
```

```text
Project 03 began with:

____________________________________
```

---

# Step 5 — What Changed?

Across the three projects, identify the changing responsibilities.

Possible examples include:

- command source,
- input form,
- command timing,
- interpretation rule,
- micro:bit control flow,
- learner role,
- environmental observation.

Write your own answer.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
The most important changing layer was:

____________________________________
```

```text
The most important reason it changed was:

____________________________________

____________________________________
```

---

# Step 6 — What Remained the Same?

Across all three projects, identify the stable responsibilities.

Possible examples include:

- micro:bit-to-Arduino communication,
- `microbit_abot.py`,
- I2C,
- the shared Arduino Runtime,
- servo pins,
- servo execution,
- robot hardware,
- the command-execution boundary.

Write your own answer.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
Even though the command source changed,

____________________________________ remained stable.
```

```text
The Arduino Runtime continued to

____________________________________.
```

```text
The robot hardware continued to

____________________________________.
```

The stable structure is the reason these projects can be compared meaningfully.

---

# Step 7 — Environment, Data, Meaning, and Command

Complete the sequence.

## Environment

What physical condition changed?

```text
____________________________________
```

---

## Sensor Data

What numerical information did the micro:bit produce?

```text
____________________________________
```

---

## Interpreted Meaning

How did the program classify that value?

```text
____________________________________
```

---

## Command

What movement command was selected?

```text
____________________________________
```

Now complete the chain.

```text
Environment

↓

____________________________

↓

Sensor Value

↓

____________________________

↓

Movement Command

↓

____________________________

↓

Robot Movement
```

The environment, data, meaning, and command are connected.

They are not the same responsibility.

---

# Step 8 — Does the Environment Directly Command the Robot?

Choose the statement that best matches your understanding.

```text
The environment directly sends a servo command.
```

```text
The environment changes, the sensor produces data,
and the program interprets that data into a command.
```

```text
The Arduino decides whether the environment is bright or dark.
```

```text
I am not sure yet.
```

Explain your choice.

```text
____________________________________

____________________________________

____________________________________
```

The project name is an educational summary.

The precise responsibility chain matters.

---

# Step 9 — Command Flow Check

Complete the full path.

```text
Environment

↓

micro:bit Display Light Sensor

↓

____________________________

↓

Environment Interpretation

↓

____________________________

↓

microbit_abot.py

↓

____________________________

↓

Arduino Runtime

↓

____________________________

↓

Robot Movement
```

Try to complete this from understanding rather than memorization.

Review:

```text
WHY_IT_WORKS.md
```

if the relationship remains unclear.

---

# Step 10 — Responsibility Check

Explain each responsibility in your own words.

## The Environment Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## The Light Sensor Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## `read_environment_value()` Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## `interpret_environment()` Is Mainly Responsible For

```text
____________________________________

____________________________________
```

---

## `execute_command()` Is Mainly Responsible For

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

The goal is to see where one responsibility ends and another begins.

---

# Step 11 — Sensor Value and Command Check

Consider a light value such as:

```text
117
```

Does that number inherently mean Forward?

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

Complete:

```text
A sensor value becomes meaningful when

____________________________________.
```

```text
The program converts the interpreted meaning into

____________________________________.
```

The same numerical value could have a different meaning in another project.

---

# Step 12 — Threshold Check

Complete the current rule.

```text
Light Level ≥ ____________________

↓

Forward
```

```text
Light Level ≤ ____________________

↓

Stop
```

```text
Between the two thresholds

↓

____________________________________
```

Now explain what a threshold does.

```text
____________________________________

____________________________________
```

A threshold converts many possible sensor values into a smaller number of
system states.

---

# Step 13 — Hysteresis Check

Why does the project use two thresholds instead of one?

Consider:

```text
99

↓

101

↓

98

↓

102
```

With one threshold, what might happen?

```text
____________________________________

____________________________________
```

With two thresholds, what happens inside the intermediate range?

```text
____________________________________

____________________________________
```

Complete:

```text
Hysteresis helps prevent

____________________________________.
```

```text
The hold region allows the system to

____________________________________.
```

---

# Step 14 — Current-State Check

Suppose the light value is:

```text
100
```

What happens if the current command is Forward?

```text
____________________________________
```

What happens if the current command is Stop?

```text
____________________________________
```

Why can the same sensor value preserve two different states?

```text
____________________________________

____________________________________
```

This reveals that input meaning may depend on current system state.

---

# Step 15 — Command-Change Check

Why does the program compare:

```text
environment_command
```

with:

```text
current_command
```

Complete:

```text
If both commands are the same,

the program should

____________________________________.
```

```text
If the commands are different,

the program should

____________________________________.
```

What unnecessary behaviour does this prevent?

```text
____________________________________

____________________________________
```

The important event is a state transition, not every sensor reading.

---

# Step 16 — Timing Comparison

Complete the timing comparison.

## Starter Project 01

```text
The next command occurred when:

____________________________________
```

## Starter Project 02

```text
The next command occurred when:

____________________________________
```

## Starter Project 03

```text
The next command occurred when:

____________________________________
```

Now summarize:

```text
Program timing is

____________________________________.
```

```text
User timing is

____________________________________.
```

```text
Environment timing is

____________________________________.
```

The command source changes not only input data but also when the system must
remain ready to respond.

---

# Step 17 — Troubleshooting Check

If the project behaved unexpectedly, review your investigation.

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
Did I immediately change the thresholds?

or

Did I first separate environment, sensor, interpretation,
communication, and execution?
```

A sensor-related symptom may originate far from the sensor itself.

---

# Step 18 — Engineering Habit Check

Choose the approach you used most often.

```text
Change Thresholds Immediately

or

Observe the Sensor Relationship First
```

```text
Treat Data as Meaning

or

Separate Data From Interpretation
```

```text
Assume the Arduino Reads the Sensor

or

Trace the Responsibility Chain
```

```text
React to Every Value Change

or

Look for Meaningful State Change
```

```text
Ask Only Whether It Works

or

Ask Which Layer Changed
```

This is not a score.

It is a record of your current engineering habit.

---

# Step 19 — Explain the Phase Simply

Imagine explaining Tandem Phase 1 to someone who has not seen the projects.

Complete:

```text
In Project 01, commands began with

____________________________________.
```

```text
In Project 02, commands began with

____________________________________.
```

```text
In Project 03, commands began with

____________________________________.
```

```text
Across all three projects, the Arduino Runtime

____________________________________.
```

```text
The most reusable architectural pattern was

____________________________________.
```

Now explain the whole phase in one paragraph.

```text
____________________________________

____________________________________

____________________________________

____________________________________

____________________________________
```

---

# Step 20 — Stable Interface Question

Suppose the light sensor were replaced by a distance sensor.

The micro:bit still generates:

```text
Forward
```

and:

```text
Stop
```

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

Which layers would most likely change?

- [ ] Sensor-reading layer
- [ ] Interpretation layer
- [ ] Command interface
- [ ] I2C communication
- [ ] Arduino Runtime
- [ ] Servo hardware

Explain your choices.

```text
____________________________________

____________________________________
```

This question reveals whether you can distinguish local input changes from
downstream execution.

---

# Step 21 — Generalize Beyond the Robot

Complete one or more of the following relationships.

## Thermostat

```text
Temperature

↓

____________________________

↓

Heating Command
```

## Automatic Light

```text
Ambient Brightness

↓

____________________________

↓

Lamp Command
```

## Web Application

```text
User Click

↓

____________________________

↓

Service Action
```

## AI Agent

```text
Observed Context

↓

____________________________

↓

Selected Tool Action
```

What common pattern do these systems share?

```text
____________________________________

____________________________________
```

The robot is one visible example of a broader system relationship.

---

# Step 22 — Tandem Phase 1 Understanding Check

You may have completed Tandem Phase 1 when you can explain:

- [ ] Program, User, and Environment are different command sources.
- [ ] Input source is separate from command execution.
- [ ] A sensor converts physical conditions into data.
- [ ] Data requires interpretation before it becomes a command.
- [ ] The interpretation rule belongs to the micro:bit-side project logic.
- [ ] Thresholds convert continuous values into discrete states.
- [ ] Hysteresis reduces unstable command switching.
- [ ] Current state may influence the meaning of new input.
- [ ] Commands should be transmitted when meaningful state changes occur.
- [ ] The shared Arduino Runtime does not need the raw input source.
- [ ] Stable interfaces allow new input sources to reuse existing execution.
- [ ] What changes and what remains the same can be examined separately.

You do not need to master every technical detail.

You should be able to explain the relationships.

---

# What Changed Across Phase 1?

Write the most important change you observed.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
Across the three projects, the command source changed from

____________________________

to

____________________________

to

____________________________.
```

---

# What Remained Stable Across Phase 1?

Write the most important continuity you observed.

```text
____________________________________

____________________________________

____________________________________
```

Complete:

```text
Across all three projects, the stable downstream structure was

____________________________________

____________________________________.
```

This continuity is the architectural foundation for future Tandem projects.

---

# Reflection Readiness

Reflection remains optional.

It should not be completed merely because Tandem Phase 1 has ended.

Reflection may become meaningful when you recognize something such as:

- a command source is only one layer of a larger system,
- data and meaning are different,
- an environment does not directly control hardware,
- interpretation rules create system behaviour,
- current state influences new input,
- stable contracts make extension easier,
- different experiences can reveal one repeating architecture.

Consider:

```text
At first, I thought a robot command...

After comparing Program, User, and Environment...

The most important changing responsibility was...

The most important stable relationship was...

I now understand sensor data as...

I now understand system state as...

The next concept I want to explore is...
```

There is no correct Reflection.

The learner owns the Reflection.

---

# Optional Reflection Draft

You may begin with:

```text
Before Tandem Phase 1, I thought...

Project 01 showed me...

Project 02 changed my understanding by...

Project 03 revealed...

The most stable architecture was...

The biggest difference across the projects was...

What still feels unresolved is...

The next concept I want to explore is...
```

Use your own words.

Do not copy a predetermined conclusion.

---

# One Final Comparison

At the beginning of the course, the robot may have appeared to be:

```text
Code

↓

Robot Movement
```

After completing the three projects, the system may now appear more like:

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

Communication

↓

Runtime Execution

↓

Physical Behaviour
```

What was added to your understanding?

```text
____________________________________

____________________________________

____________________________________

____________________________________
```

---

# Ready to Complete Tandem Phase 1?

You do not need to feel that every concept is complete.

You may be ready to conclude this phase when you can reasonably say:

> Program, User, and Environment can initiate commands in different ways.

And:

> The command source and interpretation layer can change while communication,
> Runtime, and hardware execution remain stable.

And:

> Sensor data becomes behaviour only after software gives it meaning.

This completes:

```text
Tandem Phase 1

Command Sources
```

Do not rush immediately into the next concept.

Preserve the comparison first.

---

# Completion Check

- [ ] I reviewed my original prediction.
- [ ] I observed repeated bright and dark transitions.
- [ ] I compared all three Starter Projects.
- [ ] I distinguished environment from sensor data.
- [ ] I distinguished sensor data from interpreted meaning.
- [ ] I distinguished interpreted meaning from movement command.
- [ ] I understood the role of thresholds.
- [ ] I understood the purpose of hysteresis.
- [ ] I understood why current state matters.
- [ ] I understood why duplicate commands are avoided.
- [ ] I traced the stable command-execution path.
- [ ] I identified what changed across Phase 1.
- [ ] I identified what remained stable across Phase 1.
- [ ] I generalized the pattern beyond the robot.
- [ ] I understand that Reflection remains optional and learner-owned.

---

# Foundation Principle

Do not complete Tandem Phase 1 merely because three projects ran.

Complete it because the comparison revealed one reusable architecture.

```text
Program Schedule

User Action

Environment Change

↓

Different Command Sources
```

```text
Observation or Event

↓

Interpretation

↓

Command

↓

Communication

↓

Execution
```

The input source changed.

The representation changed.

The timing changed.

The interpretation changed.

The larger downstream architecture remained stable.

Learning grows when the learner can see both local variation and structural
continuity.

That understanding is the real completion of Tandem Phase 1.

---

# Complete Tandem Phase 1

Return to the Phase 1 completion guide:

- [Review Phase 1 Completion](../README.md#phase-1-completion-check)

Reflection remains optional.

After reviewing completion, you may continue to:

- [After Phase 1](../README.md#after-phase-1)