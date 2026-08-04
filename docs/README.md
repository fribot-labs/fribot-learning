# Documentation

> **Documentation Navigation**
>
> Welcome to the public documentation for **Fribot Learning**.
>
> This directory defines how constitutional principles, repository
> philosophy, architecture, project standards, and implementation plans are
> connected within the `fribot-learning` repository.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.

---

# Purpose

The documentation is intentionally organized from enduring principles toward
concrete learner-facing implementation.

```text
Learning Constitution

↓

Constitution Documentation

↓

Foundation Documentation

↓

Architecture Documentation

↓

Project Templates

↓

Learner-Facing Projects

↓

Implementation

↓

Pull Requests
```

This structure helps contributors understand:

- why the repository exists,
- which principles govern it,
- where responsibilities belong,
- how projects should be designed,
- how implementation should proceed,
- and how changes should be reviewed.

The objective is consistency and traceability rather than documentation
volume.

---

# Start Here

For a complete navigation map, begin with:

- [Documentation Index](./INDEX.md)

For a first repository review, use this order:

1. Constitution Documentation
2. Foundation Documentation
3. Architecture Documentation
4. Project Template Architecture
5. Roadmap
6. Current learner-facing project
7. Current Pull Request

This sequence establishes constitutional and architectural context before
implementation details are considered.

---

# Documentation Structure

```text
docs/

├── README.md
├── INDEX.md
│
├── constitution/
│   ├── README.md
│   ├── CONSTITUTION_REFERENCE.md
│   ├── LEARNING_CONTENT_STANDARD.md
│   └── CONSTITUTIONAL_REVIEW_CHECKLIST.md
│
├── foundation/
│   ├── README.md
│   ├── 01_FOUNDATION_PHILOSOPHY.md
│   ├── 02_REPOSITORY_ARCHITECTURE.md
│   ├── 03_DEVELOPMENT_PRINCIPLES.md
│   └── 04_REPOSITORY_ROLES.md
│
├── architecture/
│   ├── README.md
│   ├── REPOSITORY_BOUNDARY.md
│   ├── CROSS_REPOSITORY_BOUNDARY.md
│   ├── CROSS_REPOSITORY_GOVERNANCE.md
│   ├── SERVICE_DATA_FLOW.md
│   ├── SERVICE_RESPONSIBILITY_MATRIX.md
│   └── PROJECT_TEMPLATE_ARCHITECTURE.md
│
└── roadmap/
    ├── README.md
    └── PBL_MVP_MASTER_PLAN.md
```

Learner-facing projects and reusable authoring templates remain outside the
`docs/` directory.

```text
projects/

templates/project-template/
```

---

# Documentation Layers

Each documentation layer has one primary responsibility.

| Layer | Primary Question |
|---|---|
| Constitution | Why should learning be designed this way? |
| Foundation | How should this repository think and evolve? |
| Architecture | How are responsibilities and structures implemented? |
| Project Templates | How should a learner-facing project be structured? |
| Projects | What does the learner actually experience? |
| Roadmap | What should be implemented next? |
| Implementation | How is the approved structure built? |
| Pull Requests | How did the implementation evolve? |

A lower layer must not silently redefine a higher layer.

```text
Implementation must not redefine Architecture.

Architecture must not contradict Foundation.

Foundation must not redefine Constitution.
```

---

# Constitution Documentation

## Purpose

The Constitution Documentation connects `fribot-learning` with the Learning
Constitution maintained in the `innermirror-constitution` repository.

It translates constitutional meaning into repository-level implementation
standards.

It does not create new constitutional authority.

---

## Documents

### [`constitution/README.md`](./constitution/README.md)

Explains the purpose and scope of the Constitution Documentation directory.

---

### [`constitution/CONSTITUTION_REFERENCE.md`](./constitution/CONSTITUTION_REFERENCE.md)

Defines:

- constitutional authority,
- the relationship between Constitution and repository,
- the governing Learning Constitution documents,
- repository implementation responsibility.

