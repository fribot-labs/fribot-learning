# Stage 4 — Understand

> Project Stage: 04  
> Project: Class Concept Robot  
> Purpose: Discover why software naturally changes its structure as projects become larger.

---

# Stage Purpose

In the previous stage,

you continued adding new robot behaviors.

The robot still worked.

However,

the software gradually became more difficult to understand.

This stage is not about fixing the code.

It is about understanding **why** that happened.

Instead of asking:

> "How do I write a class?"

this stage asks:

> **"Why does software eventually need something like a class?"**

---

# Looking Back

Think about the project you just modified.

At the beginning,

the robot program felt simple.

Then you added:

- one new behavior,
- another feature,
- another variable,
- another condition.

The project still worked.

But what changed?

The code became longer.

Finding one behavior became slower.

Changing one function sometimes affected another.

Nothing was technically "wrong."

The project simply became harder to understand.

---

# The Real Problem

Most beginners believe the problem is:

> "There is too much code."

Usually,

that is **not** the real problem.

The real problem is often:

- related information is scattered,
- related behaviors are separated,
- one responsibility is spread across many functions,
- changing one part requires searching many locations.

The difficulty is not the amount of code.

The difficulty is the **relationship between the code**.

---

# Looking for Relationships

Instead of looking at individual lines,

look for things that belong together.

Examples:

A movement speed

↓

Movement function

↓

Stopping rule

↓

Current movement state

These are not independent.

They describe one thing.

Ask yourself:

> Should these remain separated,
>
> or do they naturally belong together?

---

# State and Behavior

Most software contains two different kinds of information.

## State

Things the system remembers.

Examples:

- current speed,
- current direction,
- current position,
- current sensor value.

State answers:

> **What does the system know right now?**

---

## Behavior

Things the system does.

Examples:

- move,
- stop,
- turn,
- accelerate,
- read a sensor.

Behavior answers:

> **What can the system do?**

---

# A New Observation

Look back at your code.

Ask yourself:

Which behaviors use the same information?

Examples:

```text
Current Speed

↓

Move

↓

Stop

↓

Turn
```

Those behaviors depend on the same state.

If they are always connected,

should they also stay together?

Do not answer immediately.

Simply observe.

---

# Responsibility

Imagine another programmer joins your project.

They ask:

> "Where is the movement logic?"

Can you answer with confidence?

Or would you need to search several different functions?

If one idea is spread across many places,

its responsibility is unclear.

Software becomes easier to understand when each responsibility has one obvious home.

---

# A Different Way to Think

Most programming books introduce a class like this.

```text
Class

↓

Syntax

↓

Example
```

This project asks a different question.

```text
Related State

+

Related Behavior

↓

One Responsibility

↓

Class
```

A class is not introduced because the language supports it.

A class appears because the software begins asking for it.

---

# What Have You Discovered?

At this point,

you are **not** expected to master object-oriented programming.

Instead,

you should begin recognizing one important idea.

As software grows,

relationships become more important than individual instructions.

Programs become easier to understand when related information and related behavior remain together.

---

# Completion Check

Before continuing:

- [ ] I understand why the project became harder to read.
- [ ] I identified at least one group of related information.
- [ ] I identified at least one group of related behaviors.
- [ ] I understand that the main difficulty was not simply more code.
- [ ] I can explain one responsibility using my own words.

You do **not** need to know advanced object-oriented terminology yet.

---

# Think About

> If you had to continue developing this robot for another six months,

would you continue adding more functions,

or would you begin grouping related state and behavior together?

Why?

There is no single correct answer.

The purpose is to notice how your thinking has changed.

---

# Preparing for Reflection

At the beginning of this project,

you were asked one simple question.

> **What do you think a class is?**

Do not answer yet.

Instead,

compare that first impression with what you have experienced.

The next stage is not about writing more code.

It is about recording how your understanding changed.

---

# Next Stage

Continue to:

[Stage 5 — Reflect](./05_REFLECT.md)

The project now ends.

Your Reflection begins.