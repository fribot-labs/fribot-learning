# Roadmap Documentation

The Roadmap Documentation defines the current implementation direction of the
Fribot Learning repository.

Unlike Foundation Documentation, roadmap documents are expected to evolve as
implementation progresses.

They describe:

- what is already complete,
- what remains required,
- what has been intentionally deferred,
- and in what order the remaining work should proceed.

The Roadmap does not redefine the Foundation, Constitution, or Architecture.

It translates those stable principles into an executable development order.

---

# Purpose

The purpose of this directory is to keep Fribot Learning focused on completing
one coherent MVP learner journey.

The Roadmap should answer:

```text
What is complete?

↓

What is still required?

↓

What can be deferred?

↓

What should be implemented next?
```

The current priority is not to maximize the number of features.

The priority is to complete and validate one usable learning path.

```text
Repository Entry

↓

Project Discovery

↓

Project Experience

↓

Meaningful Comparison

↓

Optional Reflection
```

---

# Documentation Relationship

The documentation hierarchy is intentionally organized.

```text
Foundation

↓

Constitution

↓

Architecture

↓

Roadmap

↓

Implementation

↓

Pull Requests
```

Each layer owns a different responsibility.

## Foundation

Defines permanent philosophy, repository identity, and development principles.

## Constitution

Defines governing learning principles and constitutional review requirements.

## Architecture

Defines repository responsibilities, service boundaries, and public project
structure.

## Roadmap

Defines current implementation status, remaining MVP gaps, and official
development order.

## Implementation

Creates or modifies learner-facing projects and repository navigation.

## Pull Requests

Record incremental implementation history.

The Roadmap must remain consistent with all higher documentation layers.

---

# Current Roadmap

The primary roadmap document is:

| Document | Purpose |
|---|---|
| [PBL MVP Master Development Plan](./PBL_MVP_MASTER_PLAN.md) | Defines the current MVP completion state, remaining release-critical work, Post-MVP exclusions, and official implementation order |

`PBL_MVP_MASTER_PLAN.md` is the current source of truth for MVP development
priority.

It should be consulted before introducing:

- a new project family,
- a new learning phase,
- a new platform dependency,
- GitHub automation,
- Runtime integration,
- or private intelligence.

---

# Current MVP Definition

The Fribot Learning MVP is not a complete learning-management or coaching
platform.

The current MVP is the smallest public system that allows a learner to:

1. discover an available project,
2. understand what is required,
3. open a prepared Starter Project,
4. run or inspect a real learning experience,
5. observe expected and actual behaviour,
6. compare what changed and what remained stable,
7. access troubleshooting and explanation,
8. optionally preserve work through GitHub,
9. optionally continue into a general InnerMirror Reflection.

The official learner journey is:

```text
Discover

↓

Start

↓

Experience

↓

Observe

↓

Compare

↓

Understand

↓

Optional Reflection
```

---

# Current MVP Priority

The current development priority is:

```text
Complete Existing Learner Journey

before

Adding New Learning Content
```

This means the repository should complete:

- root learning entry,
- project discovery,
- project start guidance,
- optional InnerMirror transition,
- end-to-end documentation verification,
- and release readiness,

before beginning:

- Class Concept Robot redevelopment,
- Tandem Phase 2,
- additional project families,
- reusable template extraction,
- advanced coaching,
- or automated integrations.

---

# Current Implementation Status

The following areas are currently considered complete or substantially
complete.

## Completed Foundations

- Foundation Documentation
- Constitution Application Documentation
- Repository Boundary Documentation
- Cross-Repository Governance
- Service Responsibility Documentation
- Project Template Architecture
- Documentation navigation

## Completed Learner-Facing Work

- Tandem Dual MCU course overview
- Tandem Starter Project navigation
- Program-Generated Commands
- User-Generated Commands
- Environment-Generated Commands
- What Changes / What Remains the Same comparison
- Reference Foundation for the sensor-based Starter Project
- Tandem Phase 1 completion guidance

The currently validated learner-facing unit is:

```text
Tandem Phase 1

Command Source Architecture
```

