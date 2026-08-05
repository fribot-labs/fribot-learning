# PBL Coding Education MVP Master Development Plan

> **Roadmap Documentation**
>
> Status: Active MVP Completion Plan  
> Repository: `fribot-learning`  
> Purpose: Define the remaining release-critical work required to complete the
> Fribot Learning MVP.
>
> This roadmap evolves as implementation progresses.
>
> Foundation and Architecture Documentation define why the project exists and
> how responsibilities are organized.
>
> This document defines what must be completed next and in what order.
>
> When conflicts occur, Foundation and Constitution Documentation take
> precedence.

---

# 1. Purpose

This document is the official implementation and completion roadmap for the
Fribot Learning MVP.

It is not:

- a complete long-term product roadmap,
- a list of every possible learning feature,
- a Runtime development plan,
- a commercial expansion plan,
- or a Phase 2 curriculum plan.

Its responsibility is limited to answering:

```text
What is already complete?

↓

What is still required for the MVP?

↓

What can be deferred?

↓

In what order should the remaining work be completed?
```

The current development priority is:

> **Complete one coherent and discoverable learner journey before expanding
> the number of projects or introducing advanced platform features.**

---

# 2. Vision

Fribot Learning provides project-based coding experiences that help learners
improve not only what they build, but also how they observe, compare, and
understand technical systems.

```text
Project Experience

↓

Observation

↓

Comparison

↓

Changed Understanding

↓

Optional Reflection
```

GitHub may preserve code evolution.

InnerMirror may preserve decision and understanding evolution.

Both are valuable, but neither should prevent a learner from beginning the
first project experience.

---

# 3. Current MVP Definition

The Fribot Learning MVP is the smallest public learning system that allows a
new learner to:

1. discover an available learning project,
2. understand what is required,
3. open a prepared Starter Project,
4. execute or inspect a real project experience,
5. observe expected and actual behaviour,
6. compare what changed and what remained stable,
7. access troubleshooting and explanation,
8. optionally preserve work through GitHub,
9. optionally continue into a general InnerMirror Reflection.

The official MVP learner journey is:

```text
Repository Entry

↓

Project Discovery

↓

Project Requirements

↓

Prepared Starter Project

↓

Run or Observe

↓

Compare

↓

Understand

↓

Optional GitHub Record

↓

Optional InnerMirror Reflection
```

The MVP must work without:

- automatic synchronization,
- background processing,
- private Runtime access,
- mandatory GitHub setup,
- project-specific Reflection types,
- learner accounts inside `fribot-learning`,
- or personalized coaching.

---

# 4. MVP Principles

The MVP follows the following principles.

## 4.1 Experience Before Explanation

```text
Predict

↓

Run

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

## 4.2 GitHub Is Optional

GitHub may preserve:

- branches,
- commits,
- Pull Requests,
- implementation history,
- troubleshooting history.

GitHub must not block the first learning experience.

---

## 4.3 Reflection Is Optional

Reflection becomes meaningful when the learner recognizes changed
understanding.

It must not be required merely because a project stage ended.

---

## 4.4 Public and Private Responsibilities Remain Separate

`fribot-learning` owns:

- public projects,
- learning content,
- project navigation,
- observation guidance,
- comparison structures,
- optional Reflection entry guidance.

InnerMirror Runtime owns:

- private Reflection analysis,
- continuity,
- memory,
- coaching,
- decision intelligence.

---

## 4.5 One Complete Journey Before Expansion

The MVP should complete and validate one coherent learner path before adding:

- more project families,
- advanced learning phases,
- new platform services,
- or automated intelligence.

---

# 5. Current Implementation Status

## 5.1 Completed Foundations

| Area | Status | Current Evidence |
|---|---|---|
| Foundation Documentation | Complete | Foundation philosophy, repository architecture, development principles, and repository roles |
| Constitution Application | Complete | Constitution reference, learning-content standard, and constitutional review checklist |
| Repository Boundaries | Complete | Repository and cross-repository boundary documents |
| Service Responsibilities | Complete | Service Responsibility Matrix and public service-flow documentation |
| Project Template Architecture | Complete for MVP documentation | Architecture validated against Tandem Phase 1 |
| Documentation Navigation | Complete | Documentation README and INDEX structure |
| MVP Roadmap Foundation | In Revision | This document aligns the roadmap with the actual MVP |

---

## 5.2 Completed Learner-Facing Work

| Area | Status | Current Evidence |
|---|---|---|
| Tandem Project Overview | Complete | `projects/tandem-dual-mcu/README.md` |
| Tandem Starter Navigation | Complete | `projects/tandem-dual-mcu/starter-project/README.md` |
| Program-Generated Commands | Complete | Starter Project 01 |
| User-Generated Commands | Complete | Starter Project 02 |
| Environment-Generated Commands | Complete | Starter Project 03 |
| What Changes / What Remains | Complete | Explicitly implemented across the Tandem sequence |
| Reference Foundation | Complete where applicable | Starter Project 03 light-sensor reference trace |
| Phase 1 Completion Guidance | Complete | Tandem Phase 1 completion criteria |

The currently validated learning unit is:

```text
Tandem Phase 1

