# Repository Roles

> **Foundation Documentation**
>
> This document defines the stable repository responsibilities of the Fribot
> and InnerMirror ecosystem.
>
> It translates the Learning Constitution, Runtime Constitution, and
> constitutional architecture into explicit repository boundaries.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> Repositories implement constitutional responsibilities.
>
> They do not redefine constitutional meaning.

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

Repository responsibilities should reflect these constitutional layers.

```text
Constitution

↓

Repository Responsibility

↓

Architecture

↓

Implementation

↓

User Experience
```

The Constitution defines enduring purpose and boundaries.

This document defines where implementation responsibilities belong.

---

# Purpose

This document permanently defines the primary responsibility of every
repository in the Fribot and InnerMirror ecosystem.

Every repository should have one clearly identifiable primary
responsibility.

Before implementing a new feature, developers should determine:

1. what user or system responsibility the feature serves,
2. whether private cognitive processing is required,
3. which repository owns that responsibility,
4. which contracts are required to connect repositories.

Repository selection should occur before implementation begins.

Technical convenience alone is not sufficient reason to place a feature in a
repository.

---

# Repository Boundary Principle

A repository boundary is an architectural and constitutional boundary.

Every feature should have one primary owner.

A feature may require collaboration across repositories, but its
responsibilities should be divided explicitly.

For example:

```text
Fribot Learning

↓

Creates the Project Experience

↓

InnerMirror Landing

↓

Receives Reflection

↓

InnerMirror Runtime

↓

Processes Continuity and Coaching

↓

Landing

↓

Presents the Result
```

A cross-repository feature should be connected through explicit contracts
rather than duplicated implementation.

---

# Repository Overview

| Repository | Visibility | Lifecycle | Primary Responsibility |
|---|---:|---|---|
| `fribot-learning` | Public | Active | Learner-facing PBL experiences and executable learning materials |
| `innermirror-landing` | Public | Active | Reflection entry and user-facing presentation |
| `innermirror-runtime-private` | Private | Active | Private Reflection processing, continuity, and coaching Runtime |
| `innermirror-engine-private` | Private | Research | Experimental decision and recommendation intelligence |
| `fribot-flow-timeline` | Private | Archive | Historical workflow, Reflection, and UX reference |

---

# Repository Lifecycle

The ecosystem distinguishes repositories by lifecycle as well as
responsibility.

## Active

Active repositories participate directly in the current service path.

New MVP functionality may be implemented here when it belongs to the
repository's approved responsibility.

Active repositories:

- `fribot-learning`
- `innermirror-landing`
- `innermirror-runtime-private`

---

## Research

Research repositories contain experimental work that is not yet part of the
official production path.

Ideas or components may later be promoted into an active repository after:

- architectural review,
- constitutional review,
- contract definition,
- privacy review,
- implementation validation.

Research repository:

- `innermirror-engine-private`

---

## Archive

Archive repositories preserve development history, previous experiments, and
architectural evidence.

They should not receive new MVP responsibilities.

Archive repository:

- `fribot-flow-timeline`

Bug fixes required for preservation may be allowed, but new product
capabilities should be implemented in an active repository.

---

# Repository Responsibilities

---

# `fribot-learning`

## Visibility

Public

## Lifecycle

Active

## Primary Responsibility

Fribot Learning owns **learner-facing project experiences**.

It translates the Learning Constitution into:

- executable Starter Projects,
- project progression,
- observation structures,
- meaningful comparison,
- explanation after experience,
- transitions toward Reflection.

It is the educational implementation layer of the ecosystem.

---

## Owns

- Project-based learning experiences
- Starter Project structures
- Executable example code
- Hardware and software preparation guidance
- Learner-facing project progression
- Learning milestones
- Controlled modification activities
- Expected-output guidance
- Troubleshooting guidance
- Comparison structures
- Experience-following explanations
- Learning documentation
- Project references
- Educational templates
- Foundation Documentation
- Repository learning roadmap
- Transition points toward InnerMirror Reflection

---

## Does Not Own

