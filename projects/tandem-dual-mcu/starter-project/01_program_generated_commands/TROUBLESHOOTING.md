# Troubleshooting

> Project: Tandem Dual MCU  
> Starter Project: 01 — Program-Generated Commands  
> Difficulty: Beginner  
> Purpose: Observe, isolate, test, and compare before changing the system.

---

# Purpose

This document is **not** a list of immediate answers.

It is a guide for investigating unexpected behaviour systematically.

The objective is not only to make the robot move.

The deeper objective is to understand:

> **How should an engineer think when reality differs from expectation?**

Troubleshooting follows the same learning structure as the project.

```text
Expectation

↓

Unexpected Reality

↓

Observation

↓

Hypothesis

↓

Controlled Test

↓

Comparison

↓

Understanding
```

A problem becomes educational when you investigate it carefully enough to
discover where it belongs.

---

# The First Rule

Do **not** immediately rewrite the code.

Do **not** change several settings at once.

Do **not** assume that every unexpected result is a software bug.

First determine which system layer may contain the problem.

```text
Safety

↓

Power

↓

Physical Hardware

↓

Arduino Runtime

↓

micro:bit Program

↓

I2C Communication

↓

Servo Execution

↓

Robot Behaviour
```

Investigate from the outside inward.

A physical connection problem cannot be repaired by changing software.

A missing Runtime cannot be repaired by adjusting motor speed.

A wrong expectation cannot be repaired by changing the robot.

---

# Before Troubleshooting

Prepare a safe test environment.

- [ ] Lift the wheels from the table when movement may be unpredictable.
- [ ] Make sure the robot cannot fall or drive away.
- [ ] Confirm that the battery is connected securely.
- [ ] Confirm that USB cables are connected correctly.
- [ ] Identify the power switch before beginning.
- [ ] Keep fingers, cables, and loose objects away from the wheels.
- [ ] Be ready to disconnect power if the robot moves continuously.

Only continue after the system is safe to observe.

---

# Troubleshooting Flow

Use the same process for every unexpected result.

```text
1. Describe the Symptom

↓

2. Identify the Last Confirmed Working Layer

↓

3. Form One Hypothesis

↓

4. Perform One Small Test

↓

5. Make One Minimal Correction

↓

6. Run Again

↓

7. Compare the Result
```

Do not skip directly from symptom to code modification.

---

# Step 1 — Describe Only What You Observed

Write what happened without explaining the cause.

Good observations include:

```text
The micro:bit displayed the forward arrow,
but neither wheel moved.
```

```text
The left wheel moved,
but the right wheel remained stopped.
```

```text
The robot never reached the right-pivot stage.
```

```text
The startup icon appeared repeatedly.
```

Avoid vague statements such as:

```text
The robot is broken.
```

or:

```text
The code does not work.
```

A useful observation should identify:

- what was visible,
- when it happened,
- what happened before it,
- what happened after it,
- whether it happened every time.

---

## My Observation

```text
____________________________________

____________________________________

____________________________________
```

---

# Step 2 — Compare With the Expected Sequence

The expected program sequence is:

```text
Start

↓

Servo Attach

↓

Forward

↓

Stop

↓

Pivot Left

↓

Stop

↓

Pivot Right

↓

Stop

↓

Backward

↓

Stop

↓

Servo Detach

↓

Complete
```

The micro:bit display provides an important diagnostic clue.

Approximate display sequence:

```text
Happy

↓

Stop

↓

Forward

↓

Stop

↓

Left

↓

Stop

↓

Right

↓

Stop

↓

Backward

↓

Stop

↓

Complete
```

Ask:

```text
Which was the last correct display?

Which was the last correct robot movement?

Did the display continue even when the robot stopped responding?
```

The answers help separate:

- program execution,
- communication,
- and motor execution.

---

# Step 3 — Form One Hypothesis

Choose only one possible cause.

Examples:

```text
The battery may not be supplying servo power.
```

