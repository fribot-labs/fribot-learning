# Repository Boundary

> **Architecture Documentation**
>
> This document defines the official responsibility boundary of the
> `fribot-learning` repository.
>
> It translates the Learning Constitution and Foundation Documentation into
> explicit architectural constraints.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> This document defines implementation boundaries.
>
> It does not redefine constitutional meaning.

---

# Constitutional Basis

The InnerMirror ecosystem is governed by three constitutional layers.

```text
Human Growth Constitution

↓

Learning Constitution

↓

Runtime Constitution
```

`fribot-learning` primarily implements the Learning Constitution.

Its architectural role is to transform constitutional learning principles
into learner-facing project experiences.

```text
Learning Constitution

↓

Fribot Foundation Documentation

↓

Repository Boundary

↓

Project Architecture

↓

Learner-Facing Projects
```

The repository should preserve the following learning principles:

- Learning Principle Zero
- Comparison-Based Learning
- Experience Before Explanation
- Reflection Emergence

The highest governing learning principle is:

> **Learning does not begin with explanation.**
>
> **Learning begins when expectation meets reality.**

---

# Purpose

This document prevents responsibility confusion among:

- the public learning repository,
- the public InnerMirror interface,
- the private Runtime,
- the experimental intelligence repository,
- and the historical archive.

Before implementing a feature, developers should determine:

1. what learner or user responsibility the feature serves,
2. whether private cognitive processing is required,
3. which repository owns each responsibility,
4. which contracts are required between repositories.

A feature should not be added to `fribot-learning` merely because it is
technically convenient.

It belongs here only when its primary responsibility is learner-facing
education or project experience.

---

# Repository Identity

`fribot-learning` is the official public implementation of the Fribot
Learning Constitution.

It is a **project-based coding and engineering learning repository**.

Its primary responsibility is:

> **Designing and delivering executable learner-facing experiences through
> which observation, comparison, understanding, and Reflection can naturally
> emerge.**

It is not a private intelligence service.

It does not analyze the learner's identity or maintain long-term cognitive
memory.

---

# Primary Responsibility

`fribot-learning` owns learner-facing project experiences.

It translates constitutional principles into:

```text
Expectation

↓

Execution

↓

Observation

↓

Comparison

↓

Explanation

↓

Understanding

↓

Reflection Transition
```

The repository may create the conditions in which Reflection becomes
meaningful.

It does not privately interpret Reflection after it is submitted.

---

# This Repository Owns

`fribot-learning` owns the following responsibilities.

## Learning Experience

- Project-based learning structures
- Coding and engineering learning projects
- Starter Projects
- Executable example code
- Controlled modification activities
- Learner-facing milestones
- Project progression
- Observable completion criteria

---

## Learning Materials

- Project README documents
- Environment preparation instructions
- Hardware and software setup guidance
- Expected-output documentation
- Troubleshooting documentation
- Explanation-after-experience documents
- Reference materials
- Learner-facing diagrams and examples
- Public curriculum materials

---

## Comparison Structures

- Prediction versus actual result
- Original versus modified implementation
- Procedural versus class-based structure
- Single-controller versus dual-controller architecture
- Local versus distributed responsibility
- Learner-generated versus AI-generated implementation

Every substantial learning project should intentionally provide at least one
meaningful comparison where applicable.

---

## Reflection Transition

`fribot-learning` may provide:

- questions about changed understanding,
- prompts about unexpected results,
- prompts about revised assumptions,
- links toward InnerMirror,
- guidance for recording Reflection.

It may design an experience that naturally makes Reflection valuable.

It does not own the private interpretation of that Reflection.

---

## Repository Documentation

- Foundation Documentation
- Architecture Documentation
- Learning content standards
- Project-template standards
- Repository development principles
- Public roadmap documentation
- Versioning documentation
- Security guidance for public learning content
- License and contribution guidance

---

# This Repository Does Not Own

`fribot-learning` must not contain or own the following responsibilities.

## Private Cognitive Processing

- Private Reflection analysis
- Identity interpretation
- Cognitive profiling
- Continuity scoring
- Long-term learner memory
- Personal growth inference
- Private decision intelligence

---

## Runtime Intelligence

- Runtime orchestration
- Coaching-strategy selection
- Recommendation scoring
- Pacing computation
- Longitudinal pattern recognition
- Reflection normalization for private analysis
- Memory retrieval and persistence
- GitHub Snapshot interpretation for coaching

---

## Public Service Interface

- InnerMirror Reflection editor
- Live Reflection submission state
- Runtime result visualization
- Production authentication flow
- Runtime request retry behavior
- User-facing Runtime error presentation
- Live portfolio visualization

These belong to `innermirror-landing`.

---

## Experimental Intelligence

- Experimental recommendation models
- Unapproved decision-scoring systems
- Experimental coaching-selection logic
- Research prompt orchestration
- Future cognitive-model prototypes

These belong to `innermirror-engine-private` until reviewed and promoted.

---

# Reflection Boundary

The Reflection boundary is especially important.

`fribot-learning` creates:

```text
Project Experience

↓

Observation

↓

Comparison

↓

Changed Understanding

↓

Reason to Reflect
```

InnerMirror Landing receives the Reflection.

InnerMirror Runtime privately processes and preserves it.

```text
fribot-learning

↓

Creates Conditions for Reflection

↓

innermirror-landing

↓

Receives Reflection

↓

innermirror-runtime-private

↓

Processes Continuity and Coaching
```

`fribot-learning` may ask:

> What changed in your understanding?

It must not privately determine:

> What does this reveal about your identity or long-term cognitive pattern?

---

# Boundary with `innermirror-landing`

## Landing Primary Responsibility

`innermirror-landing` owns the public user interface of InnerMirror.

It is responsible for interaction between the user and private Runtime.

---

## Landing Owns

- Reflection editor
- Reflection submission
- GitHub authentication entry
- Repository-selection interface
- User-triggered GitHub analysis controls
- Runtime request initiation
- Loading state
- Error presentation
- Coaching-result presentation
- Continuity visualization
- User-facing interaction and accessibility

---

## Landing Does Not Own

- Learning project design
- Starter Project content
- Private Reflection interpretation
- Continuity computation
- Coaching-strategy selection
- Long-term cognitive memory
- Decision-intelligence algorithms

---

## Boundary Test

A feature belongs to Landing when it primarily determines:

- how the user enters Reflection,
- how the user initiates analysis,
- how the service displays state,
- how approved Runtime results are presented.

A feature belongs to Fribot Learning when it primarily helps a learner:

- prepare,
- run,
- observe,
- compare,
- understand,
- or reach a meaningful Reflection point.

---

# Boundary with `innermirror-runtime-private`

## Runtime Primary Responsibility

`innermirror-runtime-private` owns private Reflection processing, continuity,
and approved production coaching intelligence.

---

## Runtime Owns

- Reflection analysis
- GitHub Snapshot analysis
- Reflection continuity
- Longitudinal context
- Runtime memory
- Pacing
- Coaching-result generation
- Decision Review support
- Private cognitive interpretation
- Runtime orchestration
- Production contracts
- Secure processing of personal cognitive data

---

## Runtime Does Not Own

- Public curriculum
- Starter Project design
- Hardware instructions
- Learner-facing project progression
- Public learning documentation
- UI rendering
- Landing visual behavior
- Unreviewed experimental intelligence
- Constitutional authority

---

## Boundary Test

A feature belongs to Runtime when it:

- privately interprets learner Reflection,
- connects personal context across time,
- produces approved coaching output,
- maintains continuity,
- or handles sensitive cognitive data.

A feature belongs to Fribot Learning when it creates the experience that may
eventually produce Reflection.

---

# Boundary with `innermirror-engine-private`

## Engine Primary Responsibility

`innermirror-engine-private` is a private research environment for
experimental decision, recommendation, and coaching intelligence.

It is not part of the official MVP execution path.

---

## Engine May Contain

- Recommendation experiments
- Decision-intelligence prototypes
- Coaching-strategy experiments
- Scoring experiments
- Prompt-contract research
- Alternative state-analysis models
- Future cognitive-model prototypes

---

## Engine Must Not Own

- Production Runtime responsibility
- Direct public user interaction
- Learner-facing project content
- Official Reflection storage
- Production continuity memory
- Constitutional authority

---

## Migration Rule

Useful research may move into `innermirror-runtime-private` only after:

- constitutional review,
- architectural review,
- privacy review,
- contract definition,
- validation,
- and explicit ownership transfer.

Experimental success alone does not authorize production use.

---

# Boundary with `fribot-flow-timeline`

## Archive Primary Responsibility

`fribot-flow-timeline` preserves historical workflow, Reflection, Runtime,
and UX experiments.

---

## Archive May Contain

- Reflection Timeline experiments
- Workflow models
- UX prototypes
- Runtime prototypes
- Historical architecture
- Previous implementation evidence
- Development lineage

---

## Archive Must Not Own

- New MVP functionality
- Current PBL development
- Production Runtime responsibility
- Current Landing responsibility
- New intelligence services
- Constitutional authority

Historical code may be consulted.

It should not automatically be treated as current architecture.

---

# Cross-Repository Service Flow

The active service flow is:

```text
fribot-learning

↓

Learner Project Experience

↓

Observation and Comparison

↓

InnerMirror Landing

↓

Reflection Submission

↓

InnerMirror Runtime

↓

Private Continuity and Coaching

↓

InnerMirror Landing

↓

Approved Result Presentation
```

Research supports this flow indirectly.

```text
innermirror-engine-private

↓

Reviewed Research Result

↓

Approved Migration

↓

innermirror-runtime-private
```

`fribot-flow-timeline` does not participate in the active execution path.

---

# Feature Placement Guide

Use this guide before implementing new functionality.