---

### [`constitution/LEARNING_CONTENT_STANDARD.md`](./constitution/LEARNING_CONTENT_STANDARD.md)

Defines the official writing and design standard for learner-facing content.

It establishes:

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

Reflect
```

It also defines the educational responsibilities of documents such as:

- `README.md`
- `EXPECTED_OUTPUT.md`
- `TROUBLESHOOTING.md`
- `WHY_IT_WORKS.md`
- `BEFORE_YOU_CONTINUE.md`

---

### [`constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md`](./constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md)

Defines the constitutional review criteria for:

- learner-facing projects,
- architecture changes,
- documentation,
- significant Pull Requests.

Technical correctness alone is not sufficient.

The implementation must also preserve constitutional purpose, learner
experience, repository boundaries, privacy, and long-term maintainability.

---

# Foundation Documentation

## Purpose

Foundation Documentation defines the stable identity of Fribot Learning.

It explains:

- why the repository exists,
- how learning is understood,
- how development should proceed,
- which repository owns each responsibility,
- which principles should remain stable over time.

Foundation documents change rarely.

They should not be revised merely because one implementation detail changes.

---

## Documents

### [`foundation/01_FOUNDATION_PHILOSOPHY.md`](./foundation/01_FOUNDATION_PHILOSOPHY.md)

Defines:

- vision,
- mission,
- Learning Principle Zero,
- experience before explanation,
- meaningful comparison,
- Reflection emergence,
- AI-era learning philosophy.

---

### [`foundation/02_REPOSITORY_ARCHITECTURE.md`](./foundation/02_REPOSITORY_ARCHITECTURE.md)

Defines the high-level repository organization and long-term architectural
relationship among ecosystem repositories.

---

### [`foundation/03_DEVELOPMENT_PRINCIPLES.md`](./foundation/03_DEVELOPMENT_PRINCIPLES.md)

Defines practical development principles for:

- learner experience,
- repository ownership,
- implementation scope,
- Pull Request evaluation,
- Definition of Done,
- MVP simplicity,
- Runtime independence.

---

### [`foundation/04_REPOSITORY_ROLES.md`](./foundation/04_REPOSITORY_ROLES.md)

Defines the primary role, ownership boundary, and lifecycle of each
repository.

Current repositories include:

- `fribot-learning`
- `innermirror-landing`
- `innermirror-runtime-private`
- `innermirror-engine-private`
- `fribot-flow-timeline`

---

# Architecture Documentation

## Purpose

Architecture Documentation defines how constitutional and Foundation
principles are implemented through:

- repository boundaries,
- service responsibilities,
- cross-repository contracts,
- service data flow,
- project-template architecture,
- public and private separation.

Architecture evolves together with implementation evidence.

However, it should remain more stable than individual project content.

---

## Documents

### [`architecture/README.md`](./architecture/README.md)

Provides the overview of the public architecture and its relationship with
Constitution, Foundation, services, and project templates.

---

### [`architecture/REPOSITORY_BOUNDARY.md`](./architecture/REPOSITORY_BOUNDARY.md)

Defines what `fribot-learning` owns and does not own.

The repository owns learner-facing project experiences.

It does not own private Reflection interpretation, continuity, memory, or
coaching intelligence.

---

### [`architecture/CROSS_REPOSITORY_BOUNDARY.md`](./architecture/CROSS_REPOSITORY_BOUNDARY.md)

Defines collaboration among independent repositories.

It separates:

- learning experience,
- Reflection interaction,
- private Runtime processing,
- experimental intelligence,
- historical preservation.

---

### [`architecture/CROSS_REPOSITORY_GOVERNANCE.md`](./architecture/CROSS_REPOSITORY_GOVERNANCE.md)

Defines how cross-repository changes, ownership transfers, and architectural
decisions are governed.

---

### [`architecture/SERVICE_DATA_FLOW.md`](./architecture/SERVICE_DATA_FLOW.md)

Defines approved service and data movement among Learning, Landing, and
Runtime.

---

### [`architecture/SERVICE_RESPONSIBILITY_MATRIX.md`](./architecture/SERVICE_RESPONSIBILITY_MATRIX.md)

Defines responsibility allocation across:

- Learning,
- Landing,
- Runtime,
- Engine.

---

### [`architecture/PROJECT_TEMPLATE_ARCHITECTURE.md`](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Defines the reusable learner-facing project architecture.

The visible project lifecycle is:

```text
Start

