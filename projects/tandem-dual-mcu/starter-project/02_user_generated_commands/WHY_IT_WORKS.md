# Why It Works

> Project: Tandem Dual MCU  
> Starter Project: 02 — User-Generated Commands  
> Difficulty: Beginner  
> Read After: Testing Button A, Button B, and A+B

---

# Purpose

This document explains why the User-Generated Commands project behaves
differently from Starter Project 01 even though most of the Tandem
architecture remains unchanged.

It does **not** focus primarily on button syntax.

It focuses on a larger architectural question.

> **How can a system accept a new command source without rebuilding the
> entire system?**

In Starter Project 01, the program generated commands according to a prepared
sequence.

In this project, the user generates commands by pressing micro:bit buttons.

```text
Starter Project 01

Program Schedule

↓

Movement Command
```

```text
Starter Project 02

User Action

↓

Button Event

↓

Movement Command
```

The command source changes.

The command-execution architecture remains stable.

---

# Read This After Experience

Before reading this document, you should already have:

- predicted the startup behaviour,
- run the project,
- confirmed that the robot waits for input,
- tested Button A,
- tested Button B,
- tested A+B,
- compared the result with Starter Project 01,
- investigated unexpected behaviour where necessary.

The learning order remains:

```text
Prediction

↓

User Action

↓

Observation

↓

Comparison

↓

Explanation

↓

Understanding
```

This explanation should now connect to something you have already
experienced.

---

# The Central Difference

Starter Project 01 used commands already written into the program sequence.

```text
Power On

↓

Forward

↓

Left

↓

Right

↓

Backward
```

The program determined when each command occurred.

Starter Project 02 waits.

```text
Power On

↓

Stop

↓

Wait for User Input
```

The next movement does not begin until the user creates an input event.

```text
User Presses Button

↓

Program Detects Input

↓

Program Selects Command

↓

Robot Responds
```

The user now determines when the command changes.

---

# Command Source

This Starter Project is called:

```text
02 — User-Generated Commands
```

The user is the new command source.

However, this statement requires careful interpretation.

The user's finger does not directly control the Arduino servo pins.

Instead:

```text
User Action

↓

micro:bit Button State

↓

Program Interpretation

↓

Movement Command

↓

Arduino Execution
```

The user initiates the process.

The software still translates that action into a structured command.

---

# User Action Is Not Yet a Robot Command

Pressing Button A is a physical action.

By itself, that action does not mean “move forward” universally.

The meaning exists because `main.py` assigns it.

```text
Button A

↓

Program Rule

↓

Forward Command
```

Similarly:

```text
Button B

↓

Program Rule

↓

Backward Command
```

And:

```text
Buttons A + B

↓

Program Rule

↓

Stop Command
```

The button event and the movement command are therefore different things.

```text
Input Event

≠

Movement Command
```

The program connects them.

---

# The Complete Responsibility Chain

The full interaction follows this path.

```text
User

↓

micro:bit Buttons

↓

main.py

↓

Command Selection

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

Every layer performs a different responsibility.

The user creates the initiating action.

The micro:bit detects and interprets that action.

The communication library translates the selected command.

I2C transfers it.

The Arduino Runtime executes the hardware operation.

The servos create physical movement.

---

# What Does the User Own?

The user determines:

- when a command is requested,
- which supported command is requested,
- when the robot should change its movement state,
- when the robot should stop.

In simplified form:

```text
User

=

When should the interaction change?
```

The user does not own:

- I2C encoding,
- Arduino pin control,
- servo-signal generation,
- hardware execution.

Those responsibilities remain inside the system.

---

# What Does `main.py` Own?

`main.py` connects user input to movement meaning.

Its responsibilities include:

- reading Button A,
- reading Button B,
- recognizing A+B,
- assigning a command to each input state,
- preventing unnecessary duplicate command transmission,
- updating the micro:bit display,
- keeping the input loop responsive.

In simplified form:

```text
main.py

=

Interpret the user's action

and select the corresponding command.
```

The central transformation is:

```text
Button State

↓