---

# Remaining MVP Work

The remaining release-critical work is organized around the learner journey.

```text
Repository Entry

↓

Project Discovery

↓

Project Start

↓

Optional Reflection

↓

End-to-End Verification

↓

Release Readiness
```

The remaining MVP work currently includes:

1. Repository Learning Entry Navigation
2. Project Catalog and Start Path
3. InnerMirror Reflection Link Integration
4. MVP End-to-End Documentation Verification
5. MVP Release Readiness

These responsibilities are defined in detail in:

- [PBL MVP Master Development Plan](./PBL_MVP_MASTER_PLAN.md)

---

# Official Remaining PR Order

The current official implementation order is:

```text
PR-PBL-019
MVP Completion Plan Alignment

↓

PR-PBL-020
Repository Learning Entry Navigation

↓

PR-PBL-021
Project Catalog and Start Path

↓

PR-PBL-022
InnerMirror Reflection Link Integration

↓

PR-PBL-023
MVP End-to-End Documentation Verification

↓

PR-PBL-024
MVP Release Readiness
```

The order may be consolidated only when responsibility boundaries remain
clear.

New educational content should not interrupt this sequence unless a direct
MVP release dependency is discovered.

---

# Roadmap Status Categories

Roadmap documents use the following status values.

| Status | Meaning |
|---|---|
| Complete | Implemented and documented |
| In Progress | Currently being implemented |
| Required | Necessary for MVP release but incomplete |
| Deferred | Intentionally postponed |
| Post-MVP | Outside the current MVP boundary |
| Blocked | Cannot proceed because of a known dependency |

Avoid ambiguous status labels such as:

- Almost Complete
- Mostly Done
- Future Maybe
- Under Consideration

The Roadmap should make implementation decisions easier, not more uncertain.

---

# Development Strategy

Fribot Learning follows an incremental completion strategy.

```text
Foundation

↓

Constitution

↓

Architecture

↓

First Validated Project

↓

Learner Navigation

↓

End-to-End MVP Journey

↓

Release Readiness

↓

Post-MVP Expansion
```

Each Pull Request should close one clearly defined gap.

Large Pull Requests that combine navigation, new learning content, Runtime
features, and future architecture should be avoided.

---

# Roadmap Principles

## Complete Before Expanding

The repository should complete one coherent learner journey before adding new
project families or advanced phases.

---

## Learner Journey First

A roadmap item belongs in the current MVP only when it helps a learner move
through the official journey.

```text
Discover

↓

Start

↓

Experience

↓

Compare

↓

Optional Reflection
```

---

## Experience Before Platform Complexity

The MVP validates the educational experience before introducing:

- dashboards,
- progress tracking,
- learner accounts,
- automatic synchronization,
- or personalized intelligence.

---

## Architecture and Constitution First

Roadmap decisions must preserve:

- Learning Principle Zero,
- Experience Before Explanation,
- meaningful comparison,
- Reflection optionality,
- repository boundaries,
- Runtime independence,
- public/private separation.

---

## Small Iterations

Development progresses through small, reviewable, single-purpose Pull
Requests.

Every PR should have:

- one primary responsibility,
- one clear completion condition,
- and one documented relationship to the MVP plan.

---

## MVP Scope Control

Only work required to complete the official learner journey belongs in the
current MVP.

Everything else should remain Deferred or Post-MVP.

---

# Current MVP Scope

## Included

The current MVP includes:

- public repository entry,
- visible project discovery,
- one complete learner-facing course path,
- prepared Starter Projects,
- expected-output guidance,
- troubleshooting guidance,
- explanation after experience,
- meaningful comparison,
- optional GitHub use,
- optional InnerMirror Reflection entry,
- clear repository boundaries.

---

## Excluded

The current MVP excludes:

- mandatory GitHub login,
- GitHub OAuth inside `fribot-learning`,
- repository selection UI,
- project registration,
- project dashboard,
- milestone tracking,
- completion percentages,
- automatic GitHub snapshots,
- GitHub Webhooks,
- background synchronization,
- personalized PBL Coaching,
- Decision Review Engine,
- Senior Thinking indicators,
- Growth Portfolio,
- learner analytics,
- progress databases,
- dynamic curriculum,
- automatic project-context transfer,
- enterprise features.

