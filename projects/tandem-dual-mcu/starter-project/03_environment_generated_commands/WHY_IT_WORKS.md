# Why It Works

> Project: Tandem Dual MCU  
> Starter Project: 03 — Environment-Generated Commands  
> Difficulty: Beginner  
> Read After: Observing repeated Bright, Dark, and intermediate-light states

---

# Purpose

This document explains why the Environment-Generated Commands project behaves
as it does.

It does **not** focus primarily on light-sensor syntax.

Instead, it asks a larger architectural question:

> **How can a changing environment become a robot command without changing
> the entire Tandem system?**

Starter Project 01 used an internal program sequence.

Starter Project 02 used a user action.

Starter Project 03 begins with an environmental condition.

```text
Starter Project 01

Program Schedule

↓

Command
```

```text
Starter Project 02

User Action

↓

Event

↓

Command
```

```text
Starter Project 03

Environment Change

↓

Sensor Observation

↓

Interpretation

↓

Command
```

The source changes.

The downstream architecture remains largely stable.

---

# Read This After Experience

Before reading this document, you should already have:

- predicted the startup behaviour,
- run the project,
- exposed the micro:bit display to light,
- covered the display,
- observed Forward and Stop,
- repeated the environment change,
- observed what happened between the two thresholds,
- investigated unexpected behaviour where necessary.

The intended learning order remains:

```text
Prediction

↓

Environment Change

↓

Observation

↓

Comparison

↓

Explanation

↓

Understanding
```

This explanation should now describe something you have already experienced.

---

# The Central Difference

Starter Project 02 waited for a user button event.

```text
User Presses Button

↓

Program Interprets Input

↓

Command Changes
```

Starter Project 03 does not wait for the user to select the movement.

Instead, it repeatedly observes environmental data.

```text
Read Light Level

↓

Interpret Environment

↓

Select Command
```

The timing of the next command depends on a condition outside the prepared
program sequence and outside direct user control.

---

# What Does “Environment-Generated” Mean?

The project is called:

```text
03 — Environment-Generated Commands
```

This name is an educational summary.

The environment does not directly transmit an Arduino command.

The more precise responsibility chain is:

```text
Environment Changes

↓

Sensor Produces Data

↓

micro:bit Program Interprets Data

↓

Program Generates Movement Command

↓

Arduino Runtime Executes Command
```

The environment is the initiating source.

The program remains responsible for assigning meaning and selecting the
command.

---

# The Complete Responsibility Chain

The full project follows this path:

```text
Environment

↓

micro:bit Display Light Sensor

↓

Light-Level Value

↓

Environment Interpretation

↓

Command State

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

Each layer performs one responsibility.

The environment provides a physical condition.

The sensor converts that condition into data.

The program interprets the data.

The command layer expresses what the robot should do.

The communication layer transfers the request.

The Arduino Runtime performs hardware execution.

---

# Environment, Sensor Data, and Command Are Different

This project separates three important concepts.

## Environment

```text
Physical brightness surrounding the micro:bit
```

The environment exists outside the program.

---

## Sensor Data

```text
A numerical light-level reading
```

The sensor converts a physical condition into a value the program can use.

---

## Movement Command

```text
Forward

or

Stop
```

The command expresses the selected robot behaviour.

The complete relationship is:

```text
Physical Condition

↓

Numerical Data

↓

Interpreted Meaning

↓

Movement Command
```

These are connected, but they are not identical.

---

# A Sensor Value Is Not a Command

Suppose the light sensor produces a value such as:

```text
117
```

That number does not naturally mean:

```text
Move Forward
```

or:

```text
Stop
```

The project must define a rule that gives the value meaning.

```text
Sensor Value

↓

Interpretation Rule

↓

Command
```

The meaning belongs to the program design.

Another project could interpret the same value differently.

---

# What Does `read_environment_value()` Own?

The function:

```python
read_environment_value()
```

answers one question:

> **What value is the sensor currently reporting?**

Its responsibility is limited to observation.

```text
Environment