Command State
```

---

# Why Are Command States Defined?

The program defines states such as:

```python
COMMAND_STOP = "stop"
COMMAND_FORWARD = "forward"
COMMAND_BACKWARD = "backward"
```

These names separate the meaning of a command from the physical button used
to produce it.

Without named command states, the program could tightly connect every button
condition directly to low-level motor values.

For example:

```text
Button A

↓

100, -100
```

That may work technically.

However, it hides the intermediate meaning.

The named-command approach makes the relationship clearer.

```text
Button A

↓

Forward Command

↓

Servo Values
```

This adds one useful abstraction layer.

---

# Input, Command, and Execution

The project separates three concepts.

## Input

```text
Button A

Button B

A + B
```

Input describes what the user does.

---

## Command

```text
Forward

Backward

Stop
```

Command describes what the system has decided should happen.

---

## Execution

```text
Left Servo Speed

Right Servo Speed
```

Execution describes how the hardware performs the command.

The full relationship is:

```text
Input

↓

Meaning

↓

Command

↓

Execution
```

This separation is one of the main learning objectives of the project.

---

# Why Is A+B Checked First?

The program reads the current state of both buttons.

```python
a_pressed = button_a.is_pressed()
b_pressed = button_b.is_pressed()
```

It then checks the combined input before checking either individual button.

```text
A + B

↓

Stop
```

This order matters.

Suppose Button A were checked first.

When both buttons were pressed, the program might detect Button A and
immediately choose Forward before it ever considered the combined stop input.

The correct priority is:

```text
Most Specific Input

↓

Less Specific Input
```

Therefore:

```text
A+B

↓

A only

↓

B only
```

The Stop command receives priority because it depends on the combined state
of both buttons.

---

# Why Use `is_pressed()`?

The program needs to inspect the current button combination.

For example, A+B requires both buttons to be active at the same time.

`is_pressed()` answers:

```text
Is this button currently being pressed?
```

This allows the program to distinguish:

```text
A only
```

```text
B only
```

```text
A and B together
```

A one-time event method may be useful in other projects, but the current
state is especially important for recognizing simultaneous input.

---

# Why Does Releasing the Button Not Stop the Robot?

When no supported button is currently active, `read_user_command()` returns:

```python
None
```

`None` means:

```text
No new command has been generated.
```

It does **not** mean:

```text
Generate a Stop command.
```

The current robot state therefore remains active.

Example:

```text
Button A Pressed

↓

Forward Command

↓

Robot Moves Forward

↓

Button Released

↓

No New Command

↓

Forward State Remains
```

The learner must generate another command to change that state.

For example:

```text
A+B

↓

Stop Command
```

This is called state-based control.

The input changes the current state rather than controlling movement only
while the button remains held.

---

# Momentary Control vs State-Based Control

Two different interaction designs are possible.

## Momentary Control

```text
Button Held

↓

Robot Moves

Button Released

↓

Robot Stops
```

## State-Based Control

```text
Button Pressed

↓

Movement State Changes

↓

Movement Continues

until another command changes the state
```

This Starter Project uses state-based control.

That design makes command state clearly visible.

The user does not continuously provide motor power through the button.

The user changes the current command state.

---

# Why Store `current_command`?

The program remembers the command that is already active.

```python
current_command = COMMAND_STOP
```

Later, it compares the newly interpreted user command with the current
command.

```python
user_command != current_command
```

This prevents the same command from being sent repeatedly while the user
continues holding a button.

Without this comparison, the main loop could send Forward dozens of times
per second.

The robot might still move, but the communication would contain unnecessary
repetition.

The state comparison creates this behaviour:

```text
New Command Different From Current Command

↓

Send Command
```

```text
Same Command As Current Command

↓

Do Nothing
```

This is a simple form of change detection.

---

# Why Send Only When the State Changes?

The communication channel should carry meaningful changes.

```text
Current State: Forward

New Input Meaning: Forward

↓

No Change

↓

No New Message Required
```

But:

```text
Current State: Forward

New Input Meaning: Stop

↓

State Changed

↓