Command Source Architecture
```

Its comparison structure is:

```text
Program

vs

User

vs

Environment
```

---

## 5.3 Deferred Architecture Outcomes

| Area | Status | Reason |
|---|---|---|
| Reusable `templates/project-template/` directory | Deferred | Extract after multiple project families are validated |
| Class Concept Robot constitutional redevelopment | Post-MVP | New content expansion is not required to close the current MVP |
| Tandem Phase 2 | Post-MVP | Advanced curriculum begins after MVP completion |
| Additional project families | Post-MVP | Validate the first complete learner journey first |

---

# 6. Current Learner Capability

With the current Tandem project, a learner can:

```text
Open Tandem Dual MCU

↓

Understand the Phase 1 learning path

↓

Prepare the shared Arduino and micro:bit environment

↓

Run Program-Generated Commands

↓

Compare User-Generated Commands

↓

Compare Environment-Generated Commands

↓

Use Expected Output and Troubleshooting

↓

Read architectural explanation

↓

Recognize Phase 1 completion
```

The learner can also encounter optional Reflection questions.

However, the complete repository-level learner journey still requires
verification and integration.

---

# 7. Remaining MVP Gaps

## 7.1 Repository Entry Navigation

A first-time learner must be able to discover the learning projects directly
from the repository entry point.

Required path:

```text
Root README

↓

Learning Projects

↓

Recommended MVP Project

↓

Tandem Dual MCU

↓

Starter Project Navigation
```

The root README must clearly explain:

- what Fribot Learning is,
- which project to begin with,
- whether hardware is required,
- whether GitHub is mandatory,
- whether Reflection is mandatory,
- and where the learner should click next.

---

## 7.2 Project Catalog

The repository needs one clear learner-facing project index.

Preferred location:

```text
projects/README.md
```

The catalog should identify:

| Field | Purpose |
|---|---|
| Project | Learner-facing project name |
| Status | Available, In Development, or Post-MVP |
| Difficulty | Approximate entry level |
| Hardware | Required equipment |
| Learning Focus | Primary comparison or concept |
| Start | Direct project link |

The current recommended MVP start should be:

```text
Tandem Dual MCU
```

Projects that are not ready must not appear as complete learner paths.

---

## 7.3 Start-Path Clarity

Before starting, the learner must be able to answer:

```text
Where do I begin?

What hardware do I need?

What software do I need?

Is GitHub required?

Is InnerMirror required?

Is Reflection required?

Which files should I read first?
```

The answers should be visible without reading the complete architecture
documentation.

---

## 7.4 InnerMirror Reflection Entry

The current documentation explains Reflection conceptually.

The MVP still requires a clear and explicit learner-facing transition.

```text
Meaningful Project Experience

↓

Optional Reflection

↓

Open InnerMirror

↓

Learner Writes a General Reflection
```

The transition must preserve the following rules:

- Reflection is optional.
- The learner writes directly.
- No project-specific Reflection type is introduced.
- No automatic project context is transferred.
- No private Runtime operation is exposed.
- No hidden cognitive interpretation occurs inside `fribot-learning`.

A simple explicit link is sufficient for the MVP.

---

## 7.5 End-to-End Learner-Flow Verification

The complete flow must be reviewed from the perspective of a learner who has
never seen the repository.

```text
First Visit

↓

Discover Project

↓

Understand Requirements

↓

Open Starter Project

↓

Run or Inspect

↓

Observe

↓

Compare

↓

Troubleshoot if Needed

↓

Understand

↓

