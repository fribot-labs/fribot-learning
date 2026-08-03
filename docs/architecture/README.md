# Architecture Documentation

The Architecture Documentation defines **how** the Fribot Learning repository is organized and how the public PBL platform is implemented.

While the Foundation Documentation explains **why** the project exists and **which principles guide development**, the Architecture Documentation explains **how those principles are realized in software**.

This directory describes only the architecture that belongs to the public `fribot-learning` repository.

Private Runtime implementation belongs to the InnerMirror Runtime repository.

---

# Purpose

This directory contains the public technical architecture of the Fribot Learning platform.

Architecture documents describe:

- repository structure
- project template architecture
- repository boundaries
- service boundaries
- public data flow
- implementation strategy
- public integration points

Unlike the Foundation Documentation, Architecture Documentation evolves as implementation progresses.

---

# Relationship with Foundation

The documentation hierarchy is intentionally structured.

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

The responsibility of each layer is different.

### Foundation

Defines permanent philosophy and development principles.

Examples:

- Why the project exists
- Development philosophy
- Repository roles
- Long-term principles

Foundation documents change rarely.

---

### Architecture

Defines how the philosophy is implemented.

Examples:

- repository structure
- project architecture
- public integration
- technical boundaries

Architecture documents evolve together with implementation.

---

### Project Templates

Define learner-facing project experiences.

Examples:

- Class Concept Robot
- Tandem Dual MCU

Each template follows the common architecture defined here.

---

### Implementation

Implementation follows the Architecture.

Implementation should never redefine architecture.

---

### Pull Requests

Every implementation change should trace back to:

```text
Foundation

↓

Architecture

↓

Project Template

↓

Implementation
```

---

# Current MVP Architecture

The current MVP intentionally keeps the architecture small.

The learner experiences the following flow.

```text
Learner

↓

PBL Project

↓

Practical Experience

↓

GitHub (Optional)

↓

InnerMirror Reflection

↓

Reflection Insight
```

The MVP does **not** attempt to implement a complete learning management platform.

Its purpose is to validate whether project-based experiences naturally produce more meaningful Reflection.

---

# Public Layer

## Purpose

Provide learner-facing project experiences.

## Repositories

- `fribot-learning`
- `innermirror-landing`

## Responsibilities

### `fribot-learning`

Owns:

- public project templates
- learning workflow
- starter projects
- educational references
- project documentation

Does not own:

- Reflection analysis
- Runtime intelligence
- learner memory
- AI coaching
- recommendation engines

---

### `innermirror-landing`

Owns:

- Reflection UI
- user interaction
- Reflection submission
- Runtime result visualization

Does not own:

- private Reflection analysis
- decision intelligence
- learner memory

---

# Private Layer

## Purpose

Analyze Reflection and generate insights.

## Repository

- `innermirror-runtime-private`

## Responsibilities

- Reflection analysis
- summary generation
- pacing guidance
- continuity analysis
- next-question generation

The Runtime analyzes only Reflection content.

The Runtime does not receive project-specific context during the MVP.

---

# Project Template Architecture

The learner-facing architecture is based on reusable project templates.

Every project follows the same progression.

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

Projects differ in technical content.

They should not differ in learning structure.

The common template is defined in:

- [Project Template Architecture](./PROJECT_TEMPLATE_ARCHITECTURE.md)

Learner-facing projects are located under:

- [PBL Projects](../../projects/)

The reusable authoring template is located under:

- [Project Authoring Template](../../templates/project-template/)

---

# Architectural Principles

The public architecture follows the following principles.

- Repository Separation
- Single Responsibility
- InnerMirror First
- Template First
- Reflection Independence
- UI Context Only
- Minimal Coupling
- Security by Design
- Optional GitHub Integration (MVP)

These principles originate from the Foundation Documentation.

Relevant Foundation documents:

- [Foundation Documentation](../foundation/)
- [Foundation Philosophy](../foundation/01_FOUNDATION_PHILOSOPHY.md)
- [Repository Architecture](../foundation/02_REPOSITORY_ARCHITECTURE.md)
- [Development Principles](../foundation/03_DEVELOPMENT_PRINCIPLES.md)
- [Repository Roles](../foundation/04_REPOSITORY_ROLES.md)

---

# Architecture Documents

Each document in this directory focuses on one architectural concern.

| Document | Responsibility |
|---|---|
| [Repository Boundary](./REPOSITORY_BOUNDARY.md) | Defines ownership and responsibility boundaries for `fribot-learning` |
| [Cross-Repository Boundary](./CROSS_REPOSITORY_BOUNDARY.md) | Defines interaction boundaries between repositories |
| [Cross-Repository Governance](./CROSS_REPOSITORY_GOVERNANCE.md) | Defines governance rules across repositories |
| [Service Data Flow](./SERVICE_DATA_FLOW.md) | Defines the public service and data flow |
| [Service Responsibility Matrix](./SERVICE_RESPONSIBILITY_MATRIX.md) | Defines responsibility allocation across services |
| [Project Template Architecture](./PROJECT_TEMPLATE_ARCHITECTURE.md) | Defines the common learner-facing project structure |

---

# Documentation Structure

This directory currently contains:

```text
architecture/

README.md

REPOSITORY_BOUNDARY.md

CROSS_REPOSITORY_BOUNDARY.md

CROSS_REPOSITORY_GOVERNANCE.md

SERVICE_DATA_FLOW.md

SERVICE_RESPONSIBILITY_MATRIX.md

PROJECT_TEMPLATE_ARCHITECTURE.md
```

For the complete documentation navigation map, see:

- [Documentation Index](../INDEX.md)

For the documentation overview, see:

- [Documentation README](../README.md)

---

# Documentation Scope

Architecture Documentation should describe:

- repository responsibilities
- service boundaries
- public technical architecture
- project template architecture
- implementation strategy

Architecture Documentation should avoid:

- educational philosophy
- release history
- learner Reflection
- AI Runtime implementation
- private algorithms

Those topics belong to other repositories or documentation layers.

---

# Evolution Policy

Architecture evolves through implementation.

However, every architectural change should preserve:

- Foundation Philosophy
- Repository Boundaries
- InnerMirror First
- Reflection Independence
- Runtime Independence
- Security Principles

Large architectural changes should be documented before implementation begins.

Changes to learner-facing project content do not require an architecture update when they preserve the common project structure.

Architecture review is required when a change introduces:

- a different project lifecycle
- mandatory GitHub integration
- direct Runtime communication
- a new Reflection data type
- private analysis logic in the public repository
- a new learner state database
- a new authentication dependency

---

# Guiding Principle

Good architecture creates clear responsibilities.

Clear responsibilities create maintainable software.

Maintainable software enables reusable learning experiences.

Reusable learning experiences naturally lead to meaningful Reflection.

The Architecture Documentation exists to preserve those responsibilities as the Fribot Learning platform evolves.

---

# Repository Boundary

This repository documents and implements the public PBL platform.

It does **not** implement:

- private Runtime
- Reflection analysis
- decision intelligence
- learner memory
- AI recommendation logic

Those responsibilities belong to:

```text
innermirror-runtime-private
```

The public repository should remain focused on learner-facing project experiences.