Send Stop Command
```

This reduces unnecessary I2C traffic and makes the relationship between user
action and command transition clearer.

The important event is not every loop iteration.

The important event is the change in command state.

---

# Why Does the Program Use a Fast Input Loop?

The main loop waits only briefly between checks.

```python
sleep(INPUT_POLL_INTERVAL_MS)
```

The short interval allows the program to repeatedly return to button
observation.

```text
Read Input

↓

Interpret Input

↓

Execute New Command If Needed

↓

Wait Briefly

↓

Read Input Again
```

This makes the system responsive.

The robot can receive another command without waiting for a long prepared
movement sequence to finish.

---

# Why Are There No Long Movement Sleeps?

Starter Project 01 used movement functions containing fixed durations.

```text
Move Forward

↓

Wait Two Seconds

↓

Stop
```

That was appropriate for a prepared demonstration.

However, a long blocking wait creates a problem for user interaction.

While the program is sleeping, it is not checking the buttons.

```text
Long Movement Sleep

↓

No Input Check

↓

Delayed User Response
```

Starter Project 02 therefore changes movement immediately and returns to the
input loop.

```text
Set Movement State

↓

Return to Input Loop

↓

Remain Ready for User
```

This is a meaningful architectural consequence of changing the command
source.

---

# Command Source Can Affect Program Structure

At first, the only expected change may appear to be:

```text
Program

↓

User
```

However, user-generated commands also introduce a new timing requirement.

The system must remain ready for unpredictable input.

In Starter Project 01, the program already knew when the next command would
occur.

In Starter Project 02, it does not.

```text
Prepared Sequence

=

Known Timing
```

```text
User Input

=

Unpredictable Timing
```

The code must therefore keep returning to the input loop.

This is why a change in command source can require a change in control-flow
structure even when the Runtime and hardware remain stable.

---

# What Does `execute_command()` Own?

`execute_command()` translates the named command state into one movement
operation.

```text
Forward Command

↓

move_forward()
```

```text
Backward Command

↓

move_backward()
```

```text
Stop Command

↓

stop_robot()
```

This function creates a boundary between:

```text
Command Selection
```

and:

```text
Command Execution
```

`read_user_command()` decides which command the user requested.

`execute_command()` performs the selected command.

These are related responsibilities, but they are not identical.

---

# Why Separate Reading From Execution?

The project could place all behaviour in one large loop.

For example:

```python
if button_a.is_pressed():
    robot.servo_speed(...)
```

That may be shorter.

However, it combines:

- input detection,
- command meaning,
- hardware execution.

The current structure separates them.

```text
read_user_command()

↓

execute_command()

↓

movement helper
```

This makes each responsibility easier to observe and modify.

It also prepares the architecture for the next project.

The source of the command can change while command execution remains
reusable.

---

# Why Does the Arduino Not Need to Know About the Buttons?

The buttons belong to the micro:bit.

The Arduino Runtime does not need to receive:

```text
Button A was pressed.
```

Instead, it receives a hardware command equivalent to:

```text
Set the wheel servos to these speeds.
```

The micro:bit interprets input meaning before communicating with Arduino.

```text
Button A

↓

micro:bit Interprets Forward

↓

Forward Servo Command

↓

Arduino Executes
```

The Arduino therefore remains independent of the user-interface detail.

It does not need to know whether Forward originated from:

- Button A,
- a keyboard,
- a joystick,
- a radio message,
- or a sensor.

It only needs to understand the approved movement command.

---

# Stable Contract, Replaceable Input

This relationship introduces an important architectural principle.

```text
Different Input Sources

↓

Same Command Interface

↓

Same Hardware Runtime
```

Today:

```text
Button A

↓

Forward Command
```

A future project could use:

```text
Joystick Up

↓

Forward Command
```

Another project could use:

```text
Distance Sensor Clear

↓

Forward Command
```

The input changes.

The downstream command contract can remain stable.

This is why clear interfaces make systems easier to extend.

---

# Why Does the Arduino Runtime Remain Unchanged?

The Arduino Runtime still receives the same kind of servo-control commands
used in Starter Project 01.

It does not care who initiated them.

```text
Starter Project 01

Program Schedule

↓

Servo Command
```

```text
Starter Project 02

User Button

↓

