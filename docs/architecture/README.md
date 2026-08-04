# Architecture Documentation

> **Architecture Documentation**
>
> This directory defines how the constitutional and Foundation principles of
> Fribot Learning are translated into repository structure, service
> boundaries, project architecture, contracts, and implementation rules.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> Architecture documents define implementation structure.
>
> They do not redefine constitutional meaning.

---

# Purpose

The Architecture Documentation defines **how** the Fribot Learning repository
and its related services are organized.

The documentation hierarchy is:

```text
Constitution

↓

Foundation

↓

Architecture

↓

Project Templates

↓

Learner-Facing Projects

↓

Implementation and Pull Requests
```

Each layer has a distinct responsibility.

The Constitution defines enduring meaning.

Foundation defines repository philosophy and development principles.

Architecture defines responsibilities, boundaries, contracts, and reusable
structures.

Project Templates translate architecture into repeatable learner
experiences.

Implementation realizes those experiences through focused Pull Requests.

---

# Constitutional Basis

The InnerMirror ecosystem is governed by three constitutional layers.

```text
Human Growth Constitution

↓

Learning Constitution

↓

Runtime Constitution
```

Fribot Learning primarily implements the Learning Constitution.

The relevant constitutional learning principles include:

- Learning Principle Zero
- Comparison-Based Learning
- Experience Before Explanation
- Reflection Emergence

The highest governing learning principle is:

> **Learning does not begin with explanation.**
>
> **Learning begins when expectation meets reality.**

Architecture should therefore support projects in which learners can:

- form an expectation,
- execute something real,
- observe behavior,
- compare meaningful differences,
- understand an underlying relationship,
- recognize changed understanding,
- and optionally continue into Reflection.

---

# Relationship with Constitution Documentation

The repository contains a Constitution Application layer under:

```text
docs/constitution/
```

The relationship is:

```text
Learning Constitution

↓

Constitution Reference

↓

Learning Content Standard

↓

Architecture Documentation

↓

Project Template Architecture

↓

Starter Projects
```

Relevant documents include:

- [Constitution Documentation](../constitution/)
- [Constitution Reference](../constitution/CONSTITUTION_REFERENCE.md)
- [Learning Content Standard](../constitution/LEARNING_CONTENT_STANDARD.md)
- [Constitutional Review Checklist](../constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md)

The Constitution Application documents define how constitutional principles
should influence repository development and learning content.

Architecture documents define the structures through which those principles
are implemented.

---

# Relationship with Foundation Documentation

The Foundation Documentation explains:

- why Fribot Learning exists,
- which educational principles guide it,
- how development should proceed,
- which repository owns each responsibility.

The Architecture Documentation explains:

- how those responsibilities are separated,
- how repositories collaborate,
- how services communicate,
- how projects are structured,
- how implementation remains aligned.

The relationship is:

```text
Foundation Philosophy

↓

Development Principles

↓

Repository Roles

↓

Architecture

↓

Project Implementation
```

Relevant Foundation documents include:

- [Foundation Documentation](../foundation/)
- [Foundation Philosophy](../foundation/01_FOUNDATION_PHILOSOPHY.md)
- [Repository Architecture](../foundation/02_REPOSITORY_ARCHITECTURE.md)
- [Development Principles](../foundation/03_DEVELOPMENT_PRINCIPLES.md)
- [Repository Roles](../foundation/04_REPOSITORY_ROLES.md)

Foundation documents change rarely.

Architecture documents may evolve as implementation and service integration
become clearer.

However, Architecture must remain consistent with the Constitution and
Foundation.

---

# Architecture Scope

This directory documents:

- repository structure,
- repository boundaries,
- cross-repository collaboration,
- service responsibilities,
- service and data flow,
- public integration points,
- project-template architecture,
- implementation strategy,
- architectural validation rules.

This directory does not contain:

- learner-facing project curriculum,
- private Runtime implementation,
- personal Reflection data,
- private coaching algorithms,
- experimental intelligence implementation,
- release history,
- constitutional authority.

Those responsibilities belong to other documentation layers or repositories.

---

# Current Ecosystem Architecture

The active ecosystem consists of three production responsibilities and one
research responsibility.

