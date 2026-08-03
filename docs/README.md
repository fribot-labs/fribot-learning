# Documentation

Welcome to the documentation for **Fribot Learning**.

This directory contains the public documentation that defines the philosophy, architecture, roadmap, and implementation guidance of the Fribot Learning repository.

The documentation is intentionally organized from stable principles to concrete implementation.

```text
Foundation

↓

Architecture

↓

Project Templates

↓

Implementation

↓

Pull Requests
```

The purpose of this structure is to help contributors understand not only what should be implemented, but also why the current structure exists.

---

# Start Here

If this is your first visit to the repository,
begin with the following documents.

1. Foundation Documentation
2. Architecture Documentation
3. Project Template Architecture
4. Roadmap
5. Current Project

This reading order provides the complete context before implementation.

---

# Documentation Structure

```text
docs/

├── README.md
├── INDEX.md
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

For the complete document navigation map, see:

- [Documentation Index](./INDEX.md)

---

# Documentation Layers

The documentation is divided into several layers.

Each layer has a different responsibility.

| Layer | Primary Question |
|---|---|
| Foundation | Why does the project exist? |
| Architecture | How is the system organized? |
| Project Templates | How does the learner experience a project? |
| Roadmap | What should be implemented next? |
| Implementation | How is the approved design implemented? |
| Pull Requests | How did the implementation evolve? |

The layers should remain consistent with one another.

Implementation must not silently redefine Architecture.

Architecture must not contradict Foundation principles.

---

# Reading Guide

Different readers have different responsibilities.

Choose the reading path that best matches your role.

---

## New Contributors

New contributors should begin with the project philosophy before reviewing implementation details.

Recommended order:

```text
Repository README

↓

Foundation Documentation

↓

Architecture Documentation

↓

Roadmap

↓

Current Pull Request
```

Read:

1. [`foundation/README.md`](./foundation/README.md)
2. [`foundation/01_FOUNDATION_PHILOSOPHY.md`](./foundation/01_FOUNDATION_PHILOSOPHY.md)
3. [`foundation/02_REPOSITORY_ARCHITECTURE.md`](./foundation/02_REPOSITORY_ARCHITECTURE.md)
4. [`foundation/03_DEVELOPMENT_PRINCIPLES.md`](./foundation/03_DEVELOPMENT_PRINCIPLES.md)
5. [`foundation/04_REPOSITORY_ROLES.md`](./foundation/04_REPOSITORY_ROLES.md)
6. [`architecture/README.md`](./architecture/README.md)
7. [`roadmap/PBL_MVP_MASTER_PLAN.md`](./roadmap/PBL_MVP_MASTER_PLAN.md)

This sequence provides the context required before changing repository structure or project behavior.

---

## Developers

Developers should understand the following before implementing new functionality:

- project philosophy,
- repository boundaries,
- service responsibilities,
- public and private responsibilities,
- project template structure,
- current MVP exclusions,
- development principles.

Recommended path:

```text
Foundation

↓

Repository Boundary

↓

Service Responsibility

↓

Project Template Architecture

↓

Roadmap

↓

Implementation
```

Important documents include:

- [`foundation/02_REPOSITORY_ARCHITECTURE.md`](./foundation/02_REPOSITORY_ARCHITECTURE.md)
- [`foundation/03_DEVELOPMENT_PRINCIPLES.md`](./foundation/03_DEVELOPMENT_PRINCIPLES.md)
- [`architecture/REPOSITORY_BOUNDARY.md`](./architecture/REPOSITORY_BOUNDARY.md)
- [`architecture/SERVICE_DATA_FLOW.md`](./architecture/SERVICE_DATA_FLOW.md)
- [`architecture/SERVICE_RESPONSIBILITY_MATRIX.md`](./architecture/SERVICE_RESPONSIBILITY_MATRIX.md)
- [`architecture/PROJECT_TEMPLATE_ARCHITECTURE.md`](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

---

## Project Authors

Project authors create or modify learner-facing PBL projects.

Before creating a project, read:

1. [Foundation Philosophy](./foundation/01_FOUNDATION_PHILOSOPHY.md)
2. [Development Principles](./foundation/03_DEVELOPMENT_PRINCIPLES.md)
3. [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Project authors begin from:

```text
templates/project-template/
```

Learners begin from:

```text
projects/
```

The two directories intentionally have different responsibilities.

- `templates/` contains the reusable authoring structure.
- `projects/` contains completed learner-facing projects.

A new project should always be created by copying the shared authoring template rather than inventing a new project structure.

Every learner-facing project should preserve the common learning flow.

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

---

## Project Maintainers

Project maintainers should keep the following areas synchronized:

- root `README.md`,
- `docs/README.md`,
- `docs/INDEX.md`,
- Foundation Documentation,
- Architecture Documentation,
- Roadmap Documentation,
- project directories,
- common project template,
- Versioning,
- Security,
- License.

Maintainers should verify that public documentation describes the current MVP rather than unimplemented future features.

---

## AI Assistants

AI assistants should load context in the following order:

```text
Foundation

↓

Architecture

↓

Roadmap

↓

Relevant Project

↓