Servo Command
```

From the Arduino Runtime's perspective, the execution responsibility remains:

```text
Receive Command

↓

Control Servo Pins
```

The change occurs before the Runtime boundary.

Therefore the shared Runtime does not need to change.

---

# What Changes?

Compared with Starter Project 01, the following responsibilities change.

## Command Source

```text
Before:

Program Schedule
```

```text
Now:

User Action
```

## Command Timing

```text
Before:

Known in Advance
```

```text
Now:

Determined by the User
```

## Program Behaviour

```text
Before:

Execute Prepared Sequence
```

```text
Now:

Wait, Detect, Interpret, and Respond
```

## Learner Role

```text
Before:

Observer
```

```text
Now:

Command Initiator
```

---

# What Remains the Same?

The following structure remains stable:

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

The same elements remain:

- robot hardware,
- servo pins,
- Arduino,
- micro:bit,
- shared Arduino Runtime,
- communication library,
- I2C path,
- hardware-execution responsibility.

The interaction changes much more than the underlying platform.

---

# Comparison With Starter Project 01

| Architectural Concern | Starter Project 01 | Starter Project 02 |
|---|---|---|
| Command source | Program schedule | User action |
| Command timing | Predefined | Unpredictable |
| Initial robot state | Begins demonstration | Waits stopped |
| Input loop | Not central | Essential |
| Long blocking waits | Acceptable | Harmful to responsiveness |
| User role | Observer | Command initiator |
| Command translation | `microbit_abot.py` | `microbit_abot.py` |
| Communication | I2C | I2C |
| Arduino Runtime | Shared | Shared |
| Servo execution | Arduino | Arduino |

The command source changes.

The downstream architecture remains stable.

The micro:bit control flow adapts to the new source.

---

# Why Is Stop a Command?

Stop is not the absence of software.

It is an intentional state.

```text
Stop Command

↓

Left Speed = 0

Right Speed = 0
```

This distinction matters.

When no button is pressed, the program generates no new command.

When A+B is pressed, the program explicitly generates Stop.

```text
No Input

=

Keep Current State
```

```text
A+B

=

Change Current State to Stop
```

Stop is therefore a meaningful command rather than empty behaviour.

---

# Why Does Stop Not End the Program?

The user may want to move again.

Therefore:

```text
Stop

≠

Finish
```

Instead:

```text
Stop

↓

Return to Waiting

↓

Accept Next Command
```

The system remains interactive.

This is different from Starter Project 01, where the sequence ended after
servo detach.

Starter Project 02 is designed as a continuing interaction loop.

---

# Why Are the Servos Not Detached After Every Stop?

Detaching the servo pins would end the active servo-control configuration.

If every Stop command detached the pins, the program might need to attach
them again before every later movement.

That would add an unnecessary lifecycle operation to normal interaction.

This project therefore distinguishes:

```text
Stop Movement
```

from:

```text
End Hardware Control
```

The Stop command keeps the system ready for the next movement.

---

# Why Does the Display Show Command State?

The micro:bit display gives the learner evidence about the program's current
interpretation.

```text
Button Input

↓

Selected Command

↓

Display State
```

If Button A is pressed and the forward arrow appears, the learner knows the
micro:bit has likely:

- detected the input,
- interpreted it,
- selected Forward.

If the display changes but the robot does not, the likely problem exists
later in the responsibility chain.

```text
Input Detection
        ✓

Command Selection
        ✓

↓

Communication or Execution
        ?
```

The display therefore supports both learning and troubleshooting.

---

# Why Is This an Event-Driven System?

The program repeatedly waits for an external action.

```text
Wait

↓

User Event

↓

Handle Event

↓

Return to Wait
```

The next command is not determined only by a fixed sequence.

It is triggered by an event outside the program's internal schedule.

This is an introductory event-driven relationship.

The project does not require advanced event-system theory.

It provides a physical experience of the basic idea.

---

# Event-Driven Does Not Mean the User Executes Everything

The user causes the event.

The system still performs the processing.

```text
User

↓

Event

↓

Program Logic

↓

Command

↓

Communication

↓