```text
The Arduino Runtime may not have been uploaded.
```

```text
The right servo connector may be loose.
```

```text
The micro:bit program may not be reaching the next command.
```

```text
The communication connection may be incorrect.
```

Do not list every possible cause at once.

A hypothesis should be specific enough to test.

---

## My First Hypothesis

```text
____________________________________

____________________________________
```

---

# Step 4 — Investigate by Layer

Always begin with the simplest external layer that could explain the symptom.

---

# Layer 1 — Safety and Mechanical Freedom

Before testing software, confirm that the wheels can move safely.

Check:

- [ ] The wheels are not blocked.
- [ ] No cable is touching a wheel.
- [ ] The robot chassis is not pressing against the wheels.
- [ ] The servos are mounted securely.
- [ ] The wheels can rotate without excessive friction.
- [ ] The test surface is suitable.

A mechanically blocked wheel may appear to be a software or power problem.

---

# Layer 2 — Power

Check:

- [ ] The battery is connected.
- [ ] The power switch is on.
- [ ] The battery has sufficient charge.
- [ ] The Arduino is powered.
- [ ] The micro:bit is powered.
- [ ] The servo power path is available.
- [ ] The robot does not reset when both wheels begin moving.

Possible power symptoms include:

- no movement,
- weak movement,
- repeated resets,
- movement stopping under load,
- one servo moving while the other does not,
- inconsistent behaviour between runs.

If the micro:bit restarts when the servos move, investigate power before
changing the program.

---

# Layer 3 — Servo and Physical Connections

The current hardware configuration is:

```text
Left wheel servo  → Arduino digital pin 13

Right wheel servo → Arduino digital pin 12
```

Check:

- [ ] The left servo is connected to pin 13.
- [ ] The right servo is connected to pin 12.
- [ ] Each connector is inserted in the correct orientation.
- [ ] Ground, power, and signal are not reversed.
- [ ] No connector is loose.
- [ ] Both servos receive appropriate power.
- [ ] The left and right wheels are mounted correctly.

A loose or reversed servo connection cannot be fixed through
`microbit/main.py`.

---

# Layer 4 — Arduino Runtime

The Arduino must already contain the shared MicroAbot Runtime.

Check:

- [ ] The correct Arduino board was selected.
- [ ] The correct COM port was selected.
- [ ] The shared Arduino Runtime uploaded successfully.
- [ ] The MicroAbot library is installed.
- [ ] No upload error remains.
- [ ] The Arduino is running before the micro:bit begins sending commands.

The Arduino Runtime is responsible for receiving the command and executing
the servo operation.

If the Runtime is missing, the micro:bit may continue displaying movement
icons while the robot does not move.

---

# Layer 5 — micro:bit Project Files

The micro:bit should contain:

```text
main.py

microbit_abot.py
```

Check:

- [ ] `main.py` was saved to the correct micro:bit.
- [ ] `microbit_abot.py` is present.
- [ ] The program begins with the expected startup display.
- [ ] No Python error scrolls across the LED display.
- [ ] The logo-touch restart behaviour works after completion.

If the startup image never appears, investigate the micro:bit program before
investigating robot movement.

---

# Layer 6 — Program Sequence

The program generates every command internally.

No button or sensor chooses the movement.

The expected function order is:

```text
move_forward()

pivot_left()

pivot_right()

move_backward()
```

Check:

- [ ] The forward stage appears.
- [ ] The stop stage appears.
- [ ] The left stage appears.
- [ ] The right stage appears.
- [ ] The backward stage appears.
- [ ] The completion image appears.

If the display sequence stops at one stage, the program may not be completing
that command or the communication call may be blocked.

---

# Layer 7 — I2C Communication

The command path is:

```text
micro:bit main.py

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino MicroAbot Runtime
```

Ask:

```text
Did the micro:bit reach the command?

Did the command leave the micro:bit?

Did the Arduino receive it?

Did the Arduino execute it?
```

