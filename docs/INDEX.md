# Documentation Index

> **Documentation Navigation**
>
> This document provides the complete navigation map for the
> `fribot-learning` repository.
>
> The documentation is intentionally organized so that learners, project
> authors, developers, maintainers, and AI assistants can quickly understand:
>
> - where information belongs,
> - why it exists,
> - how it relates to other documentation,
> - how constitutional principles become learner-facing projects,
> - and what must be completed next for the MVP.
>
> The objective is long-term consistency rather than documentation volume.

---

# Documentation Hierarchy

```text
docs/

├── README.md
├── INDEX.md
│
├── constitution/
│   ├── README.md
│   ├── CONSTITUTION_REFERENCE.md
│   ├── LEARNING_CONTENT_STANDARD.md
│   └── CONSTITUTIONAL_REVIEW_CHECKLIST.md
│
├── foundation/
│   ├── README.md
│   ├── 01_FOUNDATION_PHILOSOPHY.md
│   ├── 02_REPOSITORY_ARCHITECTURE.md
│   ├── 03_DEVELOPMENT_PRINCIPLES.md
│   └── 04_REPOSITORY_ROLES.md
│
├── architecture/
│   ├── README.md
│   ├── REPOSITORY_BOUNDARY.md
│   ├── CROSS_REPOSITORY_BOUNDARY.md
│   ├── CROSS_REPOSITORY_GOVERNANCE.md
│   ├── SERVICE_DATA_FLOW.md
│   ├── SERVICE_RESPONSIBILITY_MATRIX.md
│   └── PROJECT_TEMPLATE_ARCHITECTURE.md
│
└── roadmap/
    ├── README.md
    └── PBL_MVP_MASTER_PLAN.md
```

---

# Documentation Architecture

The documentation hierarchy intentionally mirrors the constitutional and
development architecture of the repository.

```text
Learning Constitution

↓

Constitution Documentation

↓

Foundation Documentation

↓

Architecture Documentation

↓

Roadmap Documentation

↓

Learner-Facing Projects

↓

Implementation

↓

Pull Requests
```

Each layer answers a different question.

| Layer | Primary Question |
|---|---|
| Constitution | Why must learning be designed this way? |
| Foundation | What identity and principles must the repository preserve? |
| Architecture | How are responsibilities and project structures organized? |
| Roadmap | What is complete, what remains, and what should be implemented next? |
| Projects | What does the learner actually experience? |
| Implementation | How is the learner-facing experience created? |
| Pull Requests | How did the repository evolve incrementally? |

Lower documentation layers must not silently redefine higher layers.

---

# Constitution Documentation

## Purpose

Constitution Documentation connects `fribot-learning` to the
`innermirror-constitution` repository.

It explains:

- constitutional authority,
- repository-level constitutional application,
- learner-facing content standards,
- constitutional review before merge.

These documents do not replace the Constitution.

They explain how the public Learning repository applies it.

---

## Documents

| Document | Purpose |
|---|---|
| [Constitution README](./constitution/README.md) | Constitution documentation overview |
| [Constitution Reference](./constitution/CONSTITUTION_REFERENCE.md) | Defines the repository relationship with the Constitution |
| [Learning Content Standard](./constitution/LEARNING_CONTENT_STANDARD.md) | Defines the official learner-facing content standard |
| [Constitutional Review Checklist](./constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md) | Defines constitutional review requirements before merge |

---

# Foundation Documentation

## Purpose

Foundation Documentation defines the long-term identity of the Fribot
Learning repository.

It describes:

- why the repository exists,
- what educational purpose it serves,
- how development should be approached,
- which responsibility belongs to each repository,
- and which principles should remain stable over time.

Foundation documents should change rarely.

---

## Documents

| Document | Purpose |
|---|---|
| [Foundation README](./foundation/README.md) | Foundation documentation overview |
| [Foundation Philosophy](./foundation/01_FOUNDATION_PHILOSOPHY.md) | Vision, mission, and educational philosophy |
| [Repository Architecture](./foundation/02_REPOSITORY_ARCHITECTURE.md) | Long-term repository architecture |
| [Development Principles](./foundation/03_DEVELOPMENT_PRINCIPLES.md) | Governing implementation principles |
| [Repository Roles](./foundation/04_REPOSITORY_ROLES.md) | Responsibility of each ecosystem repository |

---

# Architecture Documentation

## Purpose

Architecture Documentation defines how constitutional and Foundation
principles become repository structure.

It describes:

- repository ownership,
- cross-repository boundaries,
- service responsibilities,
- public data flow,
- learner-facing project architecture,
- implementation and integration boundaries.