Hardware
```

This is important because many software systems work in the same way.

A user clicks a button.

The user does not directly update a database or control a server process.

The action travels through several responsibility layers.

The Tandem robot makes this relationship visible.

---

# Why Comparison Matters Here

If Starter Project 02 were studied alone, button control might appear to be
only another robotics trick.

Comparison with Starter Project 01 reveals the deeper architectural meaning.

```text
Same Robot

Same Runtime

Same Communication

Same Servos

Different Command Source
```

The learner can now see that interaction can change without replacing the
entire system.

The comparison transforms a button exercise into an architecture lesson.

---

# Preparing for Environment-Generated Commands

The next project will change the command source again.

```text
01

Program Generates Command
```

```text
02

User Generates Command
```

```text
03

Environment Generates Command
```

In the next project, a sensor or environmental condition will create the
input.

The micro:bit will still interpret that input.

The Arduino Runtime will still execute hardware commands.

The stable relationship will remain:

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

Starter Project 02 prepares this comparison by making user input explicit.

---

# The Real Learning Objective

This project includes:

- micro:bit buttons,
- condition checks,
- command states,
- a repeated input loop,
- I2C communication,
- continuous-rotation servos.

These are useful technical elements.

The deeper objective is to understand:

```text
Input Source

↓

Event Interpretation

↓

Command State

↓

Hardware Execution
```

And:

```text
One Responsibility Changes

↓

Most of the Architecture Remains Stable
```

This way of thinking applies far beyond robotics.

---

# Similar Patterns in Other Systems

## Web Application

```text
User Click

↓

UI Event

↓

Application Command

↓

Backend Request

↓

System Action
```

## Mobile Application

```text
Screen Touch

↓

Input Handler

↓

Command

↓

Service

↓

Result
```

## Industrial Control

```text
Operator Switch

↓

Controller Input

↓

Control Command

↓

Actuator
```

## AI Application

```text
User Prompt

↓

Input Interpretation

↓

Model Request

↓

Tool or Service Execution
```

The technologies differ.

The relationship remains recognizable.

---

# Compare Your Understanding

## Before This Project

How did you think a button controlled the robot?

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

Suppose Button A were replaced by a joystick-up event.

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

Now suppose the joystick event generated the same Forward command.

The stable command interface may allow the downstream system to remain
unchanged.

This question prepares the idea of replaceable input sources.

---

# Understanding Check

Before continuing, confirm that you can explain the following in your own
words.

- [ ] The user creates the initiating action.
- [ ] A button event is not yet a movement command.
- [ ] `main.py` interprets button states.
- [ ] A+B is checked first because it is the combined Stop input.
- [ ] The command state is separate from the input source.
- [ ] `current_command` prevents unnecessary repeated commands.
- [ ] No button input means no new command, not automatic Stop.
- [ ] The robot continues in its current state until another command changes it.
- [ ] A short input loop keeps the project responsive.
- [ ] The Arduino does not need to know which button was pressed.
- [ ] The shared Runtime remains unchanged.
- [ ] The command source changed while the downstream architecture remained stable.

You do not need to memorize every implementation detail.

You should be able to explain the relationships.

---

# Continue

Before moving to the next Starter Project, open:

```text
BEFORE_YOU_CONTINUE.md
```

That document helps you compare Starter Projects 01 and 02 and form a
prediction for:

```text
03_environment_generated_commands
```

Reflection remains optional.

It becomes meaningful when you recognize that your understanding of input,
command, and execution has changed.

---

# Engineering Principle

A well-structured system does not require every layer to understand every
source of input.

```text
Input Source

↓

Local Interpretation

↓

Stable Command

↓

Stable Execution
```

This allows one part of a system to evolve without forcing every other part
to change.

Clear responsibilities make change local.

Stable interfaces make reuse possible.

---

# Foundation Principle

Starter Project 01 showed:

```text
Program

↓

Command

↓

Robot
```

Starter Project 02 reveals a new relationship:

```text
User

↓

Event

↓

Command

↓

Robot
```

The user changes when the command occurs.

The micro:bit changes how it waits and responds.

The Arduino Runtime remains stable.

The hardware remains stable.

Learning emerges from comparing that change with that continuity.

That is why this project works.