Check:

- [ ] The micro:bit and Arduino are connected correctly.
- [ ] The shared communication wiring matches the installation guide.
- [ ] The expected MicroAbot Runtime is active.
- [ ] The correct library version is being used.
- [ ] The robot object is configured with pins 13 and 12.
- [ ] No cable becomes disconnected during movement.

Do not assume communication succeeded merely because the program downloaded
successfully.

Downloading to the micro:bit confirms only one part of the system.

---

# Layer 8 — Servo Execution

The micro:bit sends two speed values.

The Arduino converts those values into continuous-rotation servo commands.

Observe each wheel independently.

Check:

- [ ] The left wheel responds.
- [ ] The right wheel responds.
- [ ] Each wheel stops when commanded.
- [ ] Each wheel reverses when expected.
- [ ] The wheel directions match the installed robot geometry.

Continuous-rotation servos may differ slightly.

One servo may begin moving at a slightly different value from another.

Small physical asymmetry does not automatically indicate a program error.

---

# Layer 9 — Robot Behaviour

Only after confirming the previous layers should you evaluate the complete
robot movement.

Observe:

- direction,
- speed,
- duration,
- stopping,
- pivot direction,
- transition between commands,
- completion state.

The robot does not need to move with perfect symmetry.

The expected comparison is structural, not mathematically perfect.

---

# Common Problems

---

# Problem 1 — Nothing Happens After Download

## Observed Symptom

- no startup image,
- no movement,
- no visible response.

## What to Check

1. Confirm that the correct micro:bit received the program.
2. Confirm that `main.py` exists.
3. Confirm that `microbit_abot.py` exists.
4. Reset or reconnect the micro:bit.
5. Observe whether an error message scrolls across the display.

## Possible Cause

- program not downloaded,
- missing library,
- Python import error,
- wrong micro:bit,
- missing micro:bit power.

## Minimal Correction

Correct only the missing file or download problem.

Then run again.

---

# Problem 2 — The Display Changes, but the Robot Does Not Move

## Observed Symptom

The micro:bit shows movement icons, but both wheels remain stopped.

## What This Suggests

The micro:bit program may be running.

The problem may be located after program execution.

```text
micro:bit Program
        ✓

↓

Communication
        ?

↓

Arduino Runtime
        ?

↓

Servo Power
        ?
```

## What to Check

1. Arduino power
2. Arduino Runtime upload
3. communication wiring
4. MicroAbot library
5. servo power
6. servo connectors
7. pins 13 and 12

## Minimal Correction

Correct one confirmed issue.

Do not rewrite the movement functions first.

---

# Problem 3 — The Robot Does Not Move at All

## Possible Causes

- battery disconnected,
- power switch off,
- Arduino Runtime missing,
- servo power unavailable,
- communication not established,
- both servo connectors incorrect.

## Check Order

```text
Safety

↓

Power

↓

Arduino Runtime

↓

micro:bit Files

↓

Communication

↓

Servo Connections
```

Record the last confirmed working layer.

---

# Problem 4 — Only One Wheel Moves

## Possible Causes

- loose servo connector,
- incorrect servo pin,
- reversed connector orientation,
- damaged servo,
- missing servo power,
- one command value not reaching the Runtime.

## What to Check

- left servo on pin 13,
- right servo on pin 12,
- cable orientation,
- physical connection,
- independent wheel response,
- whether the inactive wheel works when connections are swapped for testing.

Do not permanently swap pins without recording what was tested.

Change one connection or one variable at a time.

---

# Problem 5 — The Robot Moves Backward During “Forward”

## Possible Cause

Continuous-rotation servos may be mounted in an orientation different from
the expected robot.

The current forward command assumes:

```text
Left wheel  → positive speed

Right wheel → negative speed
```

## What to Observe

- Do both wheels rotate?
- Does the robot move consistently in one direction?
- Is the issue a complete direction reversal or only one incorrect wheel?