| Layer | Primary Repository | Primary Responsibility |
|---|---|---|
| Learning | `fribot-learning` | Learner-facing projects and executable learning experiences |
| Landing | `innermirror-landing` | Reflection entry and approved Runtime result presentation |
| Runtime | `innermirror-runtime-private` | Private Reflection processing, continuity, and coaching |
| Engine | `innermirror-engine-private` | Experimental decision and recommendation intelligence |

The following repository remains an archive:

```text
fribot-flow-timeline
```

It preserves historical workflow, Reflection, UX, and Runtime experiments.

It is not part of the active MVP execution path.

---

# Primary Service Relationship

The active service relationship is:

```text
Learner

↓

Fribot Learning Project

↓

Run, Observe, Modify, and Compare

↓

Recognition of Changed Understanding

↓

Optional InnerMirror Transition

↓

InnerMirror Landing

↓

Reflection and User-Authorized Context

↓

InnerMirror Runtime

↓

Private Continuity and Coaching

↓

InnerMirror Landing

↓

Learner
```

This is a continuous user journey.

It is not a single undifferentiated application.

Each repository preserves one primary responsibility.

---

# Learning Layer

## Primary Repository

```text
fribot-learning
```

## Purpose

Create meaningful learner-facing project experiences.

## Owns

- public Starter Projects,
- executable examples,
- project progression,
- learning templates,
- observation guidance,
- expected-output guidance,
- troubleshooting guidance,
- meaningful comparison structures,
- explanation after experience,
- public educational references,
- Reflection transition guidance.

## Does Not Own

- private Reflection analysis,
- continuity scoring,
- identity interpretation,
- long-term cognitive memory,
- coaching-strategy selection,
- private Runtime orchestration,
- live InnerMirror UI behavior.

The Learning layer creates the conditions in which Reflection may become
meaningful.

It does not privately interpret the learner.

---

# Landing Layer

## Primary Repository

```text
innermirror-landing
```

## Purpose

Enable Reflection interaction and present approved Runtime results.

## Owns

- Reflection input,
- Reflection submission,
- GitHub connection interface,
- repository selection,
- user-triggered analysis controls,
- Runtime API communication,
- request state,
- loading and error presentation,
- coaching presentation,
- continuity visualization,
- user-facing accessibility.

## Does Not Own

- private Reflection interpretation,
- continuity computation,
- coaching-strategy selection,
- Runtime memory,
- learner-facing project architecture,
- experimental intelligence research.

Landing collects authorized input and presents approved output.

It does not become a second Runtime.

---

# Runtime Layer

## Primary Repository

```text
innermirror-runtime-private
```

## Purpose

Privately process Reflection and preserve continuity across time.

## Owns

- Reflection normalization,
- private Reflection analysis,
- approved GitHub Snapshot interpretation,
- summary generation,
- next-question generation,
- pacing,
- continuity analysis,
- longitudinal context,
- coaching-result generation,
- Decision Review support,
- Runtime memory,
- Runtime orchestration,
- secure cognitive processing.

## Does Not Own

- public Starter Projects,
- learning templates,
- public curriculum,
- React components,
- UI layout,
- public presentation,
- unapproved experimental intelligence,
- constitutional authority.

Runtime preserves the consequences of meaningful learning.

It does not own the learner-facing experience that creates them.

---

# Engine Research Layer

## Primary Repository

```text
innermirror-engine-private
```

## Purpose

Explore experimental decision, recommendation, and coaching intelligence.

## Owns

- recommendation experiments,
- decision-scoring research,
- coaching-strategy experiments,
- prompt-contract research,
- state-analysis experiments,
- future cognitive-model prototypes.

## Does Not Own

- direct production user interaction,
- official Runtime memory,
- production continuity responsibility,
- learner-facing project content,
- constitutional authority.

Research enters production only after:

```text
Evaluation

↓

Constitutional Review

↓

Architectural Review

↓

Privacy and Security Review

↓

Contract Definition

↓

Validated Migration

↓

Runtime Ownership
```

Experimental success alone does not authorize production use.

---

# Current MVP Architecture

The current MVP intentionally remains small.

The core learning flow is:

