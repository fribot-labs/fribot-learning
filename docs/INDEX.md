# Documentation Index

This document provides the complete navigation map for the Fribot Learning documentation.

The documentation is intentionally organized so that both developers and AI assistants can quickly understand:

- where information belongs,
- why it exists,
- and how each document relates to implementation.

The goal is consistency rather than documentation volume.

---

# Documentation Hierarchy

```text
docs/

├── README.md
├── INDEX.md
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

# Documentation Layers

The documentation is organized into five primary responsibility layers,
with Roadmap Documentation controlling implementation order.

```text
Foundation

↓

Architecture

↓

Project Templates

↓

Implementation

↓

Pull Requests
```

Each layer answers a different question.

| Layer | Question |
|--------|----------|
| Foundation | Why does the project exist? |
| Architecture | How is the system organized? |
| Project Templates | How does the learner experience the project? |
| Implementation | How is the feature implemented? |
| Pull Requests | How did the implementation evolve? |

---

# Foundation Documentation

## Purpose

Defines the permanent philosophy of the Fribot ecosystem.

Foundation documents describe:

- educational philosophy,
- repository roles,
- development principles,
- long-term architectural direction.

Foundation documents should change very rarely.

---

## Documents

| Document | Purpose |
|----------|---------|
| 01_FOUNDATION_PHILOSOPHY.md | Vision, mission, educational philosophy |
| 02_REPOSITORY_ARCHITECTURE.md | Repository architecture and boundaries |
| 03_DEVELOPMENT_PRINCIPLES.md | Development principles |
| 04_REPOSITORY_ROLES.md | Repository responsibilities |

---

## Recommended Reading Order

```text
01

↓

02

↓

03

↓

04
```

---

# Architecture Documentation

## Purpose

Defines how the philosophy is implemented.

Architecture documents describe:

- repository boundaries,
- service boundaries,
- project template architecture,
- public implementation structure,
- integration strategy.

Architecture documents evolve together with implementation.

---

## Documents

| Document | Purpose |
|----------|---------|
| REPOSITORY_BOUNDARY.md | Repository ownership |
| CROSS_REPOSITORY_BOUNDARY.md | Repository interaction |
| CROSS_REPOSITORY_GOVERNANCE.md | Governance rules |
| SERVICE_DATA_FLOW.md | Public service flow |
| SERVICE_RESPONSIBILITY_MATRIX.md | Responsibility allocation |
| PROJECT_TEMPLATE_ARCHITECTURE.md | Common learner-facing project structure |

---

# Roadmap Documentation

## Purpose

Defines what will be implemented.

Roadmap documents are expected to evolve continuously.

Current documents:

| Document | Purpose |
|----------|---------|
| PBL_MVP_MASTER_PLAN.md | MVP implementation roadmap |

Future roadmap documents may include:

- Release Plan
- Feature Roadmap
- Phase Planning

Roadmap documents describe future implementation.

They do not redefine architecture.

---

# Repository Relationship

The Fribot ecosystem currently consists of multiple repositories.

```text
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private
```

Each repository owns different responsibilities.

The documentation in this repository defines only the public PBL platform.

Private Runtime implementation belongs to:

```text
innermirror-runtime-private
```

---

# Document Stability

| Category | Expected Stability |
|----------|--------------------|
| Foundation | Very Stable |
| Architecture | Stable |
| Roadmap | Frequently Updated |
| Project Templates | Frequently Updated |
| Pull Requests | Historical |

---

# Reading Guide

## New Contributors

Recommended reading order:

```text
README

↓

Foundation

↓

Architecture

↓

Roadmap

↓

Implementation
```

---

## Project Authors

Read first:

- Foundation Documentation
- Development Principles
- Project Template Architecture

before creating a new learner-facing project.

---

## Developers

Read first:

- Repository Architecture
- Repository Boundary
- Service Data Flow
- Project Template Architecture

before implementing new features.

---

## AI Assistants

Recommended context loading order:

```text
Foundation

↓

Architecture

↓

Roadmap

↓

Current Pull Request
```

This order ensures that implementation decisions remain consistent with the project's philosophy.

---

# Documentation Principles

Documentation should answer the following questions in order.

1. Why?
2. What?
3. How?
4. Where?

Implementation should never appear before architectural reasoning.

Architecture should never contradict the Foundation Documentation.

Project Templates should never contradict the Architecture Documentation.

---

# Documentation Ownership

The ownership of documentation is intentionally separated.

| Documentation | Owner |
|---------------|------|
| Foundation | Project Philosophy |
| Architecture | Public Platform |
| Project Templates | PBL Repository |
| Runtime Design | Private Runtime Repository |
| Reflection Analysis | InnerMirror Runtime |

This separation preserves clear repository boundaries.

---

# Foundation Principle

Documentation is part of the architecture.

Good documentation preserves architectural decisions.

Good architecture preserves development consistency.

Consistent development creates maintainable software.

Maintainable software enables long-term learning.