Optional Reflection
```

This review should detect:

- broken links,
- obsolete paths,
- inconsistent project names,
- missing entry instructions,
- duplicated responsibilities,
- features described as complete when they are not,
- and Post-MVP concepts mixed into the MVP path.

---

## 7.6 Release Readiness

Before MVP completion is declared, confirm:

- all learner-facing relative links work,
- project names and folder paths match,
- one recommended starting point is visible,
- required hardware and software are stated,
- GitHub remains optional,
- Reflection remains optional,
- InnerMirror entry is explicit,
- no private Runtime responsibility appears in the public repository,
- current and Post-MVP functionality are clearly separated,
- known limitations are documented.

---

# 8. Required PR Sequence

The official remaining PR order is:

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

`PR-PBL-020` and `PR-PBL-021` may be combined only when their responsibilities
remain clearly distinguishable.

---

# 9. Remaining PR Responsibilities

## PR-PBL-019 — MVP Completion Plan Alignment

Purpose:

- align the roadmap with actual implementation,
- define the minimal MVP,
- identify remaining gaps,
- separate Post-MVP work,
- lock the remaining development order.

Primary file:

```text
docs/roadmap/PBL_MVP_MASTER_PLAN.md
```

---

## PR-PBL-020 — Repository Learning Entry Navigation

Purpose:

- make learning projects discoverable from the repository entry,
- identify the recommended MVP starting point,
- explain GitHub and Reflection optionality,
- connect the root README to the learning-project area.

Expected files:

```text
README.md
docs/README.md
docs/INDEX.md
```

Only files requiring navigation alignment should be modified.

---

## PR-PBL-021 — Project Catalog and Start Path

Purpose:

- create or complete the learner-facing project catalog,
- distinguish available projects from in-development projects,
- display requirements and start links,
- prevent learners from entering incomplete paths accidentally.

Expected file:

```text
projects/README.md
```

---

## PR-PBL-022 — InnerMirror Reflection Link Integration

Purpose:

- provide a visible optional Reflection path,
- link meaningful project checkpoints to InnerMirror,
- preserve general Reflection,
- avoid automatic context transfer.

Possible files:

```text
projects/tandem-dual-mcu/README.md
projects/tandem-dual-mcu/starter-project/README.md
relevant BEFORE_YOU_CONTINUE.md files
```

The link should be placed only where Reflection is educationally meaningful.

---

## PR-PBL-023 — MVP End-to-End Documentation Verification

Purpose:

- validate the complete learner journey,
- verify relative links,
- verify project names and paths,
- remove obsolete terminology,
- identify contradictions,
- confirm public/private boundaries.

This PR should not introduce new learning features.

---

## PR-PBL-024 — MVP Release Readiness

Purpose:

- declare the MVP completion state,
- document known limitations,
- record release-readiness criteria,
- separate the Post-MVP backlog,
- establish the next version boundary.

Possible outputs:

- root README status update,
- roadmap status update,
- release checklist,
- version or milestone update.

---

# 10. MVP Scope

## Included

The Fribot Learning MVP includes:

- public repository entry,
- visible project discovery,
- at least one complete executable learning path,
- prepared Starter Project materials,
- expected-output guidance,
- troubleshooting guidance,
- explanation after experience,
- meaningful comparison,
- optional GitHub recording,
- optional InnerMirror Reflection entry,
- clear public/private responsibility boundaries.

---

## Excluded

The MVP intentionally excludes:

- mandatory GitHub login,
- GitHub OAuth inside `fribot-learning`,
- repository selection UI,
- project registration,
- project dashboard,
- milestone tracking,
- completion percentage,
- automatic GitHub snapshots,
- GitHub Webhooks,
- background synchronization,
- Runtime Contract V2 requirements,
- personalized PBL Coaching,
- Decision Review Engine,
- Senior Thinking indicators,
- Growth Portfolio,
- learner analytics,
- progress databases,
- dynamic curriculum,
- automated project-context transfer,
- organization management,
- enterprise features.

These may become later product capabilities.

They are not required to validate the current public PBL learning experience.

---

# 11. Post-MVP Backlog

The following work is intentionally deferred until the MVP learner journey is
complete and validated.

## Additional Learning Content

- Class Concept Robot constitutional redevelopment
- additional robotics projects
- additional sensor projects
- web and software-only learning projects
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
- progress tracking
- learner accounts

## Runtime Intelligence

- personalized PBL Coaching
- Decision Review
- learning-context engine
- senior-thinking evaluation
- learning-maturity indicators
- recommendation systems

## Long-Term Growth

- Growth Portfolio
- decision timeline
- coaching history
- learning-progress analytics
- engineering growth reports

Post-MVP work must not be moved into the current MVP without an explicit
scope review.

---

# 12. Status Definitions

The roadmap uses the following status values.

| Status | Meaning |
|---|---|
| Complete | Implemented and documented |
| In Progress | Currently being implemented |
| Required | Not started or incomplete, but necessary for MVP release |
| Deferred | Intentionally postponed |
| Post-MVP | Outside the current MVP boundary |
| Blocked | Cannot proceed because of a known dependency |

Avoid ambiguous states such as:

- Almost Complete
- Mostly Done
- Future Maybe
- Under Consideration

---

# 13. MVP Completion Criteria

## Learner Entry

- [ ] A new learner can discover learning projects from the root README.
- [ ] The recommended MVP starting project is clear.
- [ ] Required hardware and software are visible before starting.
- [ ] The learner understands that GitHub is optional.
- [ ] The learner understands that Reflection is optional.

## Project Experience

- [ ] At least one complete executable learning path exists.
- [ ] A working baseline is provided.
- [ ] Prediction or expectation formation is supported.
- [ ] Expected output is documented.
- [ ] Troubleshooting guidance is available.
- [ ] Explanation follows relevant experience.
- [ ] Meaningful comparison is explicit.
- [ ] What Changes and What Remains the Same are visible.

## Accessibility

- [ ] The learner can begin without mandatory GitHub integration.
- [ ] The learner can use the public project without private Runtime access.
- [ ] No account inside `fribot-learning` is required.
- [ ] No automatic synchronization is required.

## InnerMirror Transition

- [ ] A visible optional InnerMirror link exists.
- [ ] The learner writes a general Reflection directly.
- [ ] No project-specific Reflection type is introduced.
- [ ] No hidden project context is transferred.
- [ ] No private analysis occurs inside `fribot-learning`.

## Architecture and Security

- [ ] Repository boundaries remain intact.
- [ ] No private Runtime logic exists in the public repository.
- [ ] No learner cognitive data is stored.
- [ ] No proprietary coaching logic is exposed.
- [ ] Foundation and Constitution Documentation remain authoritative.

## Release

- [ ] All learner-facing relative links are valid.
- [ ] Project names and directory paths are consistent.
- [ ] MVP and Post-MVP work are clearly separated.
- [ ] Known limitations are documented.
- [ ] The release status is explicitly declared.

---

# 14. Change-Control Rule

A proposed task may enter the current MVP only when it is required to complete
the official learner journey.

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

A task should remain Post-MVP when it primarily introduces:

- another project family,
- advanced curriculum,
- automation,
- analytics,
- personalization,
- private intelligence,
- or commercial expansion.

Any change that expands the MVP boundary requires explicit review of this
roadmap.

---

# 15. Release Readiness Definition

The Fribot Learning MVP is release-ready when a first-time learner can move
from the public repository entrance to one complete learning experience and
an optional InnerMirror Reflection without requiring hidden services or
manual explanation from the project author.

```text
Discover

