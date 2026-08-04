# Expected Output

> Project: Tandem Dual MCU  
> Starter Project: 01 — Program-Generated Commands  
> Difficulty: Beginner  
> Estimated Observation Time: 5–10 Minutes

---

# Purpose

This document does **not** explain why the robot works.

It defines what you should be able to observe when the Starter Project runs
correctly.

Use it to compare:

- what you predicted,
- what was expected,
- what actually happened,
- what changed,
- and what remained the same.

```text
Expectation

↓

Reality

↓

Comparison

↓

Understanding
```

The comparison matters more than whether your first prediction was correct.

---

# Before Running

Before executing the project, pause for a moment.

Do not open `microbit/main.py` yet.

Predict what you think the robot will do.

---

## Movement Prediction

```text
How do you think the robot will move?

____________________________________

____________________________________

____________________________________
```

---

## Responsibility Prediction

Without examining the implementation, predict:

```text
Which controller creates the movement command?

____________________________________
```

```text
Which controller directly controls the wheel servos?

____________________________________
```

```text
Where do you think each movement begins?

____________________________________
```

```text
Do both controllers perform the same responsibility?

____________________________________
```

Do not worry about being incorrect.

Your prediction exists so that reality has something meaningful to meet.

---

# Expected Movement Sequence

After the shared Arduino Runtime is prepared and `microbit/main.py` is
downloaded, the robot should perform the following sequence:

```text
Power On

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
```

The pauses between movements are intentional.

Each action should be distinguishable from the action before and after it.

---

# Expected micro:bit Display

During execution, the micro:bit display should indicate the current stage of
the sequence.

The expected display progression is approximately:

```text
Start

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

Depending on how the symbols are rendered by the current micro:bit program,
you may see icons similar to:

```text
🙂

↓

↑

↓

■

↓

←

↓

■

↓

→

↓

■

↓

↓

↓

■

↓

✓
```

The important observation is not the artistic appearance of each icon.

The important observation is that the display changes with the movement
sequence.

---

# Expected Robot Behaviour

## 1. Forward

The robot should move forward for approximately two seconds.

A small left or right drift is acceptable.

The robot does not need to travel in a perfectly straight line.

---

## 2. Stop

Both wheels should stop before the next movement begins.

The pause should be observable.

The robot should not move continuously through every command without a clear
transition.

---

## 3. Pivot Left

The robot should rotate or pivot toward the left.

The exact angle may vary because of:

- servo differences,
- wheel alignment,
- surface friction,
- battery condition.

The direction of rotation matters more than the exact angle.

---

## 4. Stop

The robot should stop again before beginning the next pivot.

---

## 5. Pivot Right

The robot should rotate or pivot toward the right.

The right pivot may not perfectly mirror the left pivot.

Small asymmetry is normal in physical systems.

---

## 6. Stop

Both wheels should stop before the backward movement begins.

---

## 7. Backward

The robot should move backward.

The backward distance may differ slightly from the forward distance.

---

## 8. Final Stop

The robot should stop after the backward movement.

---

## 9. Servo Detach

At the end of the sequence, the servo-control signals should be detached.

The program should no longer issue active wheel movement commands.

Depending on the servo hardware, mechanical condition, and power system,
detaching the signals may not create an obvious visible movement.

The important point is that the prepared command sequence has ended.

---

# Observable Command Pattern

The robot changes behaviour several times.

```text
Forward

↓

Left

↓

Right

↓

Backward
```

However, no button is pressed.

No sensor determines the next movement.

The sequence continues because the program already contains the movement
commands.

Do not study the source code yet.

Simply record this observation.

---

# What Changes?

During execution, observe what changes.

Possible answers include:

- the current movement command,
- the micro:bit display,
- the wheel direction,
- the robot's physical movement,
- the stage of the prepared sequence.

```text
Command Changes

↓

Robot Behaviour Changes
```

---

# What Remains the Same?

While the behaviour changes, observe what remains stable.

Possible observations include:

- the same robot hardware,
- the same micro:bit,
- the same Arduino,
- the same communication connection,
- the same command-delivery path,
- the same division between command processing and motor execution.

The stable path is:

```text
micro:bit

