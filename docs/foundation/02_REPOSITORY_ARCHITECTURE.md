# 02_REPOSITORY_ARCHITECTURE.md

> **Foundation Documentation**
>
> This document is part of the Fribot Foundation Documentation.
>
> The Foundation Documentation defines the long-term architectural, philosophical, and development principles of the Fribot ecosystem.
>
> All MVP and future development should follow these documents unless explicitly superseded by a later foundation revision.

---

# Repository Architecture

## Purpose

This document defines the official repository architecture of the Fribot ecosystem.

Its purpose is to establish clear responsibilities, maintain long-term scalability, and protect private decision intelligence while keeping the public learning platform simple.

Repository responsibilities defined here should remain stable throughout the MVP and future development.

---

# System Overview

```
Learner

↓

Fribot Learning (Public)

↓

InnerMirror Landing (Public)

↓

InnerMirror Runtime (Private)

↓

GitHub API

↓

Decision Intelligence

↓

Growth Portfolio
```

The Fribot ecosystem is intentionally separated into public and private repositories.

Public repositories provide learning experiences.

Private repositories process decision intelligence.

---

# Repository Topology

```
fribot-learning
        │
        ▼
innermirror-landing
        │
        ▼
innermirror-runtime-private
        │
        ├──────── GitHub API
        │
        ├──────── Reflection Analysis
        │
        ├──────── Decision Review
        │
        ▼
Growth Portfolio
```

Historical repositories remain available as development references but are not part of the active MVP execution path.

---

# Active Repository Structure

## fribot-learning

Visibility

Public

Purpose

- Project-based coding education
- Learning platform
- Foundation documentation
- Project management
- Educational content

Responsibilities

- learning workflow
- project templates
- onboarding
- documentation

Does NOT contain

- runtime logic
- AI analysis
- decision engine

---

## innermirror-landing

Visibility

Public

Purpose

User-facing interface for the InnerMirror experience.

Responsibilities

- Reflection input
- GitHub connection
- "Reflect + GitHub Analyze"
- Coaching visualization
- Portfolio visualization

Does NOT contain

- decision logic
- runtime analysis
- memory engine
- coaching algorithms

Landing should remain a presentation layer.

---

## innermirror-runtime-private

Visibility

Private

Purpose

Official runtime of the Fribot ecosystem.

Responsibilities

- Reflection processing
- GitHub Snapshot analysis
- Continuity intelligence
- Memory management
- PBL Coaching
- Decision Review
- Senior Thinking Checkpoints

The Runtime is the only repository allowed to process cognitive learning data.

---

# Research Repository

## innermirror-engine-private

Visibility

Private

Status

Research Repository

Purpose

Stores earlier research on recommendation engines and decision intelligence.

Current MVP Status

Inactive.

Not part of the active runtime execution path.

Research areas include

- recommendation engine
- state analysis
- coaching evolution
- hybrid recommendation
- prompt contracts

Future Policy

Useful components may later be migrated into the official Runtime after architectural review.

The repository itself remains as a research archive.

---

# Historical Repository

## fribot-flow-timeline

Visibility

Private

Status

Historical Development Archive

Purpose

Preserve the early evolution of the Reflection Engine and experimental UX.

Contains

- Reflection Timeline
- Workflow experiments
- Prototype Runtime
- UX research

Current MVP Status

Archive.

New MVP features should not be implemented here.

The repository remains available for reference and knowledge preservation.

---

# Public / Private Boundary

## Public Layer

Repositories

- fribot-learning
- innermirror-landing

Contains

- educational content
- user interface
- project management
- GitHub authentication
- portfolio visualization

Never stores

- cognitive models
- runtime reasoning
- coaching logic
- decision analysis

---

## Private Layer

Repositories

- innermirror-runtime-private
- innermirror-engine-private (research)

Contains

- decision intelligence
- coaching engine
- reflection processing
- memory
- runtime orchestration

Private repositories must never expose internal decision models through public source code.

---

# Runtime Boundary

The Runtime operates as an independent service.

```
Landing

↓

Runtime API

↓

GitHub Snapshot

↓

Reflection Analysis

↓

Decision Review

↓

Coaching Result
```

Landing requests analysis.

Runtime performs analysis.

Landing displays results.

Responsibilities should never be mixed.

---

# Data Flow

```
Project

↓

GitHub Repository

↓

Commit

↓

Pull Request

↓

Reflection

↓

Runtime Analysis

↓

Decision Review

↓

PBL Coaching

↓

Growth Portfolio
```

Every learning cycle is built around real software development.

The platform records both software evolution and decision evolution.

---

# Security Architecture

The architecture intentionally separates public learning from private reasoning.

GitHub data remains under the learner's ownership.

Reflection history is treated as sensitive cognitive data.

Private Runtime processes

- reflections
- decision history
- coaching
- long-term learning trajectory

Only processed results are returned to the public interface.

---

# Repository Migration Policy

Every new feature must answer the following questions before implementation.

1. Which repository owns this responsibility?

2. Does this feature belong to the public layer or private runtime?

3. Does it introduce unnecessary coupling?

4. Can it be implemented without breaking repository boundaries?

If the answer is unclear, repository architecture should be reviewed before implementation.

---

# Long-Term Expansion

The current architecture intentionally excludes

- GitHub Webhooks
- background synchronization
- organization management
- multiple repository aggregation
- enterprise orchestration

These features belong to future development phases after the MVP architecture has stabilized.

---

# Foundation Principle

Repository boundaries are part of the architecture.

Architecture protects long-term maintainability.

Every repository should have one primary responsibility.

Stable boundaries create stable software.
