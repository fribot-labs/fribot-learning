# Stage 2 — Run

> Project Stage: 02  
> Purpose: Execute the prepared project, confirm the expected result, and establish a reliable baseline before making any modifications.

---

# Stage Purpose

The Run stage gives the learner the first successful experience.

Before learning why the code is structured in a certain way,
the learner should first confirm that the original project works.

The learner should experience:

> "The project works as expected."

This becomes the reference point for every future modification.

Without a stable baseline, later changes become difficult to understand.

---

# Goal

Execute the starter project without modifying its behavior.

The objective is **not** to improve the project.

The objective is to observe the original behavior.

Replace the placeholder below with a project-specific goal.

> Execute the starter project and confirm that the expected result appears exactly as described.

---

# Expected Result

Describe the visible behavior that indicates successful execution.

Examples:

- The robot moves forward for three seconds.
- The LED blinks every second.
- The serial monitor displays sensor values.
- The webpage successfully displays stored notes.
- Two microcontrollers exchange a test message.

The learner should know exactly what success looks like.

## Expected Output

> Replace this placeholder with the actual expected result.

---

# Why This Stage Matters

Many beginners immediately begin modifying code before understanding its original behavior.

This often creates confusion because they no longer know whether an unexpected result comes from:

- the original project,
- the modification,
- or an incorrect setup.

The Run stage creates a stable reference point.

Later, every modification can be compared against this original behavior.

---

# Required Work

Complete the following actions in order.

1. Open the starter project.
2. Build or compile the project.
3. Upload or execute the project.
4. Observe the result.
5. Compare the result with the expected behavior.
6. Record any unexpected behavior.
7. Do **not** modify the code yet.

Each step should be completed before continuing.

---

# Build or Execution Instructions

Replace the following section with project-specific instructions.

Examples:

## Arduino

```text
Select the correct board.

Select the correct serial port.

Compile.

Upload.

Observe the robot.
```

---

## Web Application

```text
Install dependencies.

Run the development server.

Open the browser.

Verify the page.
```

---

## Embedded Linux

```text
Build the project.

Flash the image.

Boot the device.

Observe the console.
```

Keep instructions short.

---

# What to Observe

Do not only check whether the project "works."

Observe:

- startup behavior,
- timing,
- movement,
- displayed information,
- console output,
- LEDs,
- sounds,
- sensor values,
- communication.

If possible, write down one thing that surprised you.

---

# Execution Record

Record the original behavior before changing anything.

Example:

```text
Observed Result

Robot moved forward.

Stopped after three seconds.

LED remained off.

No unexpected errors.
```

The learner should preserve this observation because it becomes the comparison point for Stage 3.

---

# Reference

Provide only the references needed to execute the project.

Examples:

- upload guide,
- build guide,
- IDE usage,
- hardware operation,
- troubleshooting.

Do not introduce architecture discussions yet.

---

# Common Problems

Add project-specific issues.

Examples:

## Build Failed

Check:

- compiler version,
- missing library,
- syntax errors,
- project path.

---

## Upload Failed

Check:

- board selection,
- USB connection,
- serial port,
- device power.

---

## Wrong Output

Compare:

- expected output,
- observed output,
- hardware connections,
- software version.

Avoid modifying code before confirming the original project.

---

# What Not to Do Yet

During this stage, do **not**:

- redesign the project,
- optimize the implementation,
- rename variables,
- move functions,
- add classes,
- separate responsibilities,
- improve performance,
- add new features.

Those tasks belong to later stages.

The learner should first understand the original behavior.

---

# Completion Check

Before continuing, verify:

- [ ] The project builds successfully.
- [ ] The project runs successfully.
- [ ] The expected result is visible.
- [ ] The original behavior has been observed.
- [ ] Unexpected behavior has been recorded.
- [ ] No code has been modified.
- [ ] The learner understands the original baseline.

---

# Think About

> Which part of the project appears to produce the visible result?

Do not answer in detail.

Simply identify the part that seems most responsible.

This question prepares the learner for the next stage,
where controlled modifications begin.

---

# Preparing for Stage 3

Before moving on, remember:

The current project is your reference version.

Every change made in the next stage should be compared against this original behavior.

Without a reliable baseline,
it becomes difficult to understand why later changes produce different results.

---

# Next Stage

Continue to:

[Stage 3 — Modify](./03_MODIFY.md)

The next stage introduces one controlled modification and compares it with the original behavior.