## Minimal Correction

Only after confirming the hardware orientation, adjust the relevant speed
sign or document the installation difference.

Do not reverse both values before identifying which wheel differs.

---

# Problem 6 — The Robot Spins Instead of Moving Straight

## Possible Causes

- one wheel direction is reversed,
- one servo is stopped,
- servo connectors are assigned incorrectly,
- left and right speed signs do not match the physical installation,
- one servo has significantly different behaviour.

## Test

Lift the wheels safely.

Observe each wheel during the Forward stage.

Record:

```text
Left wheel direction:  ____________________

Right wheel direction: ____________________
```

Correct only the wheel that does not match the intended movement.

---

# Problem 7 — Left and Right Pivots Are Reversed

## Possible Causes

- left and right servos are connected to opposite pins,
- the robot is being viewed from the opposite orientation,
- servo installation direction differs,
- movement labels and physical geometry do not match.

## What to Check

- confirm which wheel is physically left,
- confirm pin 13 controls the left wheel,
- confirm pin 12 controls the right wheel,
- observe which wheel stops during each pivot.

The pivot functions are designed around one stopped wheel.

```text
Pivot Left
= left wheel stopped
+ right wheel moving
```

```text
Pivot Right
= left wheel moving
+ right wheel stopped
```

Compare the code assumption with the actual robot assembly.

---

# Problem 8 — The Robot Never Stops Between Commands

## What to Check

- whether the Stop display appears,
- whether `stop_robot()` is called,
- whether both speed values become zero,
- whether the servo behaves correctly at zero speed,
- whether the stop duration is long enough to observe,
- whether the Runtime received the stop command.

## Important Distinction

A continuous-rotation servo may drift slightly even when commanded to stop.

Distinguish between:

```text
No Stop Command
```

and:

```text
Servo Neutral Drift
```

They are not the same problem.

The current project does not attempt advanced servo calibration.

---

# Problem 9 — The Robot Stops Halfway Through the Sequence

## What to Observe

Identify the last display image and last completed movement.

```text
Last correct display:  ____________________

Last correct movement: ____________________
```

## Possible Causes

- communication interruption,
- loose cable,
- power drop,
- program error,
- repeated reset,
- servo load causing instability.

## Test

Run again without changing the program.

If the failure occurs at the same stage, investigate that stage.

If the failure occurs randomly, investigate power and physical connections.

---

# Problem 10 — The Program Restarts Repeatedly

## Observable Clue

The startup image or initial stop state appears repeatedly.

## Possible Causes

- unstable power,
- micro:bit reset,
- cable problem,
- servo current affecting the power system,
- repeated logo contact,
- program exception followed by reset.

## What to Check

- battery condition,
- USB connection,
- power separation,
- loose cables,
- whether the micro:bit logo is being touched,
- whether the restart occurs when the servos begin moving.

Repeated startup behaviour is evidence.

Record when it happens.

---

# Problem 11 — The Movement Order Is Incorrect

## Expected Order

```text
Forward

↓

Left

↓

Right

↓

Backward
```

## What to Check

- micro:bit display order,
- function-call order in `main.py`,
- whether one physical movement was misidentified,
- whether servo direction made Forward appear as Backward,
- whether left and right pivots were interpreted correctly.

Do not change the function order until you confirm whether the code sequence
or the physical interpretation is incorrect.

---

# Problem 12 — The Final Detach Is Not Visible

At the end of the sequence, the program stops both wheels and detaches the
servo-control pins.

The detach operation may not create an obvious physical movement.

This can be normal.

The observable completion indicators are:

- final stop,
- completion image,
- no further prepared movement commands,
- logo-touch restart remains available.

Do not assume detach failed only because nothing visibly moved.

---

# Problem 13 — Touching the Logo Does Not Restart

## What to Check

- whether the program reached the completion loop,
- whether `Image.YES` is displayed,
- whether the micro:bit model supports `pin_logo`,
- whether the logo is being touched correctly,
- whether a runtime error occurred before completion.

