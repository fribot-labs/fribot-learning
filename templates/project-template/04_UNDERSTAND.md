# Stage 4 — Understand

> Project Stage: 04  
> Purpose: Connect practical experience to software structure and discover **why** the implementation was designed this way.

---

# Stage Purpose

Until now, the learner has:

```text
Prepared

↓

Executed

↓

Modified
```

The learner already knows:

- the project works,
- one modification changes the result,
- different implementations produce different behaviors.

Now a new question appears.

> **Why was the original code designed this way?**

Stage 4 is where coding changes from **writing code** to **understanding software design**.

The learner no longer focuses on:

> "How do I make this work?"

Instead, the learner begins asking:

> "Why is this structure easier to understand, maintain, or extend?"

This is the first step toward software engineering.

---

# Goal

Explain the structural meaning behind the project.

By the end of this stage, the learner should understand:

- what the important components are,
- what each component is responsible for,
- which information should be remembered,
- which actions should be performed,
- why those responsibilities are organized the way they are.

This stage is **not** intended to teach every software engineering concept.

Its purpose is to help the learner discover the first meaningful structure behind working code.

---

# Why This Stage Matters

Most beginners believe that programming is primarily about writing syntax.

However, as projects become larger, the main difficulty changes.

The challenge is no longer writing code.

The challenge becomes understanding:

- responsibility,
- structure,
- relationships,
- boundaries.

This stage introduces that transition gradually.

The learner should begin to realize:

> Working software and understandable software are not always the same.

---

# Compare Before and After

Review both versions.

## Original Version

Describe the original structure.

Example:

```text
One function controlled

- movement
- stopping
- timing
```

---

## Modified Version

Describe the modified structure.

Example:

```text
Movement timing became configurable.

Stopping behavior remained independent.
```

---

## What Changed?

List the important structural differences.

Examples:

- responsibility became clearer,
- state moved into one location,
- duplicated logic disappeared,
- communication became simpler,
- behavior became easier to change.

---

# Structural Questions

Answer the following questions.

Do not worry about perfect terminology.

Use your own words.

---

## What Does This Part Remember?

Identify information that remains over time.

Examples:

- current speed,
- current direction,
- sensor value,
- communication state,
- connection status.

These represent the system's **state**.

---

## What Does This Part Do?

Identify actions.

Examples:

- move,
- stop,
- read,
- calculate,
- transmit,
- display.

These represent the system's **behavior**.

---

## Which Parts Work Together?

Identify relationships.

Examples:

```text
Sensor

↓

Controller

↓

Motor
```

or

```text
Robot

↓

Motor
```

The goal is not to produce the perfect architecture.

The goal is to notice that software contains cooperating parts.

---

## Which Part Is Responsible?

Try answering:

> If this behavior breaks,

who should be fixed?

The answer often reveals responsibility.

---

# Discovering Structure

At this stage, avoid memorizing terminology.

Instead, observe patterns.

Examples include:

- information stays together,
- related behavior stays together,
- repeated code can often be grouped,
- independent parts should not control everything,
- one responsibility should not spread across many files.

These observations are more important than remembering formal definitions.

---

# Class Concept (When Applicable)

For projects introducing classes,
the learner should begin seeing a class differently.

Instead of thinking:

```text
Class

↓

Programming Syntax
```

the learner should gradually recognize:

```text
Class

↓

State

+

Behavior

↓

One Responsibility
```

The project should not force this conclusion.

It should emerge naturally from the learner's own observations.

---

# Reference

Provide only references needed to explain the current structure.

Examples:

- one diagram,
- one code comparison,
- one short explanation,
- one architecture figure,
- one textbook section.

Avoid introducing topics unrelated to the current project.

---

# Common Misunderstandings

## "The modified version is always better."

Not necessarily.

Sometimes the original design is more appropriate.

The learner should understand *why* a change helps,
not simply assume that every change is an improvement.

---

## "Understanding means memorizing definitions."

No.

Understanding means explaining:

- why something exists,
- why it behaves that way,
- why another design may behave differently.

---

## "Software engineering starts after programming."

Software engineering begins the moment the learner starts asking:

> "Why is this organized like this?"

---

# Completion Check

Before continuing:

- [ ] I can explain what changed.
- [ ] I can identify at least one responsibility.
- [ ] I can identify at least one piece of state.
- [ ] I can identify at least one behavior.
- [ ] I understand why the modification changed the result.
- [ ] I can describe one structural idea using my own words.

Perfect terminology is **not** required.

---

# Think About

> If this project became ten times larger,
> which part would become difficult to understand first?

There is no single correct answer.

The purpose is to begin thinking about software as a structure rather than only a sequence of instructions.

---

# Preparing for Stage 5

The learner has now experienced:

```text
Working Project

↓

Controlled Modification

↓

Structural Understanding
```

The final stage asks one more question.

Not:

> "What did you build?"

But:

> **"How did your understanding change while building it?"**

That question belongs to InnerMirror.

The project ends here.

The learner's reflection begins next.

---

# Next Stage

Continue to:

[Stage 5 — Reflect](./05_REFLECT.md)

The project experience now becomes an opportunity to record how your understanding changed through the work you completed.