```text
Learner

↓

PBL Project

↓

Expectation

↓

Execution

↓

Observation

↓

Comparison

↓

Understanding

↓

Optional Reflection
```

The service flow continues through InnerMirror when the learner chooses to
reflect.

```text
Reflection

↓

InnerMirror Landing

↓

Private Runtime Processing

↓

Continuity and Coaching

↓

Landing Presentation
```

The MVP does not attempt to implement a complete learning-management
platform.

Its purpose is to validate whether carefully designed project experiences
produce meaningful understanding and naturally support Reflection.

---

# MVP Integration Policy

The MVP uses user-triggered integration.

The current Runtime workflow is:

```text
Reflection

+

Reflect + GitHub Analyze

↓

Authorized GitHub Snapshot

↓

Runtime Analysis

↓

Structured Result
```

The MVP excludes:

- automatic GitHub synchronization,
- GitHub Webhooks,
- background monitoring,
- continuous polling,
- automatic Reflection generation,
- silent project-context transfer,
- automatic cognitive analysis,
- background schedulers.

Manual and user-authorized workflows should first demonstrate educational
and product value.

---

# Project Template Architecture

Learner-facing projects are built from reusable project architecture.

Every project follows the visible lifecycle:

```text
Start

↓

Run

↓

Modify

↓

Understand

↓

Reflect
```

Within that lifecycle, the constitutional learning mechanism is:

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

Reflect
```

Projects may differ in:

- hardware,
- programming language,
- technical concept,
- learning goal,
- executable material.

They should not arbitrarily redefine the common learning architecture.

The common project structure is defined in:

- [Project Template Architecture](./PROJECT_TEMPLATE_ARCHITECTURE.md)

Learner-facing projects are located under:

- [PBL Projects](../../projects/)

The reusable project-authoring template is expected under:

- `templates/project-template/`

---

# Project Architecture Responsibility

The Project Template Architecture defines:

- project lifecycle,
- stage-document responsibility,
- expectation formation,
- executable baseline,
- observation guidance,
- controlled modification,
- meaningful comparison,
- explanation after experience,
- changed-understanding checkpoints,
- optional Reflection transition.

A project should not be considered complete merely because its code runs.

A complete Fribot Learning project should allow the learner to:

- form an expectation,
- encounter reality,
- observe behavior,
- compare meaningful differences,
- understand at least one structural relationship,
- distinguish what changed from what remained stable,
- recognize whether understanding changed.

---

# Project Document Responsibilities

The project architecture may use the following documents.

| Document | Primary Responsibility |
|---|---|
| `README.md` | Project map and entry point |
| `01_START.md` | Preparation and first expectation |
| `EXPECTED_OUTPUT.md` | Observable expectation formation |
| `02_RUN.md` | Execution and encounter with reality |
| `TROUBLESHOOTING.md` | Observation verification |
| `03_MODIFY.md` | Controlled change and comparison generation |
| `WHY_IT_WORKS.md` | Explanation after experience |
| `04_UNDERSTAND.md` | Structural interpretation |
| `BEFORE_YOU_CONTINUE.md` | Recognition of changed understanding |
| `05_REFLECT.md` | Optional InnerMirror transition |

Not every project requires every file.

File names may remain flexible.

Educational responsibilities must remain visible.

---

# Meaningful Comparison Principle

Every substantial Starter Project should intentionally create at least one
meaningful comparison.

Examples include:

- expectation versus actual behavior,
- original versus modified implementation,
- procedural versus class-based structure,
- one controller versus two controllers,
- one command source versus another,
- learner-generated versus AI-generated code.

A project author should be able to answer:

> What meaningful comparison will the learner experience?

A project with no meaningful comparison may be useful as a technical
reference.

It may not yet be a complete Fribot Learning experience.

---

# Reflection Boundary

Reflection connects Learning and Runtime.

```text
Learning Experience

↓

Changed Understanding

↓

Reflection

↓