↓

Sensor Reading
```

It does not decide whether the robot should move.

It does not send a servo command.

It returns data for another responsibility to interpret.

---

# What Does `interpret_environment()` Own?

The function:

```python
interpret_environment(
    light_level,
    current_command,
)
```

answers a different question:

> **What should this sensor value mean for the current project?**

It converts a continuous light value into one of the supported command states.

```text
High Light Value

↓

Forward
```

```text
Low Light Value

↓

Stop
```

```text
Intermediate Light Value

↓

Keep Current Command
```

This is the interpretation layer.

---

# What Does `execute_command()` Own?

The function:

```python
execute_command(command)
```

does not read the environment.

It receives an already interpreted command.

Its responsibility is:

```text
Forward Command

↓

move_forward()
```

or:

```text
Stop Command

↓

stop_robot()
```

This preserves a clear boundary between:

```text
Observation and Interpretation
```

and:

```text
Robot Command Execution
```

---

# Why Separate Reading, Interpretation, and Execution?

The project could place everything inside one large loop.

For example:

```python
if display.read_light_level() >= 120:
    robot.servo_speed(...)
else:
    robot.servo_speed(...)
```

That may work technically.

However, it combines several different responsibilities:

- reading data,
- deciding what the data means,
- selecting a command,
- controlling hardware.

The current structure separates them.

```text
read_environment_value()

↓

interpret_environment()

↓

execute_command()
```

This makes each relationship easier to observe, explain, test, and later
replace.

---

# Continuous Values and Discrete Commands

Environmental values are often continuous.

The light level may produce many possible numbers.

```text
0

1

2

...

120

121

...
```

The robot project supports only a small number of movement states.

```text
Forward

Stop
```

The program must therefore convert many possible sensor values into a small
number of command choices.

```text
Continuous Sensor Range

↓

Classification Rule

↓

Discrete Command State
```

This is why thresholds are required.

---

# What Is a Threshold?

A threshold is a decision boundary.

The project uses:

```python
LIGHT_FORWARD_THRESHOLD = 120
```

and:

```python
LIGHT_STOP_THRESHOLD = 80
```

The basic interpretation is:

```text
Light Level ≥ 120

↓

Forward
```

```text
Light Level ≤ 80

↓

Stop
```

The thresholds transform numerical data into system meaning.

They are not universal definitions of bright and dark.

They are design choices for this project.

---

# Why Are the Threshold Values Not Universal?

Light readings can vary because of:

- room lighting,
- shadows,
- display orientation,
- nearby objects,
- device differences,
- how completely the display is covered.

Therefore:

```text
120
```

does not represent a universal scientific boundary between bright and dark.

It represents the current project's chosen transition point.

A different environment may require a different value.

The architectural principle remains the same even when the number changes.

---

# Why Use Two Thresholds?

A simpler program might use one threshold.

```python
if light_level >= 100:
    move_forward()
else:
    stop_robot()
```

However, sensor values may fluctuate near that boundary.

For example:

```text
99

↓

101

↓

98

↓

102
```

With one threshold, the command could repeatedly alternate:

```text
Stop

↓

Forward

↓

Stop

↓

Forward
```

This may create unstable robot behaviour.

The project instead uses two thresholds.

---

# Hysteresis

The two-threshold design creates three regions.

```text
0 ───────── 80 ───────── 120 ───────── Maximum Light
```

```text
Stop Region

↓

Hold Region

↓

Forward Region
```

More precisely:

```text
Light Level ≤ 80

↓

Enter Stop
```

```text
Light Level ≥ 120

↓

Enter Forward
```

```text
80 < Light Level < 120

↓

