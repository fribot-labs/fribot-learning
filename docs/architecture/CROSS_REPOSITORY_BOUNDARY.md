# Cross-Repository Boundary

> **Architecture Documentation**
>
> This document defines the official architectural boundaries and
> collaboration rules between repositories in the Fribot and InnerMirror
> ecosystem.
>
> It translates the constitutional layers, Foundation Documentation, and
> repository responsibilities into explicit cross-repository relationships.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> This document defines collaboration and integration boundaries.
>
> It does not redefine constitutional meaning or individual repository
> ownership.

---

# Constitutional Basis

The ecosystem is governed by three constitutional layers.

```text
Human Growth Constitution

↓

Learning Constitution

↓

Runtime Constitution
```

These layers are implemented through repositories with distinct
responsibilities.

```text
Constitutional Purpose

↓

Repository Responsibility

↓

Cross-Repository Contract

↓

Implementation

↓

User Experience
```

The Constitution defines why responsibilities exist.

Repository documents define who owns them.

This document defines how independently owned responsibilities collaborate.

---

# Purpose

Each repository owns one primary responsibility.

Repositories collaborate through:

- stable contracts,
- explicit public references,
- user-directed transitions,
- approved data flows,
- documented integration boundaries.

No repository should gradually absorb responsibilities that belong to another
repository.

The architecture is intentionally separated to preserve:

- constitutional clarity,
- educational clarity,
- privacy,
- security,
- maintainability,
- independent deployment,
- replaceability,
- scalability,
- long-term evolution.

Cross-repository integration should create one coherent user journey without
creating overlapping ownership.

---

# Core Collaboration Principle

Repositories may participate in one user journey.

They must not become one undifferentiated application.

```text
Learning Experience

↓

Reflection Interface

↓

Private Runtime Processing

↓

User-Facing Result
```

Each transition represents collaboration between independent
responsibilities.

The repositories should remain understandable and maintainable even when
another repository is temporarily unavailable.

---

# Repository Overview

## Active Repositories

| Repository | Visibility | Primary Responsibility |
|---|---:|---|
| `fribot-learning` | Public | Learner-facing projects and executable learning experiences |
| `innermirror-landing` | Public | Reflection entry and approved Runtime result presentation |
| `innermirror-runtime-private` | Private | Private Reflection processing, continuity, and production coaching |

## Supporting Repositories

| Repository | Visibility | Lifecycle | Primary Responsibility |
|---|---:|---|---|
| `innermirror-engine-private` | Private | Research | Experimental decision and recommendation intelligence |
| `fribot-flow-timeline` | Private | Archive | Historical workflow, Reflection, Runtime, and UX reference |

---

# Cross-Repository Responsibility Model

The primary active relationship is:

```text
fribot-learning

↓

Learner Project Experience

↓

innermirror-landing

↓

Reflection Entry

↓

innermirror-runtime-private

↓

Private Continuity and Coaching

↓

innermirror-landing

↓

Approved Result Presentation
```

This sequence describes a possible user journey.

It does not mean every repository directly depends on every preceding
repository.

For example:

- Fribot Learning projects should remain usable without private Runtime
  access.
- InnerMirror should accept Reflection that does not originate from a Fribot
  Learning project.
- Runtime should process approved inputs through contracts rather than
  depending on the internal structure of the learning repository.

---

# Learning → Reflection Transition

`fribot-learning` creates meaningful learner experiences.

Examples include:

- executable projects,
- expected behavior,
- controlled modification,
- observation,
- comparison,
- experience-following explanation,
- recognition of changed understanding.

The repository may guide the learner toward InnerMirror when Reflection has
become meaningful.

Possible transition mechanisms include:

- an InnerMirror link,
- a suggested Reflection question,
- a project identifier,
- a GitHub repository reference,
- a learner-selected commit or Pull Request,
- a summarized project context.

Fribot Learning does not submit private Reflection automatically unless an
approved user-facing workflow and contract explicitly support it.

The learner remains responsible for deciding whether to enter Reflection.

---

# Fribot Learning → Landing

Fribot Learning may provide public project context that helps a learner begin
Reflection.

Examples include:

- project title,
- project identifier,
- learning stage,
- project URL,
- relevant commit or Pull Request URL,
- suggested Reflection question,
- non-sensitive project summary.

Landing may use this information to prepare the Reflection experience.

```text
Public Project Context

+

Learner Decision to Reflect

↓

InnerMirror Landing
```

Fribot Learning must not provide:

- private cognitive interpretation,
- continuity scores,
- identity claims,
- hidden coaching instructions,
- personal memory,
- private user Reflection content.

---

# Landing → Runtime