↓

Run

↓

Modify

↓

Understand

↓

Reflect
```

The underlying constitutional learning mechanism is:

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

Reflect
```

Projects may differ technically.

They should not arbitrarily redefine the common learning structure.

---

# Project Templates

## Purpose

Project Templates convert Architecture into repeatable learner experiences.

The reusable authoring structure is located at:

```text
templates/project-template/
```

Actual learner-facing projects are located at:

```text
projects/
```

The two locations have different responsibilities.

```text
templates/
= reusable authoring skeleton

projects/
= actual learner-facing experiences
```

A new project should normally begin by copying and adapting the shared
template rather than inventing a new project architecture.

---

# Project Content Standard

A substantial Starter Project should allow the learner to:

- understand the project goal,
- form an expectation,
- execute a working baseline,
- observe meaningful behavior,
- make one controlled modification,
- compare meaningful differences,
- understand at least one structural relationship,
- distinguish what changed from what remained stable,
- recognize whether their understanding changed,
- optionally continue into Reflection.

Working code alone does not complete the learning experience.

Meaningful understanding completes it.

---

# Common Project Documents

Projects may use the following documents.

| Document | Primary Responsibility |
|---|---|
| `README.md` | Project map and entry point |
| `01_START.md` | Preparation and first expectation |
| `EXPECTED_OUTPUT.md` | Observable expectation formation |
| `02_RUN.md` | Execution and encounter with reality |
| `TROUBLESHOOTING.md` | Observation verification |
| `03_MODIFY.md` | Controlled change and comparison |
| `WHY_IT_WORKS.md` | Explanation after experience |
| `04_UNDERSTAND.md` | Structural interpretation |
| `BEFORE_YOU_CONTINUE.md` | Recognition of changed understanding |
| `05_REFLECT.md` | Optional InnerMirror transition |

Not every project requires every file.

File names may remain flexible.

Educational responsibilities must remain visible.

---

# Meaningful Comparison

Every substantial Starter Project should intentionally create at least one
meaningful comparison.

Examples include:

- expected behavior versus actual behavior,
- original implementation versus modified implementation,
- procedural structure versus class-based structure,
- one controller versus two controllers,
- one command source versus another,
- learner-generated code versus AI-generated code.

A project author should be able to answer:

> What meaningful comparison will the learner experience?

Without a meaningful comparison, material may remain useful as a technical
reference but may not yet constitute a complete Fribot Learning project.

---

# Roadmap Documentation

## Purpose

Roadmap Documentation defines implementation order.

It may include:

- MVP development sequence,
- project delivery order,
- integration milestones,
- phase planning,
- release preparation.

Roadmap documents change more frequently than Constitution, Foundation, or
Architecture documents.

A roadmap may change priority.

It must not silently redefine repository ownership or architectural
boundaries.

---

## Current Document

- [`roadmap/PBL_MVP_MASTER_PLAN.md`](./roadmap/PBL_MVP_MASTER_PLAN.md)

---

# Reading Guide

Different readers should load different levels of context.

---

## New Contributors

Recommended order:

```text
Repository README

↓

Constitution Documentation

↓

Foundation Documentation

↓

Architecture Documentation

↓

Roadmap

↓

Current Project

↓

Current Pull Request
```

Start with:

1. [`constitution/README.md`](./constitution/README.md)
2. [`foundation/README.md`](./foundation/README.md)
3. [`architecture/README.md`](./architecture/README.md)
4. [`INDEX.md`](./INDEX.md)
5. [`roadmap/PBL_MVP_MASTER_PLAN.md`](./roadmap/PBL_MVP_MASTER_PLAN.md)

---

## Developers

Before implementing new functionality, review:

1. [Constitution Reference](./constitution/CONSTITUTION_REFERENCE.md)
2. [Development Principles](./foundation/03_DEVELOPMENT_PRINCIPLES.md)
3. [Repository Roles](./foundation/04_REPOSITORY_ROLES.md)
4. [Repository Boundary](./architecture/REPOSITORY_BOUNDARY.md)
5. [Cross-Repository Boundary](./architecture/CROSS_REPOSITORY_BOUNDARY.md)
6. [Service Responsibility Matrix](./architecture/SERVICE_RESPONSIBILITY_MATRIX.md)
7. [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

---

## Project Authors

Before creating or modifying learner-facing projects, review:

1. [Learning Content Standard](./constitution/LEARNING_CONTENT_STANDARD.md)
2. [Constitutional Review Checklist](./constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md)
3. [Foundation Philosophy](./foundation/01_FOUNDATION_PHILOSOPHY.md)
4. [Development Principles](./foundation/03_DEVELOPMENT_PRINCIPLES.md)
5. [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Project authors should begin from:

```text
templates/project-template/
```

Learners should begin from:

```text
projects/
```

---

## Project Maintainers

Maintainers should keep the following synchronized:

- root `README.md`,
- `docs/README.md`,
- `docs/INDEX.md`,
- Constitution Documentation,
- Foundation Documentation,
- Architecture Documentation,
- Roadmap Documentation,
- project directories,
- common project template,
- Versioning,
- Security,
- License.

Maintainers should ensure that public documentation describes approved and
implemented architecture rather than speculative future features.

---

## AI Assistants

Recommended context-loading order:

```text
Constitution Documentation

↓

Foundation Documentation

↓

Architecture Documentation

↓

Roadmap

↓

Relevant Project

↓

Current Pull Request
```

For ordinary project-content work, the minimum useful context is:

```text
LEARNING_CONTENT_STANDARD.md

+

Relevant Project README

+

Current Project Structure

+

Relevant Code or References
```

For architecture or repository-boundary changes, load the broader
Constitution, Foundation, and Architecture context.

AI assistants should distinguish among:

- constitutional authority,
- repository implementation standards,
- approved architecture,
- roadmap intentions,
- project-specific content,
- current implementation,
- excluded future functionality.

---

# Repository Relationship

The active ecosystem involves three production repositories.

```text
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private
```

Supporting repositories include:

```text
innermirror-engine-private

fribot-flow-timeline
```

---

## `fribot-learning`

Owns:

- learner-facing projects,
- reusable project templates,
- executable Starter Project materials,
- observation and comparison structures,
- educational documentation,
- Reflection transition guidance,
- public Foundation and Architecture documentation,
- the learning roadmap.

---

## `innermirror-landing`

Owns:

- Reflection input,
- Reflection submission,
- user-triggered analysis controls,
- Runtime API communication,
- loading and error states,
- approved Runtime result presentation.

---

## `innermirror-runtime-private`

Owns:

- private Reflection processing,
- approved GitHub Snapshot interpretation,
- summary generation,
- next-question generation,
- pacing,
- continuity,
- Runtime memory,
- coaching,
- private orchestration.

---

## `innermirror-engine-private`

Owns experimental:

- recommendation research,
- decision scoring,
- coaching-strategy research,
- future cognitive models.

It is not part of the active MVP production path.

---

## `fribot-flow-timeline`

Preserves:

- historical workflow experiments,
- Reflection Timeline concepts,
- UX prototypes,
- previous Runtime prototypes,
- architectural lineage.

It is an archive rather than an active service repository.

---

# Current MVP Focus

The current MVP validates one continuous learner journey.

```text
PBL Project

↓

Meaningful Practical Experience

↓

Observation and Comparison

↓

Changed Understanding

↓

Optional InnerMirror Reflection

↓

Private Continuity and Coaching

↓

Insight
```

GitHub may be used as an implementation record.

It is not required for the learner to:

- open a project,
- understand the project,
- run the first example,
- observe the result,
- begin Reflection.

---

# Project Context Boundary

Project context must not be transferred automatically.

Only explicit, minimal, user-authorized context may be included through an
approved contract.

Permitted public context may include:

- project identifier,
- project title,
- learning stage,
- public repository URL,
- learner-selected commit,
- learner-selected Pull Request,
- short non-sensitive project summary.

Project context must not include:

- hidden cognitive interpretation,
- identity claims,
- private learner memory,
- inferred psychological state,
- continuity scores,
- private coaching instructions.

`fribot-learning` does not call the private Runtime directly.

---

# Current MVP Exclusions

The current MVP does not require:

- a learning management system,
- learner scoring,
- badges,
- progress databases,
- mandatory GitHub integration,
- automatic GitHub synchronization,
- AI-generated dynamic curriculum,
- project-specific Reflection types,
- private Runtime logic in the public repository,
- knowledge graph implementation,
- Living Map implementation,
- AI OS implementation,
- private learner modeling,
- automatic psychological interpretation,
- automatic project-context transfer,
- mandatory AI coaching.

These exclusions keep development focused on the first meaningful learner
experience.

---

# Documentation Principles

Good documentation should be:

- clear,
- concise,
- maintainable,
- constitutionally aligned,
- boundary-aware,
- version-aware,
- consistent with implementation,
- explicit about exclusions.

Documentation should answer:

```text
Why?

↓

What?

↓

How?

↓

Where?

↓

Implement
```

Each document should have one primary responsibility.

The same explanation should not be repeated across every directory without a
clear reason.

---

# Documentation Change Rules

Documentation should be updated when:

- constitutional application changes,
- repository responsibility changes,
- a new architectural boundary is introduced,
- the common project lifecycle changes,
- a new integration dependency is added,
- an existing document becomes misleading,
- implementation no longer matches approved architecture.

Foundation Documentation should not be changed for:

- small wording changes,
- one Starter Project correction,
- one reference-link update,
- ordinary bug fixes,
- minor project-content improvements.

Project-content changes should remain inside the relevant project unless they
alter the common architecture or Learning Content Standard.

---

# Future Expansion

New documentation categories may be added when actual implementation requires
them.

Possible future categories include:

```text
adr/

release/

api/

tutorials/
```

A new category should not be created merely because it may become useful
someday.

It should have:

- a clear responsibility,
- an identified owner,
- a current implementation need,
- a defined relationship with existing documentation.

Private Runtime, proprietary analysis, and confidential research
documentation should remain in the appropriate private repository.

---

# Navigation

Primary entry points:

- [Documentation Index](./INDEX.md)
- [Constitution Documentation](./constitution/README.md)
- [Foundation Documentation](./foundation/README.md)
- [Architecture Documentation](./architecture/README.md)
- [Roadmap Documentation](./roadmap/README.md)
- [PBL MVP Master Plan](./roadmap/PBL_MVP_MASTER_PLAN.md)
- [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Learner-facing projects:

- [PBL Projects](../projects/)

Reusable authoring template:

- `templates/project-template/`

---

# Guiding Principle

Documentation is not a collection of unrelated notes.

It is the shared constitutional, architectural, and implementation context of
Fribot Learning.

```text
Constitution protects purpose.

Foundation protects repository identity.

Architecture protects responsibility.

Project Templates protect learning structure.

Roadmaps protect implementation direction.

Pull Requests preserve change history.
```

Together, these layers allow Fribot Learning to evolve without losing its
educational identity, architectural boundaries, or long-term consistency.