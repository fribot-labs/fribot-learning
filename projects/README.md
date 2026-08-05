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

Projects should create meaningful engineering experiences that may naturally
lead learners into optional Reflection.

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

Every learner-facing project should guide the learner through one consistent constitutional learning experience.

```text
Predict

↓

Run

↓

Observe

↓

Compare

↓

Understand

↓

Optional Reflection
```

The project itself is not the final objective.

The learner's understanding is.

Projects should therefore emphasize:

- experience before explanation,
- observation before abstraction,
- meaningful comparison before conclusion,
- understanding before memorization,
- creating the conditions from which Reflection may naturally emerge.

Reflection remains optional throughout the MVP.

Projects create the experience.

Learners decide whether that experience becomes Reflection.

---

# Common Project Structure

Every learner-facing project follows one common constitutional learning
architecture.

The current MVP validates this architecture through executable Starter
Projects.

A typical Starter Project currently contains:

```text
starter-project/

├── README.md
├── EXPECTED_OUTPUT.md
├── TROUBLESHOOTING.md
├── WHY_IT_WORKS.md
├── BEFORE_YOU_CONTINUE.md
└── executable source files
```

The complete project lifecycle may later expand to include staged documents
such as:

```text
project-name/

├── README.md
├── 01_START.md
├── 02_RUN.md
├── 03_MODIFY.md
├── 04_UNDERSTAND.md
├── 05_REFLECT.md
├── starter-code/
└── references/
```

Projects may differ in:

- programming language,
- hardware,
- technical subject,
- starter code,
- reference materials.

They should **not** differ in learner experience or constitutional learning
flow.

The common learner-facing architecture is defined in:

- [Project Template Architecture](../docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

The current architecture has been validated through the Tandem Dual MCU
project.

- [Tandem Dual MCU](./tandem-dual-mcu/)

The Tandem Dual MCU project currently serves as the first validated
learner-facing reference implementation of the Fribot Learning Project
Architecture.

Future learner-facing projects should preserve the same constitutional
learning structure while introducing different engineering concepts and
technical domains.

A reusable Project Authoring Template will be extracted only after multiple
learner-facing project families have been implemented and validated.

---

# Common Learning Flow

Every learner-facing project follows the same constitutional learning flow.

```text
Predict

↓

Run

↓

Observe

↓

Compare

↓

Understand

↓

Optional Reflection
```

The learner is encouraged to experience the project before receiving the full
architectural explanation.

---

## Predict

Before running the project, the learner forms an expectation.

Typical questions include:

- What do I think will happen?
- Which part of the system is responsible?
- What should I observe?

---

## Run

Execute the prepared Starter Project.

The objective is to establish a working baseline rather than immediately
modify the implementation.

---

## Observe

Observe the actual behaviour.

Focus on:

- visible system behaviour,
- hardware response,
- communication,
- execution order,
- unexpected results.

---

## Compare

Compare:

- prediction and reality,
- before and after,
- what changed,
- what remained the same.

Meaningful comparison is the foundation of learning.

---

## Understand

Connect the observed behaviour to the underlying software architecture.

The learner gradually discovers:

- state,
- behaviour,
- responsibility,
- communication,
- relationships,
- boundaries.

Understanding emerges from comparison rather than memorization.

---

## Optional Reflection

Projects create the learning experience.

InnerMirror provides the optional continuation point for Reflection.

Projects simply create the conditions from which Reflection may naturally
emerge.

Reflection remains optional throughout the MVP.

---

# Current MVP Projects

The current MVP validates one complete learner-facing project before
expanding to additional project families.

---

## Validated MVP Reference Project

### Tandem Dual MCU

Project:

- [Tandem Dual MCU](./tandem-dual-mcu/)

Status:

```text
Validated MVP Reference Project
```

Current validated learning unit:

```text
Tandem Phase 1

↓

Command Source Architecture
```

The learner gradually compares three different command sources.

```text
Program

↓

User

↓

Environment
```

while preserving one stable Tandem architecture.

The project introduces:

- command generation,
- interpretation,
- communication,
- responsibility separation,
- coordinated execution,
- structural continuity across changing inputs.

The Tandem Dual MCU project currently serves as the first validated
learner-facing reference implementation of the Fribot Learning Project
Architecture.

Future learner-facing projects should preserve the same constitutional
learning structure while introducing different engineering concepts and
technical domains.

---

## Planned Future Projects

### Class Concept Robot

Project:

- [Class Concept Robot](./class-concept-robot/)

Status:

```text
Planned (Post-MVP Content Expansion)
```

Purpose:

Help learners understand that a class represents more than C++ syntax.

The project will gradually introduce:

- state,
- behaviour,
- responsibility,
- public interface,
- private boundary,
- why related state and behaviour are grouped together.

The project is expected to follow the same validated constitutional learning
structure established by the Tandem Dual MCU project.

It is intentionally scheduled after the current MVP learner journey has been
completed and validated.

---

# Future Projects

The current MVP intentionally focuses on validating one complete learner
journey before expanding the number of learner-facing projects.

The current validated project is:

```text
Tandem Dual MCU

↓

Phase 1

↓

Command Source Architecture
```

After the current MVP learner journey has been completed and validated,
additional learner-facing project families may be introduced.

Planned future projects include:

- Class Concept Robot
- additional robotics projects
- additional software engineering projects
- additional learner-facing project families

Every future project should preserve the validated Project Template
Architecture.

Rather than introducing a different learning architecture, each new project
should validate the same constitutional learner experience within a different
engineering domain.

Additional learner-facing projects may be added only when:

- the validated Project Template Architecture remains sufficient,
- no new platform architecture is required,
- the constitutional learning flow remains consistent,
- meaningful comparison remains explicit,
- Reflection continues to remain optional,
- repository boundaries remain unchanged.

The repository should evolve by validating learner experiences rather than
redesigning the learning architecture.

---

# How New Projects Are Created

During the current MVP, new learner-facing projects should follow:

- [Project Template Architecture](../docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)
- [Tandem Dual MCU](./tandem-dual-mcu/)

The Tandem Dual MCU project currently serves as the validated reference
implementation of the Fribot Learning Project Architecture.

A reusable Project Authoring Template will be extracted after multiple
project families have been validated.

During the current MVP, the validated architecture is considered more
important than a reusable template.

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

Learners should be able to begin meaningful project work before becoming
comfortable with GitHub workflows.

---

# Relationship with InnerMirror

Projects naturally conclude with an opportunity for Reflection.

The intended learner experience is:

```text
Project

↓

Practical Experience

↓

Optional Reflection

↓

InnerMirror
```

The project creates the learning experience.

InnerMirror provides a place where learners may continue their Reflection
after completing a project.

During the current MVP:

- Reflection remains optional,
- learners write a general Reflection,
- no project-specific Reflection type is introduced,
- no project context is automatically transferred,
- no private Runtime processing is exposed.

Projects do **not**:

- analyze Reflection,
- evaluate Reflection,
- interpret Reflection,
- store Reflection internally.

Projects simply provide the bridge between project experience and optional
Reflection.

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

and create the conditions from which optional Reflection may emerge.

Every project in this directory should preserve that principle.

As additional projects are introduced, the learner experience should remain consistent while the technical content evolves.