- Private Reflection analysis
- Personal cognitive interpretation
- Continuity scoring
- Identity interpretation
- Long-term learner memory
- Adaptive coaching intelligence
- Recommendation scoring
- Runtime orchestration
- Private user data
- Landing presentation state
- Authentication ownership for the InnerMirror service

---

## Reflection Boundary

Fribot Learning may design an experience in which Reflection naturally
becomes meaningful.

It may provide:

- Reflection transition language,
- questions about changed understanding,
- links or guidance toward InnerMirror.

It must not:

- interpret the learner's Reflection,
- assign a cognitive score,
- infer identity,
- maintain long-term personal memory,
- decide coaching strategy.

```text
Fribot Learning

↓

Creates Conditions for Reflection

↓

InnerMirror

↓

Receives and Preserves Reflection
```

---

## Boundary Test

A responsibility likely belongs to Fribot Learning when it helps the learner:

- prepare,
- run,
- observe,
- modify,
- compare,
- understand,
- or move naturally toward Reflection.

A responsibility does not belong here when it privately interprets the
learner across time.

---

## Future Role

Remain the primary public learning implementation of the Learning
Constitution.

The repository may support additional domains in the future while preserving
the same constitutional learning principles.

---

# `innermirror-landing`

## Visibility

Public

## Lifecycle

Active

## Primary Responsibility

InnerMirror Landing owns the **user-facing Reflection interface and Runtime
result presentation**.

It is the public interaction boundary between the user and private Runtime.

---

## Owns

- Reflection editor
- Reflection submission flow
- GitHub authentication entry
- Repository selection interface
- User-triggered GitHub analysis controls
- Runtime request initiation
- Loading and error states
- Runtime result presentation
- Coaching visualization
- Continuity visualization
- Reflection history presentation when authorized
- User-facing accessibility and interaction
- Public contract adaptation
- Recoverable user experience when Runtime is unavailable

---

## Does Not Own

- Reflection interpretation
- Continuity computation
- Coaching strategy selection
- Recommendation scoring
- Identity interpretation
- Long-term cognitive memory
- Private Runtime orchestration
- Learning project ownership
- PBL curriculum design
- Starter Project materials

---

## Presentation Boundary

Landing presents approved Runtime results.

It should not independently reproduce Runtime intelligence.

```text
Landing

↓

Collects User Input

↓

Calls Runtime Contract

↓

Receives Approved Result

↓

Presents Result
```

Client-side fallback behavior may protect the user experience, but it must not
become a second private reasoning engine.

---

## Boundary Test

A responsibility likely belongs to Landing when it determines:

- how users enter Reflection,
- how users initiate analysis,
- how status and errors are presented,
- how approved results are displayed.

A responsibility belongs to Runtime when it determines what the Reflection
means across time.

---

## Future Role

Remain a lightweight, accessible, and replaceable presentation layer.

Its public interface may evolve without moving private intelligence into the
client.

---

# `innermirror-runtime-private`

## Visibility

Private

## Lifecycle

Active

## Primary Responsibility

InnerMirror Runtime owns **private Reflection processing and long-term
continuity support**.

It is the official production Runtime of the InnerMirror ecosystem.

---

## Owns

- Reflection normalization
- Reflection analysis
- GitHub Snapshot analysis
- Continuity analysis
- Longitudinal context
- Runtime memory
- Pacing decisions
- Coaching response generation
- Decision Review support
- Pattern recognition across Reflections
- Identity-continuity support within constitutional boundaries
- Runtime orchestration
- Private processing contracts
- Runtime validation
- Approved production intelligence
- Secure handling of personal cognitive data

---

## Does Not Own

- Learner-facing project content
- Starter Project design
- Public curriculum
- Hardware instructions
- User-interface rendering
- Landing layout and interaction
- Public presentation decisions
- Experimental intelligence that has not passed review
- Constitutional authority

---

## Learning Boundary

Runtime should not create the learner-facing experience that produces
learning.

Fribot Learning creates the experience.