Keep Current Command
```

This structure is called **hysteresis**.

The command depends not only on the current sensor value but also on the
current command state.

---

# Why Does the Hold Region Matter?

Consider a robot that is already moving Forward.

If the light value falls from 130 to 110, it enters the intermediate range.

The robot remains Forward.

```text
Current Command: Forward

Light Level: 110

↓

Hold Current Command

↓

Forward Continues
```

The robot stops only when the value falls to or below the Stop threshold.

```text
Light Level: 80 or Lower

↓

Stop
```

Now consider a stopped robot.

If the light level rises from 70 to 100, the robot remains stopped.

```text
Current Command: Stop

Light Level: 100

↓

Hold Current Command

↓

Stop Continues
```

It moves Forward only after the light reaches the higher threshold.

This gap prevents small fluctuations from producing repeated command changes.

---

# Current State Becomes Part of Interpretation

Starter Project 03 does not interpret the sensor value in isolation.

It also considers:

```text
current_command
```

The same intermediate light value may preserve different states.

```text
Light Level: 100

Current Command: Forward

↓

Remain Forward
```

```text
Light Level: 100

Current Command: Stop

↓

Remain Stop
```

This introduces an important systems idea:

> **The meaning of new input may depend on the current state of the system.**

---

# Why Store `current_command`?

The program initializes:

```python
current_command = COMMAND_STOP
```

This value serves two purposes.

First, it allows the interpretation function to preserve the current state
inside the hold region.

Second, it prevents the same command from being transmitted repeatedly.

```text
Environment Still Bright

Current Command Already Forward

↓

No Command Change

↓

No New I2C Command Required
```

Only meaningful state changes are sent.

---

# Why Send Only When the Command Changes?

The main loop repeatedly reads the sensor.

```text
Read

↓

Interpret

↓

Compare

↓

Repeat
```

Without state comparison, the program could send the same Forward command
every 100 milliseconds while the environment remains bright.

That would produce unnecessary communication.

The project instead uses:

```python
if environment_command != current_command:
```

The result is:

```text
Same Interpreted Command

↓

No New Transmission
```

```text
Different Interpreted Command

↓

Execute and Store New Command
```

The significant event is the change in state.

---

# Why Does the Project Begin Stopped?

The program starts with:

```text
COMMAND_STOP
```

This creates a safe and observable initial state.

```text
Power On

↓

Attach Servo Pins

↓

Stop

↓

Allow Sensor Stabilization

↓

Begin Environment Interpretation
```

The robot does not assume the environment before the system is prepared.

A safe initial state is especially important when an external condition can
later generate movement automatically.

---

# Why Is There a Stabilization Delay?

The program waits briefly before interpreting the first environment value.

```python
sleep(SENSOR_STABILIZATION_TIME_MS)
```

This creates a clear initialization period.

```text
Initialize Hardware

↓

Enter Stop

↓

Wait Briefly

↓

Begin Sensor-Based Decisions
```

The delay helps separate startup from active environmental response.

It is not intended as a long movement delay.

After initialization, the project remains responsive through the sensor loop.

---

# Why Use a Repeated Observation Loop?

The environment may change at any time.

The program therefore repeats:

```text
Read Environment

↓

Interpret Value

↓

Update Command If Needed

↓

Wait Briefly

↓

Read Again
```

Unlike a prepared sequence, the program does not know in advance when the next
meaningful change will occur.

```text
Program-Generated Timing

=

Known in Advance
```

```text
Environment-Generated Timing

=

Dependent on External Change
```

The repeated loop keeps the system ready for an unpredictable environment.

---

# Why Use a Short Polling Interval?

The program uses:

```python
SENSOR_POLL_INTERVAL_MS = 100
```

The short delay prevents the loop from running without pause while still
allowing frequent observation.

The relationship is:

```text
Shorter Interval

↓

More Frequent Observation

↓

Potentially Faster Response
```

```text
Longer Interval

↓

Less Frequent Observation

↓

