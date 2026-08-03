# Stage 3 — Modify

> Project Stage: 03  
> Purpose: Make one controlled modification, observe the resulting change, and begin connecting code changes to system behavior.

---

# Stage Purpose

The Modify stage is where learning truly begins.

Up to this point, the learner has only confirmed that the original project
works.

Now the learner intentionally changes one part of the project and observes
how the system responds.

This stage introduces one of the most important principles of software
engineering:

> **A small, controlled change produces the clearest understanding.**

The goal is **not** to improve the project as much as possible.

The goal is to understand the relationship between:

```text
Code Change

↓

Behavior Change

↓

Structural Meaning
```

---

# Goal

Modify one carefully selected part of the project and compare the new
behavior with the original version.

The learner should understand:

- what changed,
- why it changed,
- which part of the system produced the change.

Replace the placeholder below with the project-specific goal.

> Modify one part of the project and explain how that modification changed the system's behavior.

---

# Expected Learning Outcome

By the end of this stage, the learner should be able to explain:

- Which file was changed.
- Which code was modified.
- What behavior changed.
- What behavior remained unchanged.
- Why only one change was made.

The learner does **not** need to understand the entire project yet.

---

# Why This Stage Matters

Many beginners make several modifications at once.

For example:

- changing multiple variables,
- adding new functions,
- reorganizing files,
- changing hardware connections,
- adding libraries.

When many changes happen simultaneously,
it becomes impossible to determine which change produced which result.

This stage teaches disciplined experimentation.

One meaningful change.

One observable result.

---

# Required Work

Complete the following tasks.

1. Identify the modification target.
2. Make one controlled change.
3. Build or upload the project again.
4. Observe the new behavior.
5. Compare it with the original behavior.
6. Record what changed.
7. Restore the original version if necessary.
8. Repeat once if another small experiment is required.

Avoid making multiple unrelated modifications.

---

# Choosing a Modification

A good modification changes only one concept.

Examples include:

- changing one constant,
- changing one timing value,
- changing one function parameter,
- changing one method,
- changing one class member,
- replacing one algorithm,
- changing one communication interval.

Avoid modifications that require changing many files.

---

# Modification Record

Record the modification before running the project.

## Original

Describe the original behavior.

Example:

```text
Robot moved forward for three seconds.
```

---

## Modification

Describe exactly what was changed.

Example:

```text
Changed the movement duration from

3000 ms

to

1000 ms.
```

---

## New Result

Describe the observed behavior.

Example:

```text
Robot moved forward for one second.
```

---

## Comparison

Summarize the difference.

Example:

```text
Only the movement duration changed.

The movement direction remained the same.

The stopping behavior remained unchanged.
```

---

# Controlled Experiment Rule

Every modification should satisfy the following rule.

```text
One Change

↓

One Observation

↓

One Conclusion
```

If more than one thing changes,
repeat the experiment with a smaller modification.

---

# Observe Carefully

While running the modified project,
pay attention to:

- timing,
- movement,
- communication,
- sensor values,
- LEDs,
- console messages,
- unexpected side effects,
- unchanged behavior.

Sometimes the most important observation is what **did not** change.

---

# Reference

Provide only the references required for the modification.

Examples:

- parameter explanation,
- function description,
- API reference,
- hardware notes,
- one PDF section,
- one code example.

Avoid introducing advanced architecture discussions.

---

# Common Problems

Examples:

## Nothing Changed

Check:

- Was the modified file saved?
- Was the correct project built?
- Was the new firmware uploaded?
- Was the browser refreshed?
- Was the correct executable started?

---

## Too Many Things Changed

The modification was probably too large.

Undo unnecessary changes.

Repeat using one smaller modification.

---

## New Error Appeared

Determine whether the error came from:

- the modification,
- the environment,
- the original project.

Do not immediately continue changing more code.

---

# What Not to Do Yet

During this stage, do **not**:

- redesign the project,
- split the architecture,
- optimize performance,
- introduce advanced patterns,
- rewrite multiple files,
- replace the entire implementation,
- create new project structures.

This stage focuses on understanding change,
not redesign.

---

# Completion Check

Before continuing:

- [ ] One controlled modification was completed.
- [ ] The project still runs.
- [ ] The new behavior was observed.
- [ ] The difference from the original version is understood.
- [ ] Only one primary change was introduced.
- [ ] The modification was recorded.
- [ ] The learner can explain why the behavior changed.

---

# Think About

> Which part of the code appears to be responsible for the behavior that changed?

Do not explain the entire architecture.

Simply identify the most likely responsibility.

This prepares the learner for the next stage.

---

# Preparing for Stage 4

Until now,
the learner has observed:

```text
Original Behavior

↓

One Code Change

↓

Changed Behavior
```

The next stage asks a deeper question.

Instead of asking:

> "What changed?"

it asks:

> **"Why was the code originally organized this way?"**

The learner begins connecting implementation with structure.

---

# Next Stage

Continue to:

[Stage 4 — Understand](./04_UNDERSTAND.md)

The next stage explains the structural meaning behind the modification and begins connecting implementation with software design.