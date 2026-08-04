# EXPECTED_OUTPUT

> Project: Tandem Dual MCU  
> Starter Project: 01 Basic Tandem Drive

---

# Purpose

This document does **not** provide the correct answer.

Instead,

it provides the expected observations that help you compare:

- what you predicted,
- what actually happened,
- what you understand now.

Learning begins when those three become different.

---

# Before Running

Before executing the project,

pause for a moment.

Without running the robot,

predict what you think will happen.

---

## Prediction

Write your own expectations.

```text
How do you think the robot will move?

____________________________________

____________________________________

____________________________________
```

---

## Responsibility Prediction

Without looking at the implementation,

predict:

```text
Which controller creates the command?

_________________________

Which controller actually drives the motors?

_________________________

Where does the movement begin?

_________________________
```

Do not worry if your prediction is incorrect.

The comparison is more important than being correct.

---

# Expected Movement Sequence

The prepared Starter Project should perform the following sequence.

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

The pauses are intentional.

Each movement should be clearly distinguishable.

---

# Expected micro:bit Display

During execution,

the micro:bit LEDs should display:

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

The display indicates which movement is currently being executed.

---

# Expected Robot Behaviour

## Forward

The robot should move forward for approximately two seconds.

Small deviations from a perfectly straight path are acceptable.

---

## Pivot Left

The robot should rotate left.

The movement is expected to be slower than forward movement.

---

## Pivot Right

The robot should rotate right.

Again,

small differences between left and right rotation are normal.

---

## Backward

The robot should move backward.

Its backward path does not need to perfectly match the forward path.

---

## Stop

After each movement,

both wheels should stop completely before the next movement begins.

---

## Servo Detach

At the end of the demonstration,

servo control signals should be detached.

The robot should no longer receive active wheel commands.

---

# Normal Variations

The following observations are considered normal.

- slight left or right drift
- different turning angles
- slightly different movement distance
- different movement speed caused by battery level
- minor differences between left and right servo motors

These differences do **not** necessarily indicate a software problem.

---

# Unexpected Behaviour

The following observations usually require investigation.

- only one wheel moves
- robot spins continuously
- robot never stops
- robot never starts
- repeated resets
- no response after downloading the program
- movement order differs from the expected sequence

If any of these occur,

continue with:

```text
TROUBLESHOOTING.md
```

---

# Compare Your Prediction

Now compare your original prediction with reality.

---

## What actually happened?

```text
____________________________________

____________________________________

____________________________________
```

---

## Which prediction was correct?

```text
____________________________________

____________________________________
```

---

## Which prediction was incorrect?

```text
____________________________________

____________________________________
```

---

## What surprised you most?

```text
____________________________________

____________________________________
```

---

# First Architectural Observation

The robot appears to move as one machine.

However,

observe carefully.

Did one processor perform every task?

Or did different processors perform different responsibilities?

Do not answer immediately.

Simply notice the question.

The answer will become clearer in later stages.

---

# Learning Check

Confirm the following.

- [ ] I predicted the robot's behaviour before running it.
- [ ] I observed the complete movement sequence.
- [ ] I compared my prediction with the actual result.
- [ ] I identified at least one difference.
- [ ] I recognized that small mechanical differences are normal.
- [ ] I know when to continue to TROUBLESHOOTING.md.

---

# Foundation Principle

This document is not here to tell you the answer.

It is here to create the first comparison between:

```text
Expectation

↓

Reality

↓

New Understanding
```

That comparison is the beginning of engineering thinking.

It is also the first step toward meaningful Reflection.