| Feature Type | Correct Repository |
|---|---|
| Starter Project | `fribot-learning` |
| Executable learner example | `fribot-learning` |
| Project-based curriculum | `fribot-learning` |
| Expected-output guide | `fribot-learning` |
| Troubleshooting guide | `fribot-learning` |
| Comparison activity | `fribot-learning` |
| Explanation after project experience | `fribot-learning` |
| Reflection transition question | `fribot-learning` |
| Reflection editor | `innermirror-landing` |
| GitHub connection interface | `innermirror-landing` |
| Reflect + GitHub Analyze button | `innermirror-landing` |
| Runtime loading or error display | `innermirror-landing` |
| Coaching-result presentation | `innermirror-landing` |
| Private Reflection analysis | `innermirror-runtime-private` |
| GitHub Snapshot interpretation | `innermirror-runtime-private` |
| Continuity computation | `innermirror-runtime-private` |
| Pacing and coaching generation | `innermirror-runtime-private` |
| Long-term private memory | `innermirror-runtime-private` |
| Experimental recommendation model | `innermirror-engine-private` |
| Experimental scoring system | `innermirror-engine-private` |
| Historical implementation reference | `fribot-flow-timeline` |

---

# Implementation Rule

Before adding a feature to `fribot-learning`, ask:

1. Does this create or improve a learner-facing project experience?
2. Can the learner execute, observe, modify, or compare something?
3. Is this public educational documentation?
4. Does it implement the Learning Constitution?
5. Does it avoid private interpretation of the learner?
6. Does it preserve the boundary with Landing and Runtime?

The feature may belong to `fribot-learning` when the primary answers concern
learning experience and public educational implementation.

It does not belong here when it primarily performs:

- private analysis,
- continuity,
- coaching selection,
- personal memory,
- identity interpretation,
- recommendation intelligence.

---

# Boundary Conflict Resolution

When a feature appears to belong to multiple repositories:

1. Identify the learner-visible or user-visible experience.
2. Identify any private cognitive processing.
3. Separate presentation from interpretation.
4. Separate production responsibility from research.
5. Assign one primary owner to each responsibility.
6. Define explicit contracts between repositories.
7. Update architectural documentation if the boundary changes.

A cross-repository feature should not duplicate responsibility.

---

# Responsibility Leakage Prohibitions

## `fribot-learning` must not:

- calculate continuity scores,
- infer learner identity,
- store private cognitive memory,
- select personalized coaching strategies,
- embed private Runtime prompts,
- copy proprietary reasoning logic into public content.

## `innermirror-landing` must not:

- independently interpret Reflection,
- reproduce private Runtime intelligence,
- select coaching strategies,
- become a second Runtime.

## `innermirror-runtime-private` must not:

- own Starter Project content,
- define public curriculum,
- render the public interface,
- absorb experimental intelligence without review.

## `innermirror-engine-private` must not:

- directly serve production users,
- become an unofficial production Runtime,
- use personal data outside approved boundaries.

## `fribot-flow-timeline` must not:

- receive new production responsibility,
- be treated as the current architectural source of truth.

---

# Security Rule

`fribot-learning` is public.

It must never contain:

- learner cognitive data,
- private Reflection content,
- private Runtime memory,
- proprietary coaching logic,
- private reasoning prompts,
- identity-analysis logic,
- user-specific recommendation data,
- secrets or private credentials.

Public learning materials are allowed.

Private cognitive interpretation is not.

Security is a repository boundary, not a later implementation detail.

---

# Public Content Rule

Public learning content should be understandable without requiring access to
private Runtime logic.

A learner should be able to:

- access project materials,
- prepare the environment,
- run the project,
- observe behavior,
- compare results,
- understand the educational concept,

without exposing personal Reflection data.

InnerMirror integration should remain an optional or clearly separated
transition whenever private processing is involved.

---

# Pull Request Boundary Checklist

Every boundary-sensitive Pull Request should confirm:

- [ ] The learner-facing responsibility is clearly identified.
- [ ] `fribot-learning` is the correct primary owner.
- [ ] The feature implements rather than redefines the Learning Constitution.
- [ ] At least one meaningful learner experience is created or improved.
- [ ] Public experience and private interpretation remain separated.
- [ ] Reflection is supported without private analysis in this repository.
- [ ] Landing and Runtime responsibilities are not duplicated.
- [ ] Experimental intelligence remains outside the production path.
- [ ] Sensitive data remains inside approved private boundaries.
- [ ] Required contracts are explicit.
- [ ] Related architecture documents are updated when necessary.

---

# Long-Term Repository Strategy

The ecosystem intentionally separates:

```text
Constitutional Authority

↓

Learning Experience

↓

User Interface

↓

Private Runtime Intelligence

↓

Experimental Research

↓

Historical Archive
```

This separation improves:

- educational clarity,
- architectural clarity,
- maintainability,
- replaceability,
- scalability,
- privacy,
- security,
- long-term evolution.

Internal implementations may evolve.

Primary responsibilities should remain stable and understandable.

---

# Foundation Principle

`fribot-learning` creates meaningful learning experiences.

It does not privately interpret the learner.

```text
Learning Constitution

↓

Learner Experience

↓

Observation

↓

Comparison

↓

Understanding

↓

Reflection Transition
```

Repositories represent responsibilities.

Responsibilities define architecture.

Clear boundaries protect both the educational mission and the learner's
personal intellectual data.