Current Pull Request
```

This order helps prevent local implementation suggestions from contradicting repository-level decisions.

AI assistants should distinguish between:

- approved architecture,
- planned roadmap items,
- project-specific content,
- current implementation,
- excluded future functionality.

---

# Documentation Categories

## Foundation

Foundation Documentation defines the long-term principles of Fribot Learning.

It includes:

- educational philosophy,
- repository architecture,
- development principles,
- repository roles,
- stable system boundaries.

Foundation documents should change rarely.

A Foundation document should not be modified simply because one implementation detail changes.

---

## Architecture

Architecture Documentation describes how Foundation principles are realized in the public system.

It includes:

- repository boundaries,
- cross-repository responsibilities,
- public service data flow,
- responsibility allocation,
- project template architecture,
- public integration rules.

Architecture evolves with implementation, but should remain more stable than individual feature code.

Architecture documents should describe approved structure rather than speculative functionality.

---

## Project Templates

Project Templates define the learner-facing project experience.

The common authoring structure is located at:

```text
templates/project-template/
```

Actual learner-facing projects are located at:

```text
projects/
```

Each project should preserve the shared progression:

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

Projects may differ in:

- programming language,
- hardware,
- technical subject,
- reference material,
- starter code.

Projects should not create a new platform architecture for every topic.

---

## Roadmap

Roadmap Documentation defines the current implementation sequence.

Examples include:

- MVP development plan,
- phase planning,
- project delivery order,
- integration milestones,
- release preparation.

Roadmap documents are expected to change more frequently than Foundation or Architecture documents.

A roadmap may change priorities.

It must not silently redefine repository ownership or architectural boundaries.

---

# Relationship Between Documents

The intended relationship is:

```text
Foundation

↓

Architecture

↓

Project Templates

↓

Roadmap

↓

Implementation

↓

Pull Requests
```

The sequence has the following meaning.

### Foundation

Defines permanent direction.

### Architecture

Defines approved system organization.

### Project Templates

Define the common learner experience.

### Roadmap

Defines implementation order.

### Implementation

Creates the actual files and features.

### Pull Requests

Preserve the change history.

---

# Repository Relationship

The current MVP involves three primary repositories.

```text
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private
```

Their responsibilities are separated.

---

## `fribot-learning`

Owns:

- public PBL project structure,
- learner-facing projects,
- common project templates,
- starter educational materials,
- public project documentation,
- Foundation Documentation,
- public Architecture Documentation,
- MVP roadmap.

---

## `innermirror-landing`

Owns:

- public Reflection user interface,
- user interaction,
- Reflection submission,
- Runtime result presentation,
- PBL-to-Reflection UI context.

---

## `innermirror-runtime-private`

Owns:

- private Reflection analysis,
- summary generation,
- pacing guidance,
- continuity processing,
- next-question generation,
- private Runtime orchestration.

Private Runtime implementation should be documented inside the private Runtime repository when detailed implementation information is required.

The public `fribot-learning` documentation should describe only the boundary necessary for public development.

---

# Current MVP Focus

The current MVP focuses on one continuous learner experience.

```text
PBL Project

↓

Practical Experience

↓

GitHub (Optional)

↓

InnerMirror Reflection

↓

Insight
```

GitHub may be used as an implementation record, but it is not required for a learner to begin the first project.

The current MVP does not require:

- a learning management system,
- learner scoring,
- progress dashboards,
- automatic GitHub synchronization,
- AI-generated curriculum,
- project-specific Reflection types,
- public Runtime intelligence,
- knowledge graph implementation,
- Living Map implementation,
- AI OS implementation.

These exclusions keep the implementation focused on the first usable service experience.

---

# Documentation Principles

Good documentation should be:

- clear,
- concise,
- maintainable,
- boundary-aware,
- version-aware,
- consistent with implementation,
- explicit about exclusions.

Documentation should explain:

1. Why?
2. What?
3. How?
4. Where?

in that order.

However, documents should not repeat the same explanation across every directory.

Each document should have one clear responsibility.

---

# Documentation Change Rules

Documentation should be updated when:

- repository responsibility changes,
- a new architectural boundary is introduced,
- the common project lifecycle changes,
- a new integration dependency is added,
- an existing document becomes misleading,
- implementation no longer matches approved architecture.

Foundation Documentation should not be changed for:

- small project wording changes,
- one starter-code correction,
- one reference link update,
- ordinary bug fixes,
- minor content improvements.

Project content updates should remain inside the relevant project unless they alter the common architecture.

---

# Future Expansion

New documentation categories may be added when actual implementation requires them.

Possible future categories include:

```text
adr/

release/

api/

tutorials/
```

A category should not be created only because it may be useful someday.

New categories should have:

- a clear responsibility,
- an identified owner,
- a current implementation need,
- a defined relationship with existing documentation.

Detailed private Runtime, proprietary analysis, or confidential design documentation should remain in the appropriate private repository.

---

# Navigation

Use the following documents as primary entry points.

- [Documentation Index](./INDEX.md)
- [Foundation Documentation](./foundation/README.md)
- [Architecture Documentation](./architecture/README.md)
- [Roadmap Documentation](./roadmap/README.md)
- [PBL MVP Master Plan](./roadmap/PBL_MVP_MASTER_PLAN.md)
- [Project Template Architecture](./architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Learner-facing projects are located outside the `docs/` directory:

- [PBL Projects](../projects/)

The reusable authoring template is located at:

- [Project Authoring Template](../templates/project-template/)

---

# Guiding Principle

Documentation is not a collection of unrelated notes.

It is the shared implementation context of Fribot Learning.

Foundation preserves purpose.

Architecture preserves responsibility.

Project Templates preserve the learner experience.

Roadmaps preserve implementation direction.

Pull Requests preserve change history.

Together, they allow the platform to evolve without losing consistency.