Architecture documents may evolve with implementation, but they must remain
aligned with Constitution and Foundation Documentation.

---

## Documents

| Document | Purpose |
|---|---|
| [Architecture README](./architecture/README.md) | Architecture documentation overview |
| [Repository Boundary](./architecture/REPOSITORY_BOUNDARY.md) | Defines ownership and boundaries of `fribot-learning` |
| [Cross-Repository Boundary](./architecture/CROSS_REPOSITORY_BOUNDARY.md) | Defines interaction boundaries between repositories |
| [Cross-Repository Governance](./architecture/CROSS_REPOSITORY_GOVERNANCE.md) | Defines governance rules across repositories |
| [Service Data Flow](./architecture/SERVICE_DATA_FLOW.md) | Defines the public service and information flow |
| [Service Responsibility Matrix](./architecture/SERVICE_RESPONSIBILITY_MATRIX.md) | Allocates responsibilities across Learning, Landing, and Runtime |
| [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md) | Defines the validated constitutional structure of learner-facing projects and future project-authoring rules |

---

# Project Template Architecture Status

The Project Template Architecture is currently validated through:

```text
Tandem Phase 1

Command Source Architecture
```

The validated Starter Project sequence is:

```text
01 — Program-Generated Commands

↓

02 — User-Generated Commands

↓

03 — Environment-Generated Commands
```

This sequence demonstrates the current learner-facing architecture:

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

It also validates the common supporting document responsibilities:

```text
README.md

EXPECTED_OUTPUT.md

TROUBLESHOOTING.md

WHY_IT_WORKS.md

BEFORE_YOU_CONTINUE.md

Executable Starter Project
```

A reusable `templates/project-template/` directory has not yet been extracted.

During the current MVP, new project design should follow the validated
architecture rather than assume that a reusable template directory already
exists.

Template extraction is deferred until multiple learner-facing project
families have been validated.

---

# Roadmap Documentation

## Purpose

Roadmap Documentation defines:

- the current MVP implementation status,
- work already completed,
- remaining release-critical gaps,
- Post-MVP exclusions,
- and the official order of remaining Pull Requests.

Roadmaps may change as implementation produces new information.

They must never redefine Constitution, Foundation, or Architecture.

---

## Documents

| Document | Purpose |
|---|---|
| [Roadmap README](./roadmap/README.md) | Defines roadmap responsibility, status rules, and the current MVP development focus |
| [PBL MVP Master Development Plan](./roadmap/PBL_MVP_MASTER_PLAN.md) | Defines the current MVP completion state, remaining release-critical work, Post-MVP boundaries, completion criteria, and official implementation order |

`PBL_MVP_MASTER_PLAN.md` is the current source of truth for MVP development
priority.

It should be reviewed before introducing:

- a new project family,
- an advanced learning phase,
- a reusable template directory,
- GitHub automation,
- Runtime integration,
- private intelligence,
- or another platform dependency.

---

# Current MVP Direction

The current MVP is focused on completing one coherent learner journey.

```text
Repository Entry

↓

Project Discovery

↓

Project Requirements

↓

Prepared Starter Project

↓

Run or Observe

↓

Compare

↓

Understand

↓

Optional GitHub Record

↓

Optional InnerMirror Reflection
```

The current priority is not to add more learning content.

The priority is to complete and validate the entire public learner path.

---

# Current MVP Status

## Completed

- Foundation Documentation
- Constitution Application Documentation
- Repository Boundary Documentation
- Service Responsibility Documentation
- Project Template Architecture
- Tandem Dual MCU course overview
- Tandem Phase 1 Starter Projects
- Tandem Phase 1 learning navigation
- What Changes / What Remains the Same comparison
- Tandem Phase 1 completion guidance

## Remaining Before MVP Release

- repository learning entry navigation,
- learner-facing project catalog,
- clear project start path,
- explicit optional InnerMirror Reflection link,
- end-to-end learner-flow verification,
- MVP release-readiness declaration.

## Deferred Until Post-MVP

- Class Concept Robot constitutional redevelopment,
- reusable project-template extraction,
- Tandem Phase 2,
- additional project families,
- GitHub OAuth and repository selection,
- project dashboards,
- automatic GitHub synchronization,
- personalized PBL Coaching,
- Decision Review,
- Growth Portfolio.

---

# Official Remaining MVP Order

The current roadmap defines the following order.

```text
PR-PBL-019
MVP Completion Plan Alignment

↓

PR-PBL-020
Repository Learning Entry Navigation

↓

PR-PBL-021
Project Catalog and Start Path

↓

PR-PBL-022
InnerMirror Reflection Link Integration

↓

PR-PBL-023
MVP End-to-End Documentation Verification

↓

PR-PBL-024
MVP Release Readiness
```