↓

Command

↓

Arduino

↓

Robot Motion
```

Do not attempt to explain the complete architecture yet.

Simply notice that different movements pass through the same system.

---

# Normal Variations

The following observations are normally acceptable:

- slight left or right drift,
- different turning angles,
- slightly different travel distances,
- modest differences in forward and backward speed,
- different response caused by battery level,
- differences between the left and right servo motors,
- small delays during startup,
- minor mechanical vibration.

These variations do not automatically indicate a software problem.

A physical robot rarely behaves with perfect mathematical symmetry.

---

# Unexpected Behaviour

The following observations usually require investigation:

- the robot never starts,
- only one wheel moves,
- one wheel moves in the wrong direction,
- the robot spins continuously,
- the robot never stops between commands,
- the movement order differs from the expected sequence,
- the micro:bit resets repeatedly,
- no response occurs after downloading the program,
- the robot stops before completing the sequence,
- the Arduino appears unresponsive,
- the movement changes only after touching a cable or connector.

If one of these occurs, continue with:

```text
TROUBLESHOOTING.md
```

Do not immediately rewrite the program.

Observe first.

---

# Compare Your Prediction

After the complete run, compare your original expectation with reality.

---

## What Actually Happened?

```text
____________________________________

____________________________________

____________________________________
```

---

## Which Prediction Was Correct?

```text
____________________________________

____________________________________
```

---

## Which Prediction Was Incorrect or Incomplete?

```text
____________________________________

____________________________________
```

---

## What Surprised You Most?

```text
____________________________________

____________________________________
```

---

## What Changed During the Sequence?

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

# First Architectural Observation

The robot appears to move as one machine.

However, two processors participate in the system.

Observe carefully.

```text
Did one processor perform every responsibility?

Or did each processor contribute a different responsibility?
```

Also consider:

```text
Did the movement command originate from a person?

Did it originate from the environment?

Or was it already generated inside the program?
```

Do not force an answer yet.

These questions will become clearer after reading:

```text
WHY_IT_WORKS.md
```

---

# Baseline for Later Projects

This Starter Project establishes the first command-source baseline.

```text
01

Program-Generated Commands
```

Later projects will change the source of the command.

```text
Program

↓

User

↓

Environment
```

The purpose of this project is to make the first form observable.

Later comparisons will become meaningful because this baseline already
exists.

---

# Success Criteria

The project is operating as expected when:

- [ ] The micro:bit program starts without an error.
- [ ] The Arduino Runtime is active.
- [ ] The servos receive movement commands.
- [ ] The robot performs the prepared movement sequence.
- [ ] Each movement is separated by an observable stop.
- [ ] The micro:bit display changes with the sequence.
- [ ] The movement changes without button input.
- [ ] The movement changes without sensor input.
- [ ] The robot reaches the final stop.
- [ ] The learner can identify at least one change.
- [ ] The learner can identify at least one element that remained stable.

---

# Learning Check

Before continuing, confirm:

- [ ] I made a prediction before running the robot.
- [ ] I observed the complete movement sequence.
- [ ] I compared my prediction with the expected behaviour.
- [ ] I compared the expected behaviour with the actual behaviour.
- [ ] I identified at least one difference.
- [ ] I identified what changed.
- [ ] I identified what remained the same.
- [ ] I understand that small mechanical variations are normal.
- [ ] I know when to use `TROUBLESHOOTING.md`.
- [ ] I have not yet replaced observation with a complete theoretical explanation.

---

# Continue

If the project behaves unexpectedly, open:

```text
TROUBLESHOOTING.md
```

If the observable result is clear, continue to:

```text
WHY_IT_WORKS.md
```

After understanding the design, complete:

```text
BEFORE_YOU_CONTINUE.md
```

---

# Foundation Principle

This document does not exist to provide the final explanation.

It exists to create a meaningful comparison.

```text
What I Expected

↓

What the System Did

↓

What Changed

↓

What Remained Stable

↓

What I Now Need to Understand
```

Learning begins when expectation meets reality.

Engineering thinking begins when the learner observes the difference
carefully enough to ask why.

Reflection may emerge later, when the learner recognizes that their
understanding has changed.