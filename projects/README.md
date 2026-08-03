# PBL Projects

> Status: MVP Project Collection  
> Scope: Learner-facing Projects  
> Repository: `fribot-learning`

---

# Purpose

The `projects/` directory contains the official learner-facing Project-Based Learning (PBL) projects maintained in the public Fribot Learning repository.

Each project represents one complete learning experience.

A project is **not** simply a collection of source code.

Each project combines:

- a concrete engineering goal,
- executable tasks,
- practical experimentation,
- structural understanding,
- Reflection.

The objective is to help learners improve not only what they build, but also **how they think while building software**.

Projects should create meaningful engineering experiences that naturally lead learners into Reflection.

---

# Repository Role

The `projects/` directory owns:

- learner-facing projects,
- project-specific documentation,
- starter code,
- project references,
- Reflection entry points.

The directory does **not** own:

- Runtime intelligence,
- Reflection analysis,
- learner memory,
- AI coaching,
- recommendation logic,
- private Runtime implementation.

Those responsibilities belong to other repositories within the Fribot ecosystem.

---

# Learning Philosophy

Every learner-facing project should guide the learner through one consistent experience.

```text
Experience

↓

Execution

↓

Modification

↓

Understanding

↓

Reflection
```

The project itself is not the final objective.

The learner's understanding is.

Projects should therefore emphasize:

- experience before explanation,
- observation before abstraction,
- understanding before memorization,
- Reflection before evaluation.

---

# Common Project Structure

Every learner-facing project follows the same minimum structure.

```text
project-name/
├─ README.md
├─ 01_START.md
├─ 02_RUN.md
├─ 03_MODIFY.md
├─ 04_UNDERSTAND.md
├─ 05_REFLECT.md
├─ starter-code/
└─ references/
```

Projects may differ in:

- programming language,
- hardware,
- technical subject,
- starter code,
- reference materials.

They should **not** differ in learner experience.

The common architecture is defined in:

- [Project Template Architecture](../docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

---

# Common Learning Flow

Every learner-facing project follows the same five stages.

## Stage 1 — Start

Understand:

- what will be built,
- required tools,
- expected result,
- first action.

---

## Stage 2 — Run

Execute the prepared example.

Confirm that the original project works.

Establish a reliable baseline.

---

## Stage 3 — Modify

Make one controlled modification.

Observe the resulting behavioral change.

Compare the modified version with the original.

---

## Stage 4 — Understand

Connect practical experience with software structure.

Begin understanding:

- state,
- behavior,
- responsibility,
- relationships,
- boundaries.

The learner gradually moves beyond syntax toward software engineering thinking.

---

## Stage 5 — Reflect

Record how understanding changed.

Reflection belongs to InnerMirror.

Projects simply provide the opportunity to enter Reflection.

---

# Current MVP Projects

The MVP begins with two learner-facing projects.

---

## 1. Class Concept Robot

Project:

- [Class Concept Robot](./class-concept-robot/)

Purpose:

Help beginners understand that a class is more than C++ syntax.

The learner gradually discovers why related state and behavior are grouped together.

The project begins with familiar procedural programming and naturally progresses toward object-oriented thinking.

Status:

```text
Planned
```

---

## 2. Tandem Dual MCU

Project:

- [Tandem Dual MCU](./tandem-dual-mcu/)

Purpose:

Help learners understand role separation and collaboration between two microcontrollers.

The project gradually introduces:

- independent execution,
- communication,
- coordination,
- responsibility separation,
- collaboration.

Status:

```text
Planned
```

---

# Future Projects

The MVP intentionally limits the number of maintained projects.

Initial target:

```text
2 Projects
```

Maximum MVP target:

```text
5 Projects
```

Additional projects may be added provided that:

- the common project template remains sufficient,
- no new platform feature is required,
- the learner experience remains consistent,
- the Reflection workflow remains unchanged.

The platform should grow by adding projects, not by redesigning the learning architecture.

---

# How New Projects Are Created

Every new project begins from the common authoring template.

```text
templates/project-template/

↓

Copy

↓

projects/<new-project>/
```

Project authors should never create a completely new directory structure.

Consistency is part of the learning experience.

The common authoring template is available here:

- [Project Authoring Template](../templates/project-template/)

---

# Relationship with GitHub

GitHub is recommended but optional.

Projects may encourage learners to record:

- commits,
- branches,
- pull requests,
- implementation history,
- experiment history.

However,

GitHub should never become a barrier to beginning a project.

A learner should be able to:

- open the project,
- understand the goal,
- run the starter code,
- complete the first experiment,

before becoming comfortable with GitHub workflows.

---

# Relationship with InnerMirror

Projects naturally conclude with Reflection.

The intended learner experience is:

```text
Project

↓

Practical Experience

↓

Reflection Entry

↓

InnerMirror

↓

Insight
```

The project creates the experience.

InnerMirror preserves how the learner's understanding changes through that experience.

Projects do **not**:

- analyze Reflection,
- evaluate Reflection,
- interpret Reflection,
- store Reflection internally.

Projects simply provide the bridge.

---

# Project Writing Principles

Every learner-facing project should:

- begin with something approachable,
- produce a visible result quickly,
- introduce one meaningful change at a time,
- gradually reveal software structure,
- encourage understanding before abstraction,
- finish with Reflection.

Projects should avoid:

- overwhelming theory,
- excessive terminology,
- large unexplained code examples,
- unnecessary architecture discussions,
- hidden implementation details.

The learner should discover deeper concepts naturally through experience.

---

# Out of Scope

Projects should not implement:

- learner scoring,
- achievement systems,
- dashboards,
- AI-generated curriculum,
- automatic GitHub synchronization,
- private Runtime contracts,
- private learner modeling,
- proprietary analysis,
- recommendation systems.

Those responsibilities belong to later development stages or private repositories.

---

# Navigation

Related documentation:

- [Repository README](../README.md)
- [Documentation Overview](../docs/README.md)
- [Documentation Index](../docs/INDEX.md)
- [Project Template Architecture](../docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

---

# Foundation Principle

A project should begin with action,

lead naturally toward understanding,

and finish by encouraging Reflection.

Every project in this directory should preserve that principle.

As additional projects are introduced, the learner experience should remain consistent while the technical content evolves.