Potentially Slower Response
```

The selected value is a simple MVP balance.

This project does not attempt advanced real-time sensor scheduling.

---

# Environment-Generated Timing

Starter Project 01 knew when each command would occur.

```text
Program Sequence

↓

Predetermined Timing
```

Starter Project 02 waited for user events.

```text
User Action

↓

Event Timing
```

Starter Project 03 waits for an interpreted environmental transition.

```text
Environment Change

↓

Threshold Crossing

↓

Command Timing
```

The timing source changes across all three projects.

The downstream execution system does not need to be redesigned.

---

# Why Does the Arduino Not Read the Light Sensor?

The light sensor belongs to the micro:bit-side input layer.

The micro:bit:

- reads the light value,
- interprets the value,
- selects Forward or Stop.

The Arduino receives only the hardware-related command.

```text
Light Level

↓

micro:bit Interpretation

↓

Movement Command

↓

Arduino Runtime
```

The Arduino does not need to know:

- the raw light value,
- the threshold values,
- whether the display was covered,
- what physical sensor was used.

It only needs to execute the received servo operation.

---

# Stable Command Interface

The Arduino Runtime received movement commands in all three projects.

```text
Starter Project 01

Program Sequence

↓

Movement Command
```

```text
Starter Project 02

User Button

↓

Movement Command
```

```text
Starter Project 03

Light Sensor

↓

Movement Command
```

From the Arduino's perspective, the upstream origin can remain hidden.

```text
Different Input Sources

↓

Stable Movement Command

↓

Stable Runtime Execution
```

This is one reason stable interfaces make systems easier to extend.

---

# Replaceable Environmental Inputs

Today, the project uses light.

A future project could use:

```text
Distance Sensor

↓

Obstacle Interpretation

↓

Stop
```

or:

```text
Line Sensor

↓

Path Interpretation

↓

Turn
```

or:

```text
Temperature Sensor

↓

Thermal Interpretation

↓

Command
```

The input-reading and interpretation layers would change.

The downstream command and execution layers could remain largely reusable.

```text
New Sensor

↓

New Interpretation

↓

Existing Command Interface

↓

Existing Runtime
```

---

# What Changes?

Compared with Starter Project 02, several responsibilities change.

## Input Source

```text
Before:

User Action
```

```text
Now:

Environment Change
```

## Input Form

```text
Before:

Button State
```

```text
Now:

Numerical Sensor Value
```

## Interpretation

```text
Before:

Button Mapping
```

```text
Now:

Threshold and State Rule
```

## Command Timing

```text
Before:

When the User Acts
```

```text
Now:

When the Environment Crosses a Decision Boundary
```

## Learner Role

```text
Before:

Command Initiator
```

```text
Now:

Environment Observer and System Investigator
```

---

# What Remains the Same?

The following system remains stable:

```text
micro:bit

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Execution

↓

Robot Movement
```

Stable elements include:

- the robot chassis,
- the Arduino,
- the micro:bit,
- the shared Arduino Runtime,
- the servo pins,
- the communication library,
- the I2C path,
- the movement commands,
- the Arduino's execution responsibility.

The new behaviour is created by changing the upstream input and
interpretation layer.

---

# Comparison Across All Three Projects

| Architectural Concern | Project 01 | Project 02 | Project 03 |
|---|---|---|---|
| Initiating source | Program schedule | User action | Environment change |
| Input representation | Function sequence | Button state | Sensor value |
| Interpretation rule | Sequence order | Button mapping | Threshold and current state |
| Timing | Predetermined | User-controlled | Environment-dependent |
| Command states | Movement sequence | Forward, Backward, Stop | Forward, Stop |
| Communication | I2C | I2C | I2C |
| Arduino Runtime | Shared | Shared | Shared |
| Servo execution | Arduino | Arduino | Arduino |
| Robot hardware | Stable | Stable | Stable |

This comparison is the main learning outcome of Tandem Phase 1.

---

# Program, User, and Environment Are Not Identical

All three can begin a command process, but they do so differently.

## Program

```text
Internal Schedule