↓

Start

↓

Experience

↓

Compare

↓

Understand

↓

Optional Reflection
```

The release does not require a complete education platform.

It requires one coherent, understandable, and constitutionally aligned
learning journey.

---

# 16. Version Roadmap

The version roadmap is intentionally conservative.

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

Version numbers do not imply that all long-term Runtime or commercial features
have been completed.

---

# 17. Success Criteria

The immediate MVP is successful when:

- a learner can discover and begin a project,
- a learner can encounter an observable technical experience,
- a learner can compare expectation with reality,
- a learner can identify what changed and what remained stable,
- a learner can reach explanation after experience,
- a learner can optionally preserve changed understanding through Reflection.

The MVP does not need to prove long-term improvement in senior-level
engineering judgment.

That objective belongs to future product validation.

---

# 18. Relationship to Foundation and Architecture

This roadmap must remain consistent with:

```text
docs/foundation/
├── 01_FOUNDATION_PHILOSOPHY.md
├── 02_REPOSITORY_ARCHITECTURE.md
├── 03_DEVELOPMENT_PRINCIPLES.md
└── 04_REPOSITORY_ROLES.md
```

It must also remain consistent with:

```text
docs/constitution/
├── CONSTITUTION_REFERENCE.md
├── LEARNING_CONTENT_STANDARD.md
└── CONSTITUTIONAL_REVIEW_CHECKLIST.md
```

And:

```text
docs/architecture/
├── REPOSITORY_BOUNDARY.md
├── CROSS_REPOSITORY_BOUNDARY.md
├── SERVICE_RESPONSIBILITY_MATRIX.md
└── PROJECT_TEMPLATE_ARCHITECTURE.md
```

The Foundation defines permanent principles.

The Constitution defines governing learning constraints.

The Architecture defines responsibility and structure.

This roadmap defines the current completion order.

---

# 19. Foundation Principle

Fribot Learning should not expand faster than its learner journey becomes
usable.

The current priority is not to add the largest number of features.

The priority is to complete one meaningful path.

```text
One Discoverable Project

↓

One Real Experience

↓

One Meaningful Comparison

↓

One Optional Reflection Path

↓

MVP
```

Only after that path is complete and validated should the repository expand
into additional projects, advanced curriculum, automation, or intelligence.