This sequence should be completed before beginning a new project family or
advanced learning phase.

---

# Learner-Facing Project Navigation

Learner-facing projects are located under:

```text
projects/
```

The currently validated MVP project is:

```text
projects/tandem-dual-mcu/
```

Its executable learning path is located under:

```text
projects/tandem-dual-mcu/starter-project/
```

The current learning sequence is:

```text
Program

↓

User

↓

Environment
```

The command source changes.

The communication and execution architecture remain stable.

---

# Repository Relationship

The active ecosystem is:

```text
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private
```

Each repository owns a different responsibility.

## `fribot-learning`

Owns:

- public project experiences,
- educational documentation,
- learning navigation,
- comparison structures,
- optional Reflection entry guidance.

## `innermirror-landing`

Owns:

- learner-facing Reflection interaction,
- Runtime-result presentation,
- public service interface.

## `innermirror-runtime-private`

Owns:

- private Reflection analysis,
- continuity,
- memory,
- coaching,
- decision intelligence.

Supporting repositories include:

```text
innermirror-engine-private

fribot-flow-timeline
```

This repository documents and implements only the public Learning layer.

---

# Documentation Stability

| Category | Expected Stability |
|---|---|
| Constitution | Extremely Stable |
| Foundation | Very Stable |
| Architecture | Stable |
| Roadmap | Frequently Updated |
| Learner-Facing Projects | Continuously Improved |
| Pull Requests | Historical |

The Project Template Architecture should remain stable while individual
project content continues to improve.

---

# Recommended Reading Order

## New Contributors

```text
Repository README

↓

Documentation README

↓

Constitution

↓

Foundation

↓

Architecture

↓

Roadmap

↓

Current Learner-Facing Project

↓

Current Pull Request
```

New contributors should understand the current MVP completion priority before
proposing new learning content.

---

## Project Authors

Before creating or redesigning a learner-facing project, read:

1. Constitution Documentation
2. Foundation Documentation
3. Development Principles
4. Project Template Architecture
5. PBL MVP Master Development Plan
6. Current validated Tandem project structure

During the MVP, project authors should not begin a new project family unless
the roadmap explicitly places it inside the current required scope.

---

## Developers

Before implementing a feature, read:

1. Repository Roles
2. Repository Boundary
3. Cross-Repository Boundary
4. Service Responsibility Matrix
5. Project Template Architecture
6. PBL MVP Master Development Plan

Then determine whether the feature is:

```text
Required for MVP

or

Post-MVP
```

A technically valuable feature does not automatically belong in the current
MVP.

---

## AI Assistants

Recommended context-loading order:

```text
Constitution

↓

Foundation

↓

Architecture

↓

Roadmap

↓

Current Repository State

↓

Current Pull Request
```

AI assistants should verify the current MVP boundary before proposing:

- new projects,
- new learning phases,
- new services,
- automation,
- Runtime integration,
- or reusable template extraction.

This order minimizes architectural and scope drift.

---

# Documentation Principles

Documentation should answer questions in the following order.

```text
Why?

↓

What?

↓

How?

↓

What Is Required Now?

↓

Where?

↓

Implement
```

The Roadmap answers:

```text
What Is Required Now?
```

Implementation should not begin before the relevant higher-level
responsibilities and current scope are understood.

---

# Documentation Ownership

| Documentation | Primary Responsibility |
|---|---|
| Constitution | Governing learning authority |
| Foundation | Repository identity and permanent principles |
| Architecture | Responsibility and structural organization |
| Roadmap | Current implementation status and completion order |
| Learner-Facing Projects | Public learning experience |
| Runtime Design | Private InnerMirror Runtime |
| Reflection Analysis | Private Runtime intelligence |

Documentation ownership must remain consistent with repository ownership.

---

# Navigation Maintenance Rule

This index should be updated when:

- a documentation category is introduced,
- a core document is added or removed,
- the MVP completion order changes,
- a project becomes the validated reference implementation,
- a reusable template is formally extracted,
- or a Post-MVP area becomes active development.

Routine project-content edits do not require an Index update when the
documentation architecture remains unchanged.

---

# Foundation Principle

The Constitution protects learning purpose.

Foundation protects repository identity.

Architecture protects responsibility.

Roadmap protects development focus.

Learner-facing projects create real experience.

Pull Requests preserve implementation history.

```text
Purpose

↓

Structure

↓

Priority

↓

Experience

↓

Understanding
```

The current objective is not to expand every layer at once.

The objective is to complete one coherent learner journey while preserving
constitutional and architectural consistency.