↓

Command
```

The source is already encoded in software.

---

## User

```text
Intentional Action

↓

Event

↓

Command
```

A person deliberately initiates the input.

---

## Environment

```text
Physical Condition

↓

Sensor Data

↓

Interpretation

↓

Command
```

The program observes an external condition and applies a rule.

These sources differ.

They can still connect to the same command interface.

---

# Why Comparison Makes the Architecture Visible

Studied alone, Starter Project 03 may look like a simple light-sensor robot.

Compared with Projects 01 and 02, its deeper meaning becomes visible.

```text
Different Source

Different Timing

Different Interpretation

↓

Same Communication

Same Runtime

Same Execution
```

The learner can see that a system may evolve locally without every layer
changing.

This is an architectural lesson rather than only a sensor lesson.

---

# Why Troubleshooting Needs New Layers

When the robot fails to respond to darkness, the cause may exist at several
different points.

```text
Did the Environment Change?

↓

Did the Sensor Value Change?

↓

Did the Interpretation Change?

↓

Did the Command Change?

↓

Did the Message Transfer?

↓

Did the Hardware Execute?
```

The sensor project adds new failure possibilities before the existing
communication and execution layers.

A clear responsibility chain makes those possibilities easier to isolate.

---

# Sensor Noise and System Stability

Physical measurements rarely remain perfectly constant.

A stable environment can still produce small value fluctuations.

```text
110

↓

112

↓

109

↓

111
```

This is normal sensor variation.

The system should not necessarily convert every small numerical change into a
new robot command.

```text
Data Change

≠

Meaningful State Change
```

Thresholds, hysteresis, and command-state comparison help separate minor
variation from meaningful transition.

---

# Data, Information, and Command

The project introduces an important conceptual progression.

## Data

```text
117
```

A raw observation.

## Information

```text
The environment is inside the intermediate range.
```

An interpreted meaning.

## Command

```text
Keep the current robot state.
```

A selected system action.

The progression is:

```text
Data

↓

Interpretation

↓

Decision

↓

Command
```

This pattern appears throughout computing and engineering.

---

# Similar Patterns in Other Systems

## Automatic Lighting

```text
Ambient Light

↓

Light Sensor

↓

Darkness Interpretation

↓

Turn Lamp On
```

## Thermostat

```text
Room Temperature

↓

Temperature Sensor

↓

Threshold Rule

↓

Heating Command
```

## Obstacle-Avoiding Robot

```text
Distance

↓

Range Sensor

↓

Obstacle Interpretation

↓

Stop or Turn
```

## Monitoring Service

```text
System Metrics

↓

Monitoring Data

↓

Risk Rule

↓

Alert
```

## AI Agent

```text
Observed Context

↓

Model Interpretation

↓

Selected Action

↓

Tool Execution
```

The technologies differ.

The architecture remains recognizable.

---

# A More Precise Meaning of Autonomy

The robot reacts without waiting for a direct user button command.

However, this does not mean the system has unlimited independent intention.

Its behaviour is still determined by:

- the selected sensor,
- the interpretation rules,
- the threshold values,
- the available command states,
- the program structure.

```text
Environment Provides Condition

↓

Program Provides Meaning

↓

System Produces Action
```

The project introduces a basic form of autonomous response.

It does not imply unrestricted intelligence.

---

# The Real Learning Objective

This project includes:

- a light sensor,
- numerical values,
- thresholds,
- hysteresis,
- command states,
- a polling loop,
- I2C communication,
- servo movement.

These are important technical elements.

The deeper objective is to understand:

```text
Observation

↓

Interpretation

↓

State

↓

Command

↓

Execution
```

And:

```text
Change One Input Layer

↓

