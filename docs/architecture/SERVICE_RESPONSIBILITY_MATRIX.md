# SERVICE_RESPONSIBILITY_MATRIX.md

This document defines the service-level responsibility matrix of the Fribot ecosystem.

Unlike the Repository Responsibility Matrix, which assigns ownership to repositories, this document assigns responsibilities to service layers.

Its purpose is to preserve a clear separation between:

- Education
- Presentation
- Intelligence

This separation allows the platform to evolve without creating overlapping responsibilities.

---

# Purpose

The Fribot ecosystem is built from multiple independent services.

Each service owns one primary responsibility.

The service architecture follows three fundamental layers.

```
Education

↓

Presentation

↓

Intelligence
```

Every feature should belong to one of these layers.

---

# Service Responsibility Matrix

| Service Responsibility | Learning Platform | Landing | Runtime |
|------------------------|-------------------|----------|----------|
| Learning Structure | ✅ | ❌ | ❌ |
| Learning Templates | ✅ | ❌ | ❌ |
| Educational Documentation | ✅ | ❌ | ❌ |
| Project Definition | ✅ | ❌ | ❌ |
| Milestone Structure | ✅ | ❌ | ❌ |
| Roadmap | ✅ | ❌ | ❌ |
| Reflection Input | ❌ | ✅ | ❌ |
| GitHub Connection | ❌ | ✅ | ❌ |
| Repository Selection | ❌ | ✅ | ❌ |
| Runtime API Communication | ❌ | ✅ | ❌ |
| Runtime Response Mapping | ❌ | ✅ | ❌ |
| Progress Visualization | ❌ | ✅ | ❌ |
| Portfolio Presentation | ❌ | ✅ | ❌ |
| Coaching Presentation | ❌ | ✅ | ❌ |
| Decision Review Presentation | ❌ | ✅ | ❌ |
| Reflection Analysis | ❌ | ❌ | ✅ |
| GitHub Snapshot Analysis | ❌ | ❌ | ✅ |
| Reflection Summary | ❌ | ❌ | ✅ |
| Runtime Question Generation | ❌ | ❌ | ✅ |
| Continuity Intelligence | ❌ | ❌ | ✅ |
| Decision Review Generation | ❌ | ❌ | ✅ |
| PBL Coaching Generation | ❌ | ❌ | ✅ |
| Senior Thinking Evaluation | ❌ | ❌ | ✅ |
| Runtime Memory | ❌ | ❌ | ✅ |
| Memory Persistence | ❌ | ❌ | ✅ |
| Runtime Orchestration | ❌ | ❌ | ✅ |
| Runtime Diagnostics | ❌ | ❌ | ✅ |

---

# Education Layer

Primary Repository

```
fribot-learning
```

Responsibilities

- educational philosophy
- project-based learning
- learning templates
- project structure
- roadmap
- documentation

Purpose

Provide the educational context for the platform.

Education does not perform Runtime analysis.

---

# Presentation Layer

Primary Repository

```
innermirror-landing
```

Responsibilities

- Reflection input
- GitHub integration
- Runtime API communication
- UI state management
- Coaching presentation
- Portfolio presentation
- Progress visualization

Purpose

Present Runtime intelligence to the learner.

Presentation does not generate intelligence.

---

# Intelligence Layer

Primary Repository

```
innermirror-runtime-private
```

Responsibilities

- Reflection Analysis
- GitHub Snapshot Analysis
- Runtime Summary
- Runtime Questions
- Continuity Intelligence
- Decision Review
- PBL Coaching
- Runtime Memory
- Runtime Orchestration

Purpose

Generate structured intelligence for the platform.

The Runtime does not own presentation.

---

# Service Interaction

The three service layers collaborate through stable contracts.

```
Education

↓

Presentation

↓

Runtime

↓

Presentation

↓

Learner
```

Each layer performs one architectural responsibility.

---

# Responsibility Rules

Before implementing a new feature, ask:

## Is this educational?

Examples

- curriculum
- learning templates
- roadmap

Owner

Learning Platform

---

## Is this presentation?

Examples

- input forms
- progress bars
- portfolio
- UI cards

Owner

Landing

---

## Is this intelligence?

Examples

- Reflection Analysis
- Decision Review
- Coaching
- Memory
- Runtime reasoning

Owner

Runtime

---

# Responsibility Violations

Examples of incorrect responsibility placement.

## Learning Platform

Should NOT perform

- Reflection Analysis
- Runtime Coaching
- Runtime Memory

---

## Landing

Should NOT perform

- Reflection Analysis
- Runtime Questions
- Decision Review Generation
- Coaching Generation
- Runtime Memory

---

## Runtime

Should NOT perform

- React Components
- Portfolio Rendering
- UI Layout
- Learning Template Management

---

# Future Expansion

Future services should follow the same architectural principle.

Possible future service layers include:

- Team Learning
- Enterprise Administration
- Analytics
- Marketplace

Each service should own one primary responsibility.

---

# Maintenance Policy

The Service Responsibility Matrix should be updated whenever:

- a new service layer is introduced
- service ownership changes
- major architectural responsibilities move between layers

Routine implementation changes should not require modifications to this document.

---

# Foundation Principle

Education provides direction.

Presentation provides experience.

Intelligence provides understanding.

A service remains maintainable only when each responsibility belongs to one layer.

The Service Responsibility Matrix exists to preserve that separation throughout the evolution of the Fribot ecosystem.
