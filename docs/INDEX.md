# Documentation Index

> **Documentation Navigation**
>
> This document provides the complete navigation map for the
> `fribot-learning` repository.
>
> The documentation is intentionally organized so that both developers and AI
> assistants can quickly understand:
>
> - where information belongs,
> - why it exists,
> - how it relates to other documentation,
> - and how constitutional principles become learner-facing projects.
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

The documentation hierarchy intentionally mirrors the constitutional
architecture of the ecosystem.

```text
Learning Constitution

↓

Constitution Documentation

↓

Foundation Documentation

↓

Architecture Documentation

↓

Project Templates

↓

Learner-Facing Projects

↓

Implementation

↓

Pull Requests
```

Each layer answers a different question.

| Layer | Primary Question |
|--------|------------------|
| Constitution | Why should learning be designed this way? |
| Foundation | How should this repository think and evolve? |
| Architecture | How are responsibilities implemented? |
| Project Templates | How should projects be structured? |
| Projects | What does the learner experience? |
| Implementation | How is the feature built? |
| Pull Requests | How did the implementation evolve? |

---

# Constitution Documentation

## Purpose

Constitution Documentation connects the repository to the
`innermirror-constitution` repository.

It explains:

- constitutional authority,
- learning content standards,
- repository implementation,
- constitutional review.

These documents never replace the Constitution.

They implement it.

---

## Documents

| Document | Purpose |
|----------|---------|
| README.md | Constitution documentation overview |
| CONSTITUTION_REFERENCE.md | Repository relationship with the Constitution |
| LEARNING_CONTENT_STANDARD.md | Official learner-facing content standard |
| CONSTITUTIONAL_REVIEW_CHECKLIST.md | Constitutional review before merge |

---

# Foundation Documentation

## Purpose

Defines the long-term identity of the repository.

Topics include:

- educational philosophy,
- development principles,
- repository responsibilities,
- long-term evolution.

Foundation documents are intentionally stable.

---

# Architecture Documentation

## Purpose

Defines how Foundation principles become repository structure.

Topics include:

- repository boundaries,
- service architecture,
- project template architecture,
- contracts,
- public integration,
- implementation strategy.

Architecture evolves with implementation while remaining aligned with the
Constitution and Foundation.

---

# Roadmap Documentation

## Purpose

Defines implementation order.

Roadmaps describe:

- implementation phases,
- release planning,
- MVP sequencing,
- future development.

Roadmaps may change frequently.

They never redefine Architecture or Foundation.

---

# Repository Relationship

The current ecosystem is:

```text
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private
```

Supporting repositories include:

```text
innermirror-engine-private

fribot-flow-timeline
```

This repository documents only the public Learning layer.

Private Runtime implementation belongs elsewhere.

---

# Documentation Stability

| Category | Expected Stability |
|----------|--------------------|
| Constitution | Extremely Stable |
| Foundation | Very Stable |
| Architecture | Stable |
| Roadmap | Frequently Updated |
| Project Templates | Frequently Updated |
| Projects | Continuously Improved |
| Pull Requests | Historical |

---

# Recommended Reading Order

## New Contributors

```text
README

↓

Constitution

↓

Foundation

↓

Architecture

↓

Roadmap

↓

Project Templates

↓

Implementation
```

---

## Project Authors

Recommended reading:

1. Constitution Documentation
2. Foundation Documentation
3. Development Principles
4. Project Template Architecture

before creating a new Starter Project.

---

## Developers

Recommended reading:

1. Repository Roles
2. Repository Boundary
3. Cross Repository Boundary
4. Service Responsibility Matrix
5. Project Template Architecture

before implementing a feature.

---

## AI Assistants

Recommended context loading order:

```text
Constitution

↓

Foundation

↓

Architecture

↓

Roadmap

↓

Current Pull Request
```

This order minimizes architectural drift and keeps implementation aligned
with constitutional principles.

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

Where?

↓

Implement
```

Lower documentation layers should never silently redefine higher layers.

---

# Documentation Ownership

| Documentation | Primary Owner |
|---------------|---------------|
| Constitution | Constitutional implementation |
| Foundation | Repository identity |
| Architecture | Public platform architecture |
| Project Templates | Learner-facing structure |
| Runtime Design | InnerMirror Runtime |
| Reflection Analysis | Private Runtime |

---

# Foundation Principle

The Constitution protects purpose.

Foundation protects repository identity.

Architecture protects responsibility.

Project Templates protect learner experience.

Implementation creates working software.

Together they preserve long-term educational consistency across the Fribot
Learning ecosystem.