If the hardware does not support the logo-touch interface, use the physical
reset button instead.

Do not change the movement architecture to solve an optional restart-control
difference.

---

# Minimal Correction Rule

After identifying one likely cause:

1. Change one thing.
2. Record what changed.
3. Run the complete project again.
4. Observe the same symptom.
5. Compare the new result with the previous result.

```text
One Hypothesis

↓

One Test

↓

One Change

↓

One New Observation
```

This preserves cause and effect.

---

# Troubleshooting Record

## Observed Symptom

```text
____________________________________

____________________________________
```

---

## Last Confirmed Working Layer

```text
____________________________________
```

---

## First Hypothesis

```text
____________________________________
```

---

## Test Performed

```text
____________________________________
```

---

## One Change Made

```text
____________________________________
```

---

## Result After Running Again

```text
____________________________________

____________________________________
```

---

## Actual Cause

```text
____________________________________
```

---

## What Surprised Me?

```text
____________________________________
```

---

## What Will I Check First Next Time?

```text
____________________________________
```

---

# Compare Your Hypothesis With Reality

After resolving the problem, compare:

```text
What I Thought Was Wrong

↓

What I Tested

↓

What Was Actually Wrong

↓

What I Understand Now
```

A wrong first hypothesis is not a failure.

It becomes useful when you compare it with evidence.

---

# What Changed?

Record what you changed during troubleshooting.

Examples:

- restored power,
- reconnected one cable,
- uploaded the Runtime,
- copied a missing library,
- corrected one servo connection,
- changed one speed sign.

```text
____________________________________

____________________________________
```

---

# What Remained the Same?

Also identify what did not need to change.

Examples:

- the Tandem architecture,
- the command sequence,
- the micro:bit program,
- the Arduino Runtime,
- the hardware platform,
- the communication responsibility.

```text
____________________________________

____________________________________
```

Recognizing unnecessary changes is part of engineering judgment.

---

# Engineering Thinking

Engineers rarely solve difficult problems through repeated guessing.

They reduce uncertainty.

```text
Observe

↓

Locate the Layer

↓

Form a Hypothesis

↓

Test One Cause

↓

Compare

↓

Understand
```

Troubleshooting is not separate from learning.

It is one of the clearest places where expectation meets reality.

---

# Before You Continue

Ask yourself:

```text
Did I only make the robot work?

Or did I understand why it failed?
```

Also ask:

```text
Was the system incorrect?

Was my expectation incomplete?

Or were both involved?
```

These are different outcomes.

Continue to:

```text
WHY_IT_WORKS.md
```

after the observable behaviour and system condition are clear.

Later, use:

```text
BEFORE_YOU_CONTINUE.md
```

to recognize whether your understanding changed.

---

# Completion Check

- [ ] I made the robot safe before testing.
- [ ] I described the symptom before explaining it.
- [ ] I compared the symptom with the expected sequence.
- [ ] I identified the last confirmed working layer.
- [ ] I formed one testable hypothesis.
- [ ] I changed only one thing at a time.
- [ ] I ran the complete project again.
- [ ] I compared the new result with the previous result.
- [ ] I identified the actual cause where possible.
- [ ] I recorded what changed.
- [ ] I recorded what remained the same.
- [ ] I understand that debugging is a process of reducing uncertainty.

---

# Foundation Principle

Troubleshooting is not merely about fixing a robot.

It is an opportunity to make reasoning visible.

```text
Expectation

↓

Unexpected Reality

↓

Observation

↓

Hypothesis

↓

Controlled Test

↓

Comparison

↓

Understanding
```

The problem is not automatically the lesson.

The lesson begins when the learner compares what was expected with what the
system revealed.

Reflection may emerge later, when the learner recognizes that their way of
investigating the system has changed.

The robot is the medium.

Systematic reasoning is the deeper project.