Runtime preserves and supports the consequences of that experience.

```text
Fribot Learning

↓

Experience

↓

Reflection

↓

Runtime

↓

Continuity and Coaching
```

Runtime should not turn every project event into cognitive interpretation
without meaningful user participation and approved contracts.

---

## Landing Boundary

Runtime produces structured results.

Landing presents them.

Runtime may define:

- summary,
- pacing,
- next question,
- continuity signal,
- approved diagnostic metadata.

Runtime should not define visual layout or presentation behavior.

---

## Engine Boundary

Runtime owns approved production intelligence.

Experimental algorithms belong to `innermirror-engine-private` until they
pass architectural, privacy, and constitutional review.

Code should not be copied informally between the two repositories without a
migration decision.

---

## Boundary Test

A responsibility likely belongs to Runtime when it:

- privately interprets Reflection,
- connects personal context across time,
- selects an approved coaching response,
- preserves continuity,
- processes sensitive cognitive data.

---

## Future Role

Remain the official production Runtime.

New intelligence should enter Runtime only after explicit review and
promotion from research or approved development work.

Not all future AI intelligence must converge into Runtime merely because it
uses AI.

Only intelligence serving the approved Runtime responsibility belongs here.

---

# `innermirror-engine-private`

## Visibility

Private

## Lifecycle

Research

## Primary Responsibility

InnerMirror Engine owns **experimental decision, recommendation, and coaching
intelligence research**.

It is not part of the official MVP execution path.

---

## Owns

- Recommendation experiments
- Decision-intelligence research
- State-analysis experiments
- Coaching-strategy experiments
- Scoring models
- Feedback-driven learning experiments
- Prompt-contract research
- Experimental orchestration concepts
- Future cognitive-model prototypes
- Evaluation of alternative intelligence approaches

---

## Does Not Own

- Production Runtime responsibility
- Direct public user interaction
- Learner-facing educational projects
- Official Reflection storage
- Production continuity memory
- Constitutional authority
- Unreviewed access to personal user data

---

## Research Boundary

Research results are not automatically production capabilities.

Experimental success does not by itself authorize migration.

Before promotion, a component should be reviewed for:

- constitutional alignment,
- repository responsibility,
- privacy,
- security,
- explainability,
- contract compatibility,
- operational reliability.

---

## Migration Policy

A useful component may migrate into:

```text
innermirror-runtime-private
```

only after explicit architectural approval.

Migration should define:

- the responsibility being transferred,
- the approved contract,
- privacy implications,
- test coverage,
- deprecated experimental code,
- ownership after migration.

After migration, the production version belongs to Runtime.

The research repository may retain experimental history where useful.

---

## Future Role

Remain a private environment for intelligence research without destabilizing
the production Runtime.

---

# `fribot-flow-timeline`

## Visibility

Private

## Lifecycle

Archive

## Primary Responsibility

Fribot Flow Timeline preserves the historical evolution of the original
workflow, Reflection, and UX experiments.

---

## Contains

- Reflection Timeline experiments
- Workflow models
- Decision-history experiments
- UX prototypes
- Runtime prototypes
- Historical implementation evidence
- Previous architectural assumptions
- Development lineage

---

## Does Not Own

- New MVP functionality
- Production Runtime responsibility
- Current Landing responsibility
- Current PBL project development
- New cognitive intelligence
- Constitutional authority

---

## Archive Boundary

Archived code may be consulted as evidence or inspiration.

It should not be treated automatically as current architecture.

Any reused idea should be re-evaluated against:

- current Constitution,
- repository boundaries,
- privacy requirements,
- current contracts,
- MVP scope.

---

## Future Role

Remain a historical reference and knowledge-preservation repository.

No new core service responsibility should be assigned to it.

---

# Cross-Repository Service Flow

The primary ecosystem flow is:

```text
fribot-learning

↓

Learner Project Experience

↓

InnerMirror Landing

↓

Reflection Entry and User-Triggered Analysis

↓

InnerMirror Runtime

↓

Private Analysis, Continuity, and Coaching

↓

InnerMirror Landing

↓

Approved Result Presentation
```