These capabilities may become future product layers.

They are not required to validate the current public PBL learning experience.

---

# Post-MVP Categories

Post-MVP work is intentionally separated from the current completion plan.

## Additional Learning Projects

- Class Concept Robot constitutional redevelopment
- additional robotics projects
- software-only project families
- additional sensor projects
- reusable project-template extraction

## Tandem Advanced Learning

- State
- Class
- Concurrency
- asynchronous coordination
- message timing
- failure recovery
- sensor fusion
- Distributed Responsibility

## Platform Integration

- GitHub OAuth
- repository selection
- project registration
- automated snapshots
- project dashboards
- learner accounts
- progress tracking

## Runtime Intelligence

- personalized PBL Coaching
- Decision Review
- learning-context analysis
- senior-thinking evaluation
- recommendation systems

## Long-Term Growth

- Growth Portfolio
- decision timelines
- coaching history
- learning-progress analytics
- engineering growth reports

Post-MVP work must not enter the current MVP without an explicit scope review.

---

# Version Relationship

Roadmap phases and software versions are related but independent.

The current version direction is:

```text
0.x.x

MVP Architecture and Learner Journey Development

↓

0.1.0

First Complete Public MVP Learning Journey

↓

0.2.x

Post-MVP Project Validation and Template Extraction

↓

0.5.x

Expanded Learning Content and Optional Integrations

↓

1.0.0

Stable Public Learning Platform
```

Version numbers represent meaningful product milestones.

They do not represent individual Pull Requests.

A version milestone may require several roadmap PRs.

---

# Roadmap Change Rule

The Roadmap should be updated when:

- MVP scope changes,
- a release-critical gap is discovered,
- a major required PR is completed,
- work moves between Required and Post-MVP,
- release-readiness criteria change,
- or the official implementation order changes.

Routine content corrections do not require a roadmap revision when they
preserve the existing scope and order.

---

# Historical Preservation

Roadmap history should remain visible through Git and Pull Requests.

The current roadmap may be revised to reflect new knowledge.

However, significant scope changes should be documented rather than silently
rewritten without explanation.

The Roadmap should show how the MVP definition became more precise over time.

---

# Future Roadmap Documents

After the current MVP is complete, this directory may include:

```text
roadmap/

├── README.md
├── PBL_MVP_MASTER_PLAN.md
├── RELEASE_PLAN.md
├── POST_MVP_PROJECT_ROADMAP.md
├── FEATURE_ROADMAP.md
├── INTEGRATION_ROADMAP.md
└── LONG_TERM_VISION.md
```

These files should not be created before a distinct planning responsibility
actually exists.

The current MVP does not require multiple overlapping roadmap documents.

---

# Maintenance Checklist

When updating the Roadmap, verify:

- [ ] The current MVP definition remains explicit.
- [ ] Completed work is accurately marked.
- [ ] Required work directly supports the learner journey.
- [ ] Post-MVP work remains separated.
- [ ] Phase 2 is not silently introduced into the MVP.
- [ ] Foundation and Constitution principles remain unchanged.
- [ ] Repository boundaries remain intact.
- [ ] The official PR order remains clear.
- [ ] Release criteria remain observable.
- [ ] The Roadmap matches the repository's actual implementation state.

---

# Guiding Principle

A roadmap is not a promise that every idea will be implemented.

It is a decision tool that protects development focus.

The Foundation defines where the project must remain.

The Constitution defines how learning must be protected.

The Architecture defines how responsibilities are organized.

The Roadmap defines what must be completed next.

The current priority is simple:

```text
Complete One Discoverable Project

↓

Complete One Real Learning Experience

↓

Complete One Meaningful Comparison

↓

Complete One Optional Reflection Path

↓

Release the MVP
```

Fribot Learning should not expand faster than its learner journey becomes
usable.