Runtime Continuity
```

Fribot Learning may provide:

- a Reflection transition,
- a project title,
- a stage title,
- one Reflection question,
- an optional public project reference.

Fribot Learning must not:

- privately interpret Reflection,
- assign continuity scores,
- infer identity,
- maintain private memory,
- generate private coaching strategy.

InnerMirror remains independently usable for Reflection beyond Fribot
Learning projects.

---

# Project Context Rule

Project context must not be transferred automatically.

Only explicit, minimal, user-authorized context may be included through an
approved contract.

Permitted public context may include:

- project identifier,
- project title,
- learning stage,
- public repository URL,
- learner-selected commit,
- learner-selected Pull Request,
- short non-sensitive project summary.

Project context must not include:

- hidden cognitive interpretation,
- identity claims,
- private learner memory,
- inferred psychological state,
- continuity scores,
- private coaching instructions.

`fribot-learning` does not call the private Runtime directly.

---

# Architectural Principles

The Architecture Documentation follows these principles.

## Constitutional Alignment

Architecture implements constitutional meaning.

It does not redefine it.

---

## Repository Separation

Every repository has one clearly identifiable primary responsibility.

---

## Learning Experience First

Technical architecture exists to support meaningful learner experience.

---

## Experience Before Explanation

The architecture should make it possible for learners to encounter a
phenomenon before receiving the full explanation.

---

## Meaningful Comparison

Project structures should intentionally preserve comparison.

---

## Reflection Emergence

Reflection should follow meaningful change in understanding rather than act
as a mandatory completion task.

---

## Reflection Independence

InnerMirror Reflection remains independent from specific project entities.

---

## Runtime Independence

Private cognitive processing remains inside the private Runtime.

---

## Minimal Coupling

Repositories collaborate through explicit contracts and public references.

They do not depend on one another's internal implementation.

---

## User Agency

The learner should understand when moving between:

- a public learning project,
- InnerMirror Reflection,
- GitHub context submission,
- private Runtime analysis.

---

## Security by Design

Public repositories must not expose private cognitive data, private prompts,
Runtime memory, or proprietary reasoning logic.

---

## Optional GitHub Integration

GitHub remains recommended but optional for initial learner access and first
execution.

---

# Architecture Documents

Each document in this directory focuses on one architectural concern.

| Document | Responsibility |
|---|---|
| [Repository Boundary](./REPOSITORY_BOUNDARY.md) | Defines ownership and responsibility boundaries for `fribot-learning` |
| [Cross-Repository Boundary](./CROSS_REPOSITORY_BOUNDARY.md) | Defines collaboration boundaries among repositories |
| [Cross-Repository Governance](./CROSS_REPOSITORY_GOVERNANCE.md) | Defines governance rules for cross-repository change |
| [Service Data Flow](./SERVICE_DATA_FLOW.md) | Defines approved service and data movement |
| [Service Responsibility Matrix](./SERVICE_RESPONSIBILITY_MATRIX.md) | Defines responsibility allocation across service layers |
| [Project Template Architecture](./PROJECT_TEMPLATE_ARCHITECTURE.md) | Defines the reusable learner-facing project architecture |

---

# Documentation Structure

This directory currently contains:

```text
architecture/
├── README.md
├── REPOSITORY_BOUNDARY.md
├── CROSS_REPOSITORY_BOUNDARY.md
├── CROSS_REPOSITORY_GOVERNANCE.md
├── SERVICE_DATA_FLOW.md
├── SERVICE_RESPONSIBILITY_MATRIX.md
└── PROJECT_TEMPLATE_ARCHITECTURE.md
```

For the complete documentation navigation map, see:

- [Documentation Index](../INDEX.md)

For the documentation overview, see:

- [Documentation README](../README.md)

---

# Documentation Authority

The documentation hierarchy should be interpreted as follows.

```text
Constitution
= Enduring meaning and authority
```

```text
Foundation
= Repository philosophy and development identity
```

```text
Constitution Documentation
= Application standards
```

```text
Architecture
= Responsibilities, structures, and contracts
```

```text
Project Templates
= Repeatable learner-experience design
```

```text
Projects
= Actual learner-facing implementation
```

A lower layer should not silently redefine a higher layer.

When conflict exists, the higher governing layer should be reviewed first.

---

# Implementation Rule

Implementation follows Architecture.

Implementation should not redefine Architecture through code alone.

A significant implementation change should answer:

1. Which constitutional principle does this support?
2. Which repository owns the responsibility?
3. Which service layer owns the behavior?
4. Does an explicit contract exist?
5. Does the Project Template Architecture support the learner experience?
6. Does the change preserve privacy and user agency?

Large architectural changes should be documented before implementation.

---

# Pull Request Traceability

Every meaningful implementation PR should be traceable through:

```text
Constitution

