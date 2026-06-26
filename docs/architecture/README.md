# Architecture Documentation

The Architecture Documentation describes how the Fribot ecosystem is designed and implemented.

While the Foundation Documentation explains **why** the project exists and **what** principles guide development, the Architecture Documentation explains **how** those principles are realized in software.

---

# Purpose

This directory contains the technical architecture of the Fribot ecosystem.

Architecture documents describe:

- system design
- runtime structure
- data flow
- API boundaries
- security architecture
- implementation patterns

Unlike the Foundation Documentation, architecture documents are expected to evolve as the system grows.

---

# Relationship with Foundation

The documentation hierarchy is intentionally structured.

```
Foundation

↓

Architecture

↓

Roadmap

↓

Implementation

↓

Pull Requests
```

Foundation documents define permanent principles.

Architecture documents describe technical realization.

Implementation should never contradict the Foundation Documentation.

---

# Current Architecture

The current MVP architecture consists of four major layers.

```text
Learner

↓

Fribot Learning

↓

GitHub Workflow

↓

InnerMirror Runtime

↓

Growth Portfolio
```

Responsibilities are intentionally separated between public and private repositories.

---

# Public Layer

Purpose

Provide the learning experience.

Repositories

- fribot-learning
- innermirror-landing

Responsibilities

- project management
- learning workflow
- user interface
- GitHub integration
- coaching visualization

The public layer never performs decision intelligence.

---

# Private Layer

Purpose

Process cognitive learning data.

Repositories

- innermirror-runtime-private

Responsibilities

- Reflection analysis
- GitHub Snapshot analysis
- Continuity Intelligence
- Decision Review
- PBL Coaching
- Runtime orchestration

Private Runtime is the only component allowed to process decision intelligence.

---

# Architectural Principles

The architecture follows several fundamental principles.

- Single Responsibility
- Repository Separation
- Runtime Independence
- Security by Design
- Project-Based Learning
- Manual GitHub Synchronization (MVP)

These principles are defined in the Foundation Documentation.

---

# Planned Architecture Documents

As development progresses, this directory will include documents such as:

```
architecture/

README.md

SYSTEM_ARCHITECTURE.md

RUNTIME_ARCHITECTURE.md

DATA_FLOW.md

API_ARCHITECTURE.md

DATABASE_ARCHITECTURE.md

SECURITY_ARCHITECTURE.md

MEMORY_ARCHITECTURE.md

PORTFOLIO_ARCHITECTURE.md
```

Each document should focus on one architectural concern.

---

# Documentation Scope

Architecture documents describe:

- component relationships
- service boundaries
- technical responsibilities
- implementation strategy

Architecture documents should avoid:

- educational philosophy
- roadmap planning
- release history

Those topics belong to other documentation categories.

---

# Evolution Policy

Architecture is expected to evolve.

However, architectural changes should always preserve:

- Foundation Philosophy
- Repository Boundaries
- Runtime Independence
- Security Principles

Major architectural changes should be documented before implementation.

---

# Guiding Principle

Good architecture creates clear responsibilities.

Clear responsibilities create maintainable software.

Maintainable software enables long-term learning.

The Architecture Documentation exists to preserve those responsibilities as the Fribot ecosystem evolves.
