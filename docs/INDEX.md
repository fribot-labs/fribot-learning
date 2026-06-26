# Documentation Index

This document provides a complete navigation map for the Fribot Learning documentation.

The documentation is organized hierarchically so that both developers and AI assistants can quickly understand where information belongs.

---

# Documentation Structure

```
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
│
└── roadmap/
    └── PBL_MVP_MASTER_PLAN.md
```

---

# Foundation Documentation

Purpose

Defines the permanent philosophy and architectural principles of the Fribot ecosystem.

These documents change very rarely.

Documents

| Document | Purpose |
|----------|---------|
| 01_FOUNDATION_PHILOSOPHY.md | Vision, mission, educational philosophy |
| 02_REPOSITORY_ARCHITECTURE.md | Repository architecture and system boundaries |
| 03_DEVELOPMENT_PRINCIPLES.md | Development rules and Pull Request principles |
| 04_REPOSITORY_ROLES.md | Repository responsibilities and lifecycle |

Recommended Reading Order

```
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

Purpose

Describes the technical implementation of the system.

Examples

- Runtime Architecture
- API Design
- Data Flow
- Database Design
- Security Architecture

These documents evolve together with implementation.

---

# Roadmap Documentation

Purpose

Defines what will be developed.

Roadmap documents are expected to evolve continuously.

Current Documents

| Document | Purpose |
|----------|---------|
| PBL_MVP_MASTER_PLAN.md | Official MVP development roadmap |

Future Examples

- Release Plan
- Feature Roadmap
- Phase Planning
- Commercial Roadmap

---

# Repository Relationship

Documentation belongs to the entire Fribot ecosystem.

```
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private

↓

Research

↓

Archive
```

Although documentation is maintained inside the **fribot-learning** repository, its principles apply across all repositories.

---

# Document Lifecycle

| Category | Stability |
|----------|-----------|
| Foundation | Very Stable |
| Architecture | Medium |
| Roadmap | Frequently Updated |
| Release Notes | Per Version |
| Research | Experimental |

---

# Reading Guide

## New Contributors

```
README

↓

Foundation

↓

Roadmap

↓

Architecture

↓

Implementation
```

---

## Developers

Start with

- Foundation Documentation
- Repository Architecture
- Development Principles

before implementing new features.

---

## AI Assistants

Recommended context loading order

```
Foundation

↓

Roadmap

↓

Architecture

↓

Implementation
```

This order provides the philosophical context before implementation details.

---

# Future Documentation Categories

As the project grows, additional categories may be added.

Examples

```
api/

research/

release/

tutorials/

adr/

design/

security/
```

Every new category should preserve the same hierarchical documentation philosophy.

---

# Documentation Principles

Documentation should answer

1. Why?
2. What?
3. Where?
4. How?

in that order.

Implementation details should never appear before the architectural reasoning.

---

# Foundation Principle

Documentation is part of the architecture.

Good documentation preserves decisions.

Good architecture preserves knowledge.

Together they allow the Fribot ecosystem to evolve without losing its original vision.
