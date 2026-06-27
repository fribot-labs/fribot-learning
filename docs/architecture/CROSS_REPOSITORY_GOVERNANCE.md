# CROSS_REPOSITORY_GOVERNANCE.md

This document defines the architectural governance between the active repositories of the Fribot ecosystem.

Unlike repository-specific governance documents, this document defines how multiple repositories collaborate while preserving clear ownership boundaries.

Its purpose is to ensure that the ecosystem evolves as one integrated service without allowing repository responsibilities to overlap.

---

# Purpose

The Fribot ecosystem consists of multiple independent repositories.

Each repository owns one primary architectural responsibility.

This document defines the governance rules that preserve those responsibilities while allowing the repositories to work together as one service.

---

# Governance Scope

Active repositories

```
fribot-learning

innermirror-landing

innermirror-runtime-private
```

Supporting repositories

```
innermirror-engine-private

fribot-flow-timeline
```

Governance focuses on:

- repository interaction
- service data flow
- responsibility ownership
- architectural consistency
- long-term maintainability

---

# Repository Responsibilities

## fribot-learning

Primary responsibility

- education
- learning templates
- project structure
- roadmap
- documentation

Should not own

- Runtime intelligence
- presentation
- Runtime memory

---

## innermirror-landing

Primary responsibility

- Reflection input
- GitHub connection
- Repository selection
- Runtime API Adapter
- Runtime Response Mapping
- Progress visualization
- Portfolio presentation
- Coaching presentation

Should not own

- Reflection analysis
- Decision Review generation
- PBL Coaching generation
- Runtime Memory

---

## innermirror-runtime-private

Primary responsibility

- Reflection Analysis
- GitHub Snapshot Analysis
- Reflection Summary
- Runtime Questions
- Continuity Intelligence
- Decision Review
- PBL Coaching
- Runtime Memory
- Runtime Orchestration

Should not own

- React UI
- Portfolio rendering
- Learning templates
- Public educational documentation

---

# Cross Repository Service Flow

The official service architecture is

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

No repository should bypass another repository's responsibility.

---

# Service Layer Governance

The Fribot ecosystem is intentionally divided into three service layers.

```
Education

↓

Presentation

↓

Intelligence
```

Responsibilities

Education

- defines learning

Presentation

- interacts with learners

Intelligence

- interprets learner data

These layers should remain independent.

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

Direct access to another repository's internal implementation is prohibited.

Only public contracts should be shared.

---

# Responsibility Rules

Before implementing a new feature, determine which repository owns the responsibility.

If the feature

- defines educational content

→ fribot-learning

If the feature

- collects user input
- presents Runtime results

→ innermirror-landing

If the feature

- analyzes learner data
- generates coaching
- performs Runtime reasoning

→ innermirror-runtime-private

If the feature

- explores experimental Runtime ideas

→ innermirror-engine-private

If the feature

- preserves historical implementations

→ fribot-flow-timeline

---

# Architectural Constraints

The following constraints must remain true.

Learning

does not analyze.

Landing

does not reason.

Runtime

does not present.

Repositories may exchange information.

Repositories must not exchange responsibilities.

---

# Governance Maintenance

This document should be reviewed whenever:

- repository responsibilities change
- service architecture changes
- Runtime contracts change
- new repositories are introduced

Routine implementation changes should not require modification of this document.

---

# Relationship with Other Documents

This document complements:

- REPOSITORY_BOUNDARY.md
- SERVICE_DATA_FLOW.md
- SERVICE_RESPONSIBILITY_MATRIX.md

Those documents describe structure.

This document defines governance.

---

# Foundation Principle

Repositories may evolve independently.

Services must evolve together.

Every repository should preserve one primary responsibility while contributing to one unified service architecture.

The purpose of governance is not to restrict development.

The purpose is to preserve clarity, maintainability, and long-term architectural consistency throughout the evolution of the Fribot ecosystem.