Reuse the Larger System
```

---

# Compare Your Understanding

## Before This Project

How did you think environmental control worked?

```text
____________________________________

____________________________________
```

---

## After This Project

How do you now describe the responsibility chain?

```text
____________________________________

____________________________________

____________________________________
```

---

## What Changed?

```text
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

Suppose the light sensor were replaced by a distance sensor.

The new program still generates:

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

Now identify the layer most likely to change.

```text
Sensor Reading

Environment Interpretation

Command Interface

Arduino Runtime

Servo Hardware
```

This question reveals whether you can distinguish input adaptation from
downstream execution.

---

# Understanding Check

Before continuing, confirm that you can explain the following in your own
words.

- [ ] The environment is the initiating source of change.
- [ ] The light sensor converts a physical condition into numerical data.
- [ ] A sensor value is not itself a movement command.
- [ ] `read_environment_value()` owns observation.
- [ ] `interpret_environment()` owns project-specific meaning.
- [ ] `execute_command()` owns movement-command selection.
- [ ] Thresholds convert continuous values into discrete states.
- [ ] Two thresholds create a hold region.
- [ ] The hold region prevents unnecessary state oscillation.
- [ ] `current_command` is part of the interpretation and transition logic.
- [ ] The same command is not repeatedly transmitted without a state change.
- [ ] The Arduino Runtime does not need the raw light value.
- [ ] The command source changed while the execution architecture remained stable.
- [ ] Program, User, and Environment are three different upstream sources.

You do not need to memorize every constant.

You should understand the responsibility relationships.

---

# Tandem Phase 1 Architecture

The completed Phase 1 relationship is:

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

Movement Command

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Servo Execution

↓

Robot Movement
```

Three sources now connect to one reusable downstream architecture.

That is the main structural lesson of the phase.

---

# Reflection Does Not Begin Because Phase 1 Ended

Completing three project folders does not automatically create meaningful
Reflection.

Reflection becomes useful when the learner recognizes something such as:

- command sources can differ,
- input data and command meaning are different,
- interpretation belongs to a specific layer,
- the current state can influence new input meaning,
- stable contracts allow downstream reuse,
- environmental response is designed rather than magical.

The sequence remains:

```text
Experience

↓

Comparison

↓

Changed Understanding

↓

Optional Reflection
```

---

# Continue

Open:

```text
BEFORE_YOU_CONTINUE.md
```

This final checkpoint compares all three command-source projects.

It does not test whether you memorized threshold values.

It helps you recognize whether you can now see the reusable architecture
beneath three different experiences.

Reflection remains optional and learner-owned.

---

# Engineering Principle

Physical data does not explain itself.

```text
Environment

↓

Data
```

Software provides interpretation.

```text
Data

↓

Meaning
```

System design connects meaning to action.

```text
Meaning

↓

Command

↓

Execution
```

Clear responsibility boundaries allow each layer to change without forcing
the entire system to be rebuilt.

---

# Foundation Principle

Starter Project 01 showed:

```text
Program Schedule

↓

Command
```

Starter Project 02 showed:

```text
User Action

↓

Event

↓

Command
```

Starter Project 03 shows:

```text
Environment Change

↓

Sensor Data

↓

Interpretation

↓

Command
```

The source changed.

The representation changed.

The timing changed.

The micro:bit interpretation responsibility changed.

The communication path remained stable.

The Arduino Runtime remained stable.

The servo-execution responsibility remained stable.

Learning emerges from seeing both the changing source and the stable system
beneath it.

That is why this project works.

---

# Reference Evolution

The original micro:bit example teaches:

```text
Light Sensor

↓

Light Value
```

This Starter Project extends it into:

```text
Environment

↓

Sensor Value

↓

Interpretation

↓

Movement Command

↓

Communication

↓

Arduino Runtime

↓

Robot Movement
```

The purpose is not to replace the reference example.

The purpose is to demonstrate how a small example becomes part of a larger
software architecture.