↓

Foundation

↓

Architecture

↓

Project or Service Responsibility

↓

Implementation

↓

Validation
```

A cross-repository feature may require several focused PRs.

Recommended flow:

```text
Responsibility Definition

↓

Contract PR

↓

Producer Implementation PR

↓

Consumer Adapter PR

↓

Integration Verification

↓

Documentation Update
```

One repository should not absorb all responsibilities merely to simplify a
single PR.

---

# Architecture Review Triggers

Changes to learner-facing project content do not require an Architecture
update when they preserve the common structure.

Examples:

- improving instructions,
- correcting links,
- replacing a Starter Project file,
- adding a public reference,
- improving expected output,
- improving troubleshooting,
- refining a Reflection question.

Architecture review is required when a change introduces:

- a different project lifecycle,
- removal of meaningful comparison,
- mandatory GitHub integration,
- direct Runtime communication from `fribot-learning`,
- a new Reflection data type,
- automatic project-context submission,
- private analysis logic in the public repository,
- a new learner-state database,
- a new authentication dependency,
- a new service layer,
- a primary responsibility transfer,
- an undocumented cross-repository dependency,
- a project-specific UI platform.

---

# Security Boundary

The public `fribot-learning` repository must not contain:

- private Reflection content,
- personal cognitive data,
- Runtime memory,
- identity-analysis logic,
- private coaching algorithms,
- private reasoning prompts,
- proprietary recommendation logic,
- private credentials,
- hidden automatic data-transfer behavior.

Public educational materials are allowed.

Private cognitive interpretation is not.

Security is an architectural boundary, not a later optimization.

---

# Evolution Policy

Architecture evolves through implementation evidence.

However, evolution should preserve:

- Constitutional Alignment
- Foundation Philosophy
- Repository Boundaries
- Learning and Runtime separation
- Reflection Independence
- Runtime Independence
- Meaningful Comparison
- User Agency
- Security by Design
- MVP simplicity

Architecture should become clearer as implementation progresses.

It should not become broader merely because new technical possibilities
appear.

---

# Architecture Review Checklist

Before merging an architecture-sensitive change, confirm:

- [ ] The governing constitutional principle is identified.
- [ ] The repository owner is correct.
- [ ] The service responsibility is clear.
- [ ] Public experience and private interpretation remain separated.
- [ ] Learning and Runtime responsibilities are not duplicated.
- [ ] Reflection remains independent.
- [ ] User authorization is preserved.
- [ ] Contracts are explicit where required.
- [ ] Shared data is minimized.
- [ ] Failure behavior is documented.
- [ ] Security boundaries remain intact.
- [ ] Project-template responsibilities remain visible.
- [ ] Related documentation is updated.

---

# Guiding Principle

Good architecture creates clear responsibilities.

Clear responsibilities create stable contracts.

Stable contracts allow repositories to evolve independently.

Stable project structures allow new learning experiences to be created
without redesigning the platform.

```text
Constitution protects purpose.

Foundation protects identity.

Architecture protects responsibility.

Project Templates protect learning structure.

Implementation creates experience.
```

The Architecture Documentation exists to preserve this chain as Fribot
Learning and InnerMirror evolve.

---

# Final Repository Boundary

This repository documents and implements the public Learning layer.

It creates meaningful learner-facing project experiences.

It does not implement:

- private Runtime processing,
- Reflection analysis,
- continuity computation,
- identity interpretation,
- private learner memory,
- coaching-strategy selection,
- experimental recommendation intelligence.

Those responsibilities belong to approved private repositories.

```text
fribot-learning

↓

Learner Experience

↓

Reflection Transition
```

```text
innermirror-runtime-private

↓

Private Interpretation

↓

Long-Term Continuity
```

Clear boundaries protect both the educational mission and the learner's
personal intellectual data.