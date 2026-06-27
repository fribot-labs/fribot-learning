# SERVICE_DATA_FLOW.md

This document defines the official service-level data flow of the Fribot ecosystem.

Unlike the Repository Boundary documents, which define ownership, this document describes how information moves through the system during normal operation.

The goal is to ensure that every service interaction follows the intended architecture.

---

# Purpose

The Fribot ecosystem is composed of multiple repositories.

Each repository owns a specific responsibility.

This document explains how data flows across those repositories to provide a unified learning experience.

---

# High-Level Service Flow

```
Learner

↓

Fribot Learning

↓

InnerMirror Landing

↓

Runtime API

↓

InnerMirror Runtime

↓

Structured Runtime Response

↓

InnerMirror Landing

↓

Learner
```

The learner interacts only with the Landing.

The Runtime remains completely invisible.

---

# MVP Learning Flow

The MVP follows the sequence below.

```
Project

↓

Reflection

↓

Reflect + GitHub Analyze

↓

GitHub Snapshot

↓

Runtime Analysis

↓

PBL Coaching

↓

Decision Review

↓

Portfolio Update
```

Each stage contributes one responsibility.

---

# Repository Data Flow

## Step 1

Learning Platform

Provides

- project definition
- milestone structure
- learning roadmap
- project metadata

Output

```
Project Context
```

---

## Step 2

Landing

Collects

- Reflection
- selected repository
- selected project
- GitHub synchronization request

Landing creates a Runtime request.

Output

```
Reflection Runtime Request
```

Landing performs no analysis.

---

## Step 3

GitHub Snapshot

During MVP

Landing requests manual synchronization.

Snapshot includes

- latest commits
- recent pull requests

Output

```
GitHub Snapshot
```

No background monitoring is performed.

---

## Step 4

Runtime Input

Runtime receives

```
Reflection

+

GitHub Snapshot

+

Project Context
```

The Runtime converts these inputs into a Runtime Pipeline Context.

---

## Step 5

Runtime Processing

Typical Runtime sequence

```
Reflection Analysis

↓

Reflection Summary

↓

Continuity

↓

Decision Review

↓

PBL Coaching

↓

Memory

↓

Runtime Response
```

Each Runtime module contributes one responsibility.

---

## Step 6

Runtime Response

The Runtime returns structured information.

Examples

- Reflection Summary
- Runtime Questions
- Continuity Signal
- Decision Review
- Coaching
- Memory Status
- Diagnostics

The Runtime never returns UI instructions.

---

## Step 7

Landing Presentation

Landing converts Runtime responses into UI.

Examples

- coaching card
- portfolio section
- progress visualization
- continuity surface
- timeline display

Landing owns presentation.

Runtime owns meaning.

---

# Runtime Data Model

```
Reflection

+

GitHub Snapshot

+

Project Context

↓

Pipeline Context

↓

Runtime Modules

↓

Structured Runtime Response
```

Every Runtime response should be presentation-independent.

---

# Data Ownership

| Data | Owner |
|------|-------|
| Learning Templates | fribot-learning |
| Project Metadata | fribot-learning |
| Reflection Input | innermirror-landing |
| GitHub Snapshot | innermirror-landing (collection) |
| Reflection Analysis | innermirror-runtime-private |
| Decision Review | innermirror-runtime-private |
| PBL Coaching | innermirror-runtime-private |
| Runtime Memory | innermirror-runtime-private |
| Portfolio Display | innermirror-landing |

Ownership should never overlap.

---

# Runtime API Principle

Landing communicates with the Runtime through structured contracts.

```
Runtime Request

↓

Runtime Processing

↓

Runtime Response
```

Landing must never call internal Runtime modules directly.

---

# MVP Synchronization Policy

The MVP intentionally uses manual synchronization.

Current flow

```
Reflection

↓

Reflect + GitHub Analyze

↓

GitHub Snapshot

↓

Runtime
```

Automatic synchronization is intentionally postponed.

This reduces implementation complexity while preserving architectural clarity.

---

# Future Expansion

Future versions may extend the flow.

Examples

```
Reflection

↓

GitHub Snapshot

↓

Issue Tracker

↓

Project Knowledge

↓

Runtime

↓

Long-term Learning Context
```

New data sources should integrate through Runtime contracts rather than bypassing the Runtime.

---

# Architectural Rules

The following rules should always remain true.

Learning

provides educational context.

Landing

collects input and presents results.

Runtime

interprets information and generates intelligence.

No repository should perform another repository's responsibility.

---

# Foundation Principle

Data flows.

Responsibilities do not.

Every repository should preserve its architectural responsibility while allowing information to move safely across the ecosystem.

Clear data flow creates maintainable services.

Clear responsibilities create sustainable architecture.
