# CROSS_REPOSITORY_BOUNDARY.md

This document defines the official architectural boundaries **between repositories** in the Fribot ecosystem.

Unlike individual Repository Boundary documents, this document describes how the repositories collaborate to provide one integrated learning experience.

Its purpose is to preserve clear ownership while enabling seamless service integration.

---

# Purpose

Each repository owns one primary responsibility.

The repositories communicate through clearly defined interfaces.

No repository should gradually absorb responsibilities that belong to another repository.

The architecture is intentionally separated to preserve:

- maintainability
- security
- scalability
- long-term evolution

---

# Repository Responsibilities

The Fribot ecosystem currently consists of the following active repositories.

| Repository | Primary Responsibility |
|------------|------------------------|
| fribot-learning | Public PBL Coding Education Platform |
| innermirror-landing | User Interface & Presentation |
| innermirror-runtime-private | AI Runtime & Decision Intelligence |

Supporting repositories

| Repository | Purpose |
|------------|---------|
| innermirror-engine-private | Experimental Runtime Research |
| fribot-flow-timeline | Historical Archive & Sandbox |

---

# Cross Repository Principles

Every repository owns one primary concern.

```
Learning

↓

Presentation

↓

Intelligence
```

Responsibilities must never overlap.

---

# Learning → Landing

The Learning Platform provides educational context.

Examples

- project definition
- milestone structure
- learning roadmap
- educational flow
- project metadata

Landing consumes this information to create the user experience.

The Learning Platform never renders UI directly.

---

# Landing → Runtime

Landing communicates with the Runtime through stable contracts.

Typical Runtime request

```
Reflection

+

GitHub Snapshot

+

Project Context

↓

Runtime API
```

Landing never analyzes learner data.

Landing only submits structured input.

---

# Runtime → Landing

Runtime returns structured intelligence.

Typical Runtime response

- Reflection Summary
- Runtime Questions
- Continuity Signals
- Decision Review
- PBL Coaching
- Memory Status
- Diagnostics

Landing decides how these results are presented.

Runtime never renders UI.

---

# Repository Interaction Model

```
Learner

↓

fribot-learning

↓

innermirror-landing

↓

Runtime API

↓

innermirror-runtime-private

↓

Structured Runtime Response

↓

innermirror-landing

↓

Learner
```

Each repository contributes one responsibility.

---

# Responsibility Ownership

## fribot-learning

Owns

- education
- project structure
- learning templates
- documentation
- roadmap

Does not own

- Runtime intelligence
- UI presentation

---

## innermirror-landing

Owns

- Reflection input
- GitHub connection
- Repository selection
- Runtime API Adapter
- Runtime Response Mapping
- Progress visualization
- Portfolio presentation
- Coaching presentation

Does not own

- Reflection analysis
- Decision Review generation
- PBL Coaching generation
- Runtime Memory

---

## innermirror-runtime-private

Owns

- Reflection Analysis
- GitHub Snapshot Analysis
- Runtime Contracts
- Continuity Intelligence
- Decision Review
- PBL Coaching
- Runtime Memory
- Runtime Orchestration

Does not own

- React UI
- Presentation
- Educational content
- Learning templates

---

# Communication Rules

Repositories communicate only through stable contracts.

```
Landing

↓

Runtime Contract

↓

Runtime

↓

Structured Runtime Response

↓

Landing
```

No repository should access another repository's internal implementation directly.

---

# MVP Integration Policy

The MVP intentionally uses manual synchronization.

Current workflow

```
Reflection

+

Reflect + GitHub Analyze

↓

GitHub Snapshot

↓

Runtime
```

The Runtime analyzes only the submitted snapshot.

No background monitoring is performed during the MVP.

---

# Repository Independence

Every repository should remain independently maintainable.

A repository should be replaceable without requiring architectural redesign of the remaining repositories.

This separation enables:

- independent deployment
- independent testing
- independent evolution

---

# Responsibility Violations

Examples of incorrect responsibility placement.

## Learning

Should NOT perform

- Runtime analysis
- Runtime memory
- Coaching generation

---

## Landing

Should NOT perform

- Reflection analysis
- Decision Review generation
- Runtime reasoning

---

## Runtime

Should NOT perform

- UI rendering
- React components
- Portfolio visualization
- Learning template management

---

# Future Expansion

Future repositories should follow the same architectural principle.

Possible additions

- Team Learning
- Enterprise Platform
- Analytics
- Marketplace

Each new repository should own one primary responsibility.

---

# Foundation Alignment

This document extends the principles defined in:

- 01_FOUNDATION_PHILOSOPHY
- 02_REPOSITORY_ARCHITECTURE
- 03_DEVELOPMENT_PRINCIPLES
- 04_REPOSITORY_ROLES

It does not replace individual Repository Boundary documents.

Instead, it defines how those repositories collaborate.

---

# Foundation Principle

The Fribot ecosystem is not a single application.

It is a collection of independent repositories working together through clearly defined responsibilities.

Learning provides context.

Landing provides experience.

Runtime provides intelligence.

Maintaining these boundaries preserves the long-term architecture of the Fribot ecosystem.
