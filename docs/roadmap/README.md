# Roadmap Documentation

The Roadmap Documentation defines the development direction of the Fribot ecosystem.

Unlike the Foundation Documentation, roadmap documents are expected to evolve continuously as the project grows.

They describe **what will be built**, **when it will be built**, and **why it is prioritized**.

---

# Purpose

The roadmap exists to organize development into clear, incremental milestones.

Rather than tracking individual Pull Requests, roadmap documents describe meaningful development phases and long-term objectives.

The roadmap helps maintain:

- development focus
- implementation priorities
- architectural consistency
- MVP scope control

---

# Relationship with Other Documentation

The documentation hierarchy is intentionally organized.

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

Foundation defines permanent principles.

Architecture defines technical realization.

Roadmap defines development priorities.

Pull Requests implement roadmap items.

---

# Current Roadmap

The primary roadmap document is:

| Document | Purpose |
|----------|---------|
| PBL_MVP_MASTER_PLAN.md | Official MVP development roadmap |

This document defines the current implementation strategy for the Fribot Learning MVP.

---

# Development Strategy

Fribot follows an incremental development model.

```
Foundation

↓

Repository Cleanup

↓

MVP Development

↓

Public Release

↓

Commercial Expansion
```

Every phase should produce a usable architectural improvement.

Large, monolithic releases should be avoided.

---

# MVP Roadmap

Current MVP focuses on:

- Repository Foundation
- GitHub Integration
- Project-Based Learning
- Reflection Workflow
- InnerMirror Runtime
- PBL Coaching
- Decision Review
- Growth Portfolio

Features outside the MVP are intentionally postponed.

---

# Roadmap Principles

Roadmap planning follows several principles.

## Small Iterations

Development progresses through small, well-defined phases.

---

## User Value First

Every phase should improve the learner's experience.

---

## Architecture First

Repository boundaries and Runtime independence should never be compromised for short-term implementation speed.

---

## MVP Scope Control

Only features required to validate the educational model belong in the MVP.

Everything else belongs to future releases.

---

# Version Relationship

Roadmap phases and software versions are related but independent.

Example

```
Phase 0

↓

Phase 1

↓

Phase 2

↓

Version 0.1.0
```

Multiple development phases may contribute to a single version.

Version numbers represent meaningful product milestones rather than individual implementation steps.

---

# Future Roadmap Categories

As the ecosystem grows, this directory may include documents such as:

```
roadmap/

README.md

PBL_MVP_MASTER_PLAN.md

RELEASE_PLAN.md

FEATURE_ROADMAP.md

COMMERCIAL_ROADMAP.md

LONG_TERM_VISION.md
```

Each roadmap document should focus on one planning horizon.

---

# Maintenance Policy

Roadmap documents should be updated whenever:

- development priorities change
- MVP scope changes
- major phases are completed
- new long-term objectives are defined

Historical roadmap documents should be preserved rather than overwritten whenever practical.

---

# Guiding Principle

A roadmap is not a promise.

It is a planning tool.

Its purpose is to guide development while remaining flexible enough to adapt to new knowledge, better ideas, and architectural improvements.

The Foundation Documentation defines where the project must remain.

The Roadmap defines where the project intends to go.
