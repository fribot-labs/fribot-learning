# 04_REPOSITORY_ROLES.md

> **Foundation Documentation**
>
> This document is part of the Fribot Foundation Documentation.
>
> The Foundation Documentation defines the long-term architectural, philosophical, and development principles of the Fribot ecosystem.
>
> All MVP and future development should follow these documents unless explicitly superseded by a later foundation revision.

---

# Repository Roles

## Purpose

This document permanently defines the responsibility of every repository in the Fribot ecosystem.

Every repository must have one primary responsibility.

Repository responsibilities should remain stable throughout the lifetime of the project.

When implementing any new feature, developers should determine the correct repository **before writing code**.

---

# Repository Overview

| Repository | Visibility | Status | Primary Responsibility |
|------------|------------|---------|------------------------|
| fribot-learning | Public | Active | PBL Coding Education Platform |
| innermirror-landing | Public | Active | User Experience & Learning Interface |
| innermirror-runtime-private | Private | Active | Official Decision Intelligence Runtime |
| innermirror-engine-private | Private | Research | Experimental Decision Intelligence Research |
| fribot-flow-timeline | Private | Archive | Historical Reflection Engine & UX Sandbox |

---

# Repository Lifecycle

The Fribot ecosystem distinguishes repositories by lifecycle.

## Active

Repositories that participate directly in the MVP service.

New features are implemented here.

Repositories

- fribot-learning
- innermirror-landing
- innermirror-runtime-private

---

## Research

Repositories that contain experimental work.

Ideas may later migrate into the official Runtime after architectural review.

Repositories

- innermirror-engine-private

---

## Archive

Repositories that preserve previous development history.

No new MVP functionality should be implemented here.

Repositories

- fribot-flow-timeline

---

# Repository Responsibilities

---

# fribot-learning

## Visibility

Public

## Status

Active

## Purpose

Official PBL Coding Education Platform.

This repository represents the educational service itself.

It is the primary entry point for learners.

---

## Responsibilities

- Project-based learning
- Learning templates
- Coding curriculum
- Project management
- Learning documentation
- Foundation Documentation
- Educational roadmap

---

## Does NOT Contain

- Runtime logic
- Decision analysis
- AI coaching engine
- Reflection processing
- Memory engine

---

## Future Role

Remain the central educational platform of the Fribot ecosystem.

---

# innermirror-landing

## Visibility

Public

## Status

Active

## Purpose

Official user interface of the InnerMirror service.

Responsible for interaction between learners and the Runtime.

---

## Responsibilities

- Reflection editor
- GitHub authentication
- Repository selection
- "Reflect + GitHub Analyze"
- Coaching visualization
- Portfolio visualization
- Learning progress visualization

---

## Does NOT Contain

- Coaching algorithms
- Runtime intelligence
- Decision review
- Memory
- Reflection analysis

Landing presents results.

Runtime generates results.

---

## Future Role

Remain a lightweight presentation layer.

---

# innermirror-runtime-private

## Visibility

Private

## Status

Active

## Purpose

Official intelligence engine of the Fribot ecosystem.

The Runtime processes all decision-related information.

---

## Responsibilities

- Reflection analysis
- GitHub Snapshot analysis
- Memory
- Continuity Intelligence
- PBL Coaching
- Decision Review
- Senior Thinking Checkpoints
- Runtime orchestration

---

## Owns

- Cognitive processing
- Decision intelligence
- Coaching generation
- Learning trajectory

---

## Never Responsible For

- UI rendering
- Project management
- Learning templates
- Public presentation

---

## Future Role

Remain the official production Runtime.

All future AI intelligence should eventually converge here.

---

# innermirror-engine-private

## Visibility

Private

## Status

Research

## Purpose

Experimental Decision Intelligence Repository.

This repository preserves previous research on recommendation systems and coaching intelligence.

---

## Research Areas

- Recommendation Engine
- Decision Intelligence
- State Analysis
- Coaching Evolution
- Prompt Contracts
- Experimental Runtime Components

---

## Current MVP Status

Not part of the active MVP execution path.

Research only.

---

## Migration Policy

Useful components may later migrate into:

innermirror-runtime-private

after architectural review.

The repository itself remains available for future experimentation.

---

# fribot-flow-timeline

## Visibility

Private

## Status

Archive

## Purpose

Historical development repository.

Preserves the evolution of the original Reflection Engine.

---

## Contains

- Reflection Timeline
- Workflow experiments
- UX prototypes
- Runtime prototypes
- Historical implementation history

---

## Current MVP Status

Archive only.

No new MVP functionality should be implemented here.

---

## Future Role

Knowledge preservation.

Reference implementation.

Historical architectural record.

---

# Repository Selection Guide

Before implementing any feature, ask the following questions.

## Is this educational content?

→ fribot-learning

---

## Is this user interaction?

→ innermirror-landing

---

## Is this AI reasoning?

→ innermirror-runtime-private

---

## Is this experimental research?

→ innermirror-engine-private

---

## Is this historical reference?

→ fribot-flow-timeline

---

# Repository Boundary Rules

Every feature belongs to one primary repository.

Repositories should never duplicate responsibilities.

Moving responsibilities between repositories requires an architectural review.

Repository boundaries are considered part of the system architecture.

---

# Long-Term Repository Strategy

The architecture intentionally separates

Learning

↓

Interface

↓

Runtime Intelligence

↓

Research

↓

Historical Archive

This separation improves

- maintainability
- scalability
- security
- repository clarity
- long-term evolution

---

# Foundation Principle

Repositories represent responsibilities.

Responsibilities define architecture.

Stable architecture enables sustainable long-term development.

Every repository should remain focused on one primary purpose.