Research may support this flow indirectly:

```text
innermirror-engine-private

↓

Reviewed Research Result

↓

Approved Migration

↓

innermirror-runtime-private
```

The archive does not participate in the active flow.

---

# Repository Selection Guide

Before implementation, identify the primary responsibility.

## Does this create or improve a learner-facing project experience?

→ `fribot-learning`

Examples:

- Starter Project
- executable example
- expected-output document
- troubleshooting document
- comparison exercise
- explanation after execution

---

## Does this collect Reflection or present approved results?

→ `innermirror-landing`

Examples:

- Reflection editor
- submit button
- loading state
- error presentation
- continuity card
- next-question presentation

---

## Does this privately interpret Reflection or preserve continuity?

→ `innermirror-runtime-private`

Examples:

- Reflection analysis
- continuity strength
- pacing
- coaching strategy
- long-term context
- private memory

---

## Is this unapproved intelligence research?

→ `innermirror-engine-private`

Examples:

- experimental recommendation scoring
- new coaching-selection model
- alternative decision-analysis method
- future intelligence prototype

---

## Is this historical evidence or preserved implementation history?

→ `fribot-flow-timeline`

---

# Boundary Conflict Resolution

When a feature appears to belong to more than one repository:

1. Identify the learner-visible or user-visible experience.
2. Identify any private cognitive processing.
3. Separate presentation from interpretation.
4. Separate production responsibility from research.
5. Assign one owner to each responsibility.
6. Connect the responsibilities through explicit contracts.
7. Update architecture documentation when the boundary materially changes.

A cross-repository feature does not justify duplicated responsibility.

---

# Responsibility Leakage Prohibitions

The following responsibility leakage should be avoided.

## Fribot Learning must not:

- calculate continuity scores,
- interpret identity,
- maintain private cognitive memory,
- select personalized coaching strategies.

## Landing must not:

- independently analyze Reflection,
- select private coaching strategy,
- reproduce production Runtime intelligence,
- store sensitive cognitive history without approved architecture.

## Runtime must not:

- own public project tutorials,
- define Starter Project learning progression,
- render user interfaces,
- silently absorb experimental intelligence.

## Engine must not:

- directly serve production users,
- become a second unofficial Runtime,
- use personal data without approved boundaries,
- redefine constitutional principles.

## Archive must not:

- receive new production responsibilities,
- be treated as the current source of architectural truth.

---

# Repository Change Policy

Repository responsibilities are intended to remain stable.

However, stability does not mean immutability.

A responsibility change requires:

- explicit architectural review,
- constitutional alignment review,
- affected repository identification,
- contract impact analysis,
- privacy and security review,
- migration plan,
- documentation update.

A responsibility should not move merely to simplify one Pull Request.

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

- constitutional clarity,
- educational clarity,
- maintainability,
- replaceability,
- scalability,
- privacy,
- security,
- long-term evolution.

Repositories may evolve internally.

Their primary responsibilities should remain understandable.

---

# Pull Request Boundary Checklist

Every cross-repository or boundary-sensitive Pull Request should confirm:

- [ ] The primary responsibility is identified.
- [ ] The owning repository is correct.
- [ ] Public experience and private interpretation are separated.
- [ ] Learning and Runtime responsibilities are not mixed.
- [ ] Landing and Runtime responsibilities are not duplicated.
- [ ] Research has not entered production without review.
- [ ] Archived code has not been treated as current authority.
- [ ] Required contracts are explicit.
- [ ] Sensitive data remains inside approved private boundaries.
- [ ] Related architecture documents are updated when necessary.

---

# Foundation Principle

Repositories represent responsibilities.

Responsibilities define architecture.

Constitution defines why those responsibilities exist.

```text
Constitution

↓

Responsibility

↓

Repository

↓

Contract

↓

Implementation
```

Stable boundaries allow repositories to evolve independently without losing
the identity of the ecosystem.

Every repository should remain focused on one primary responsibility.