Landing communicates with Runtime through stable, versioned contracts.

A typical Runtime request may contain:

```text
Reflection

+

Optional GitHub Snapshot

+

Optional Project Context

+

Request Metadata

↓

Runtime Contract
```

Landing is responsible for:

- collecting authorized user input,
- validating client-visible requirements,
- initiating the request,
- presenting request state,
- handling recoverable failures,
- mapping approved responses for display.

Landing must not independently interpret the learner's private cognitive
history.

It submits structured input.

Runtime performs private interpretation.

---

# Runtime Input Boundary

Runtime should receive only information required for the approved operation.

Possible input categories include:

- Reflection content,
- creation time,
- approved source identifier,
- optional project context,
- optional GitHub Snapshot,
- contract version,
- user-authorized continuity context.

Runtime input should not include unnecessary public-repository internals or
unrelated personal information.

Data minimization remains part of the cross-repository contract.

---

# Runtime → Landing

Runtime returns structured, contract-bound results.

Typical approved Runtime outputs may include:

- Reflection summary,
- pacing guidance,
- next question,
- continuity signal,
- related Reflection context,
- approved coaching message,
- recoverable error information,
- limited diagnostics.

Example flow:

```text
Private Runtime Processing

↓

Versioned Runtime Response

↓

Landing Adapter

↓

User-Facing Presentation
```

Landing decides how approved fields are visually presented.

Runtime decides the meaning of the structured result.

Runtime must not render UI or determine React component behavior.

Landing must not reinterpret private analysis into a separate intelligence
system.

---

# Runtime Response Boundary

Runtime responses should expose only approved information.

They should avoid exposing:

- internal reasoning traces,
- private prompts,
- experimental scores without governance,
- raw memory structures,
- proprietary model internals,
- unnecessary sensitive context.

The contract should provide enough information for a coherent user experience
without exposing private implementation details.

---

# Active Repository Ownership

## `fribot-learning`

### Owns

- Learner-facing projects
- Starter Projects
- Executable learning materials
- Project progression
- Expected-output guidance
- Troubleshooting guidance
- Meaningful comparison structures
- Explanation after experience
- Public educational documentation
- Reflection transition guidance

### Does Not Own

- Live Reflection input
- Private Reflection analysis
- Runtime memory
- Continuity computation
- Coaching-strategy selection
- User-interface presentation
- Private identity interpretation

---

## `innermirror-landing`

### Owns

- Reflection input
- Reflection submission
- GitHub connection interface
- Repository-selection interface
- User-triggered analysis controls
- Runtime API adapter
- Runtime response mapping
- Loading and error states
- Approved result visualization
- User-facing interaction

### Does Not Own

- Learning project design
- Starter Project content
- Reflection interpretation
- Decision Review generation
- Coaching-strategy generation
- Continuity computation
- Runtime memory
- Experimental intelligence research

---

## `innermirror-runtime-private`

### Owns

- Reflection normalization
- Private Reflection analysis
- Approved GitHub Snapshot analysis
- Runtime contracts
- Continuity intelligence
- Longitudinal context
- Runtime memory
- Pacing
- Approved coaching generation
- Decision Review support
- Runtime orchestration
- Secure cognitive processing

### Does Not Own

- React UI
- Public presentation
- Learning project content
- Starter Project templates
- Hardware instructions
- Public curriculum
- Experimental intelligence that has not passed review
- Constitutional authority

---

# Research → Production Boundary

`innermirror-engine-private` contains experimental intelligence research.

It may explore:

- recommendation models,
- decision scoring,
- coaching strategies,
- prompt contracts,
- state analysis,
- experimental orchestration,
- future cognitive models.

Research output does not automatically become production Runtime behavior.

The promotion flow should be:

```text
Experimental Research

↓

Evaluation

↓

Constitutional Review

↓

Architectural Review

↓

Privacy and Security Review

↓

Contract Definition

↓

Validated Migration

↓

Production Runtime Ownership
```

After migration, the approved production responsibility belongs to
`innermirror-runtime-private`.

The Engine may preserve experimental history, but it should not remain a
second unofficial production owner.

---

# Archive Boundary

`fribot-flow-timeline` preserves historical experiments.

It may be consulted for:

- previous workflow models,
- Reflection Timeline concepts,
- UX experiments,
- historical Runtime prototypes,
- architectural lineage,
- unfinished ideas.

Archive content should not be treated automatically as current architecture.

Any reused concept must be reviewed against:

- current Constitution,
- current repository responsibilities,
- current contracts,
- privacy requirements,
- MVP scope.

The Archive does not participate directly in the active service path.

---

# Contract Principles

Repositories communicate through stable and explicit contracts.

A contract should define:

- contract version,
- request fields,
- response fields,
- optional fields,
- validation rules,
- error behavior,
- privacy boundaries,
- ownership of each field,
- backward-compatibility expectations.

A contract should not expose another repository's internal implementation.

```text
Repository A

↓

Approved Contract

↓

Repository B
```

Direct access to another repository's private internal state is prohibited.

---

# Contract Ownership

Each contract should have an explicit owner.

Examples:

## Learning Context Reference

Primary owner:

- `fribot-learning`

Consumers may include:

- `innermirror-landing`
- `innermirror-runtime-private`

The contract should expose only public, non-sensitive project context.

---

## Reflection Request Contract

Primary owner:

- `innermirror-runtime-private`

Client implementer:

- `innermirror-landing`

Runtime defines the accepted processing contract.

Landing implements the public adapter.

---

## Runtime Response Contract

Primary owner:

- `innermirror-runtime-private`

Presentation consumer:

- `innermirror-landing`

Landing may normalize presentation-safe defaults but must not redefine the
semantic meaning of Runtime fields.

---

# Feature Ownership and Participation

A cross-repository feature may involve multiple participants while retaining
one owner for each responsibility.

Example:

```text
Feature:
Reflect on a completed Tandem Dual MCU project
```

Responsibilities:

| Responsibility | Owner |
|---|---|
| Project experience | `fribot-learning` |
| Reflection question suggestion | `fribot-learning` |
| Reflection editor | `innermirror-landing` |
| Reflection submission | `innermirror-landing` |
| GitHub Snapshot interpretation | `innermirror-runtime-private` |
| Continuity analysis | `innermirror-runtime-private` |
| Result presentation | `innermirror-landing` |

The overall feature is integrated.

The responsibilities remain separated.

---

# Repository Interaction Model

The complete active interaction model is:

```text
Learner

↓

Fribot Learning Project

↓

Run, Observe, Compare, Understand

↓

Optional InnerMirror Transition

↓

InnerMirror Landing

↓

Reflection and User-Authorized Context

↓

Runtime Contract

↓

InnerMirror Runtime

↓

Structured Approved Response

↓

InnerMirror Landing

↓

Learner
```

The learner remains an active participant at the transition points.

The ecosystem should not silently convert every project event into private
cognitive analysis.

---

# User Agency Rule

Cross-repository integration should preserve user agency.

The learner should understand when:

- leaving a public learning project,
- entering InnerMirror,
- submitting Reflection,
- connecting GitHub context,
- requesting Runtime analysis,
- receiving private coaching output.

Automatic transfer of personal cognitive information should not occur without
clear authorization and approved architecture.

---

# MVP Integration Policy

The MVP intentionally uses user-triggered synchronization.

Current workflow:

```text
Reflection

+

Reflect + GitHub Analyze

↓

Authorized GitHub Snapshot

↓

Runtime Analysis

↓

Structured Result
```

The Runtime analyzes the submitted or retrieved snapshot associated with the
user-triggered request.

The MVP excludes:

- background repository monitoring,
- continuous polling,
- automatic Reflection generation,
- automatic cognitive analysis,
- GitHub Webhooks,
- background schedulers,
- silent cross-repository synchronization.

Manual integration should first prove educational and product value.

---

# Repository Independence

Every repository should remain independently maintainable.

Independent maintenance means:

- internal implementation may evolve,
- tests can run within the repository's responsibility,
- deployment can occur separately where applicable,
- failures remain containable,
- contracts define external dependency,
- another repository can be replaced without redefining the Constitution.

Independence does not mean isolation.

Repositories collaborate through explicit boundaries.

---

# Failure Isolation

Cross-repository failure should degrade gracefully.

Examples:

## Runtime Unavailable

Landing should:

- preserve the learner's entered Reflection where appropriate,
- present a clear recoverable error,
- avoid pretending that private analysis occurred.

Fribot Learning projects should remain available.

---

## GitHub Context Unavailable

The learner should still be able to submit Reflection when the contract
allows it.

GitHub context is supplementary unless explicitly required for a specific
operation.

---

## Learning Repository Unavailable

InnerMirror should still support general Reflection independent of a Fribot
Learning project.

This preserves the constitutional independence of Reflection.

---

# Communication Rules

Repositories must not:

- import private source code from another repository,
- depend on undocumented internal file structures,
- duplicate private analysis logic,
- copy experimental intelligence into production without review,
- share sensitive data through public repository artifacts,
- redefine another repository's contract locally.

Repositories should:

- use versioned contracts,
- document assumptions,
- validate inputs and outputs,
- minimize shared data,
- preserve user authorization,
- update boundary documentation when responsibilities change.

---

# Responsibility Violations

## Fribot Learning must not perform:

- private Runtime analysis,
- continuity scoring,
- coaching-strategy generation,
- cognitive memory processing,
- identity interpretation.

---

## Landing must not perform:

- private Reflection analysis,
- Decision Review generation,
- continuity computation,
- independent Runtime reasoning,
- experimental recommendation scoring.

---

## Runtime must not perform:

- UI rendering,
- React component ownership,
- public curriculum management,
- Starter Project design,
- learner-facing hardware instruction,
- experimental research outside approved production responsibility.

---

## Engine must not perform:

- direct production user service,
- official Runtime memory ownership,
- public learner experience,
- unreviewed use of personal cognitive data.

---

## Archive must not perform:

- new MVP functionality,
- active service integration,
- current architectural governance.

---

# Boundary Conflict Resolution

When a feature appears to belong to multiple repositories:

1. Identify the user-visible experience.
2. Identify the learner-facing educational responsibility.
3. Identify private cognitive processing.
4. Identify presentation responsibility.
5. Separate research from production.
6. Assign one owner to each responsibility.
7. Define explicit contracts between owners.
8. Review privacy and security implications.
9. Update architecture documentation.
10. Implement repository-specific Pull Requests.

A cross-repository feature should normally produce more than one focused PR
rather than one repository absorbing all responsibilities.

---

# Cross-Repository Pull Request Strategy

Cross-repository development should follow this sequence:

```text
Responsibility Definition

↓

Contract PR

↓

Producer Implementation PR

↓

Consumer Adapter PR

↓

Integration Verification

↓

Documentation Update
```

Each PR should remain independently understandable.

For example:

```text
Runtime Contract

↓

Runtime Implementation

↓

Landing Adapter

↓

Landing Presentation

↓

Cross-Boundary Verification
```

---

# Cross-Repository Verification

An integrated feature is complete only when the following are verified:

- the correct repository owns each responsibility,
- contracts match on both sides,
- private data does not cross public boundaries improperly,
- failure states are understandable,
- user authorization is preserved,
- repositories remain independently testable,
- documentation reflects the actual service flow.

A feature working in one repository alone does not prove successful
integration.

---

# Future Expansion

Future repositories should follow the same architectural principles.

Possible future responsibilities may include:

- team learning,
- enterprise administration,
- public analytics,
- learning-resource marketplace,
- domain-specific project libraries,
- additional private continuity services.

A new repository should be created only when:

- a stable independent responsibility exists,
- the responsibility cannot be clearly owned by an existing repository,
- the boundary improves maintainability or security,
- contracts can be defined,
- lifecycle and ownership are explicit.

New repositories should not be created merely to reduce folder size or avoid
architectural decisions.

---

# Foundation Alignment

This document extends and must remain consistent with:

- `docs/foundation/01_FOUNDATION_PHILOSOPHY.md`
- `docs/foundation/02_REPOSITORY_ARCHITECTURE.md`
- `docs/foundation/03_DEVELOPMENT_PRINCIPLES.md`
- `docs/foundation/04_REPOSITORY_ROLES.md`
- `docs/architecture/REPOSITORY_BOUNDARY.md`
- `docs/architecture/SERVICE_RESPONSIBILITY_MATRIX.md`
- `docs/architecture/SERVICE_DATA_FLOW.md`

It does not replace individual Repository Boundary documents.

Individual boundary documents define one repository.

This document defines collaboration among repositories.

---

# Cross-Repository Review Checklist

Before merging a cross-repository feature, confirm:

- [ ] Each responsibility has one primary owner.
- [ ] Learning experience and private interpretation are separated.
- [ ] Presentation and Runtime intelligence are separated.
- [ ] Research and production responsibilities are separated.
- [ ] Contracts are explicit and versioned where necessary.
- [ ] Internal implementations are not accessed directly.
- [ ] Shared data is minimized.
- [ ] User authorization is preserved.
- [ ] Failure behavior is documented.
- [ ] Repository independence remains intact.
- [ ] Related Foundation and Architecture documents are updated.
- [ ] Integration verification has been completed.

---

# Foundation Principle

The Fribot and InnerMirror ecosystem is not one undifferentiated application.

It is a constitutional collaboration among independent responsibilities.

```text
Learning creates experience.

Landing enables interaction.

Runtime preserves continuity.

Engine explores future intelligence.

Archive preserves history.
```

Clear ownership creates stable architecture.

Stable contracts create coherent collaboration.

Coherent collaboration creates one continuous human-growth experience without
erasing repository boundaries.