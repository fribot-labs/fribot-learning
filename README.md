# Fribot Learning

> **Learn through real projects. Improve how you think. Grow through Reflection.**

---

## Overview

Fribot Learning is a **Project-Based Coding Education Platform**.

Instead of teaching programming syntax in isolation, Fribot Learning provides small, practical projects that help learners improve **how they think while building software**.

The objective is not simply to complete coding exercises.

The objective is to:

- experience real software development,
- observe how code changes behavior,
- understand why software is structured in a particular way,
- and naturally continue into Reflection.

---

## Quick Start

The first learner-facing projects are currently being developed.

- [Class Concept Robot](./projects/class-concept-robot/)
- [Tandem Dual MCU](./projects/tandem-dual-mcu/)

For the complete project collection, see:

- [PBL Projects](./projects/)

Every project follows the same basic learning flow.

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

> The initial project directories are currently in the `Planned` stage.  
> Complete learner-facing content will be added through separate Pull Requests.

---

## Why Fribot?

Traditional coding education often focuses on:

- programming syntax,
- tutorials,
- algorithms,
- copy-and-paste examples.

Fribot Learning focuses on:

- real project experience,
- small and executable learning steps,
- observable changes,
- software structure,
- Reflection,
- long-term engineering growth.

> **Code is the result.  
> Understanding is the real learning objective.**

---

## MVP Learning Flow

The current MVP is designed around one continuous learner experience.

```text
Project

↓

Run

↓

Modify

↓

Understand

↓

Reflect

↓

InnerMirror

↓

Insight
```

The project creates experience.

InnerMirror helps preserve how that experience changes the learner's understanding.

---

## Educational Philosophy

Learning is more than acquiring knowledge.

Learning is gradually improving the quality of technical decisions.

Software engineering is fundamentally a process of making decisions.

Projects create experience.

Reflection preserves understanding.

The learner should not begin with the complete architecture.

The learner should begin with an approachable action, observe a visible result, make one controlled change, and gradually discover the deeper structure behind the code.

---

## Current MVP

The current MVP intentionally remains small.

It focuses on:

- learner-facing project templates,
- practical project experience,
- reusable project structure,
- optional GitHub workflow,
- Reflection entry,
- InnerMirror integration.

The MVP does **not** attempt to become a complete learning management system.

It does not currently include:

- learner scoring,
- progress dashboards,
- automatic GitHub synchronization,
- AI-generated curriculum,
- project-specific Reflection types,
- public Runtime intelligence,
- private learner modeling.

The immediate goal is to validate whether meaningful project experiences naturally lead to valuable Reflection.

---

## Current MVP Projects

### Class Concept Robot

- [Open Project](./projects/class-concept-robot/)

Purpose:

Help beginners understand that a class is more than C++ syntax.

The project begins with familiar procedural code and gradually introduces:

- state,
- behavior,
- responsibility,
- public interface,
- private boundary,
- why related state and behavior are grouped together.

Status:

```text
Planned
```

---

### Tandem Dual MCU

- [Open Project](./projects/tandem-dual-mcu/)

Purpose:

Help learners understand responsibility separation and collaboration between two microcontrollers.

The project gradually introduces:

- independent execution,
- communication,
- coordination,
- responsibility separation,
- failure isolation.

Status:

```text
Planned
```

---

## Common Project Structure

Every learner-facing project follows the same minimum structure.

```text
project-name/
├─ README.md
├─ 01_START.md
├─ 02_RUN.md
├─ 03_MODIFY.md
├─ 04_UNDERSTAND.md
├─ 05_REFLECT.md
├─ starter-code/
└─ references/
```

Projects may differ in:

- programming language,
- hardware,
- technical subject,
- reference material,
- starter code.

They should not create a different learning architecture for every topic.

The common structure is defined in:

- [Project Template Architecture](./docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

Project authors should begin from:

- [Project Authoring Template](./templates/project-template/)

---

## Relationship with GitHub

GitHub is recommended but optional during the MVP.

Learners may use GitHub to preserve:

- source code,
- commits,
- branches,
- pull requests,
- test results,
- unresolved issues,
- implementation history.

However, GitHub should not become a barrier to beginning the first project.

A learner should be able to:

- open the project,
- understand the goal,
- run starter code,
- complete the first experiment,
- and enter Reflection

without first mastering GitHub workflows.

---

## Relationship with InnerMirror

Fribot Learning and InnerMirror provide one continuous learner experience.

```text
PBL Project

↓

Practical Experience

↓

Reflection Entry

↓

InnerMirror

↓

Insight
```

PBL creates the project experience.

InnerMirror preserves how the learner's understanding changes through that experience.

During the MVP:

- Reflection remains a normal InnerMirror Reflection,
- the learner writes the Reflection directly,
- no project-specific Reflection type is created,
- project context may be displayed in the UI,
- project context is not sent to the private Runtime.

---

## Documentation

The public documentation is organized into three primary areas.

```text
docs/
├─ foundation/
├─ architecture/
└─ roadmap/
```

Use the following entry points:

- [Documentation Overview](./docs/)
- [Documentation Index](./docs/INDEX.md)
- [Foundation Documentation](./docs/foundation/)
- [Architecture Documentation](./docs/architecture/)
- [Roadmap Documentation](./docs/roadmap/)

---

## Foundation Documentation

Foundation Documentation defines the long-term philosophy and development principles of Fribot Learning.

It includes:

- educational philosophy,
- repository architecture,
- development principles,
- repository responsibilities.

Foundation documents should change rarely.

Important documents:

- [Foundation Philosophy](./docs/foundation/01_FOUNDATION_PHILOSOPHY.md)
- [Repository Architecture](./docs/foundation/02_REPOSITORY_ARCHITECTURE.md)
- [Development Principles](./docs/foundation/03_DEVELOPMENT_PRINCIPLES.md)
- [Repository Roles](./docs/foundation/04_REPOSITORY_ROLES.md)

---

## Architecture Documentation

Architecture Documentation explains how Foundation principles are implemented.

It includes:

- repository boundaries,
- cross-repository governance,
- service data flow,
- service responsibilities,
- project template architecture.

Important documents:

- [Repository Boundary](./docs/architecture/REPOSITORY_BOUNDARY.md)
- [Cross-Repository Boundary](./docs/architecture/CROSS_REPOSITORY_BOUNDARY.md)
- [Cross-Repository Governance](./docs/architecture/CROSS_REPOSITORY_GOVERNANCE.md)
- [Service Data Flow](./docs/architecture/SERVICE_DATA_FLOW.md)
- [Service Responsibility Matrix](./docs/architecture/SERVICE_RESPONSIBILITY_MATRIX.md)
- [Project Template Architecture](./docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)

---

## Roadmap

Future implementation plans are documented under:

- [Roadmap Documentation](./docs/roadmap/)
- [PBL MVP Master Plan](./docs/roadmap/PBL_MVP_MASTER_PLAN.md)

The Roadmap defines implementation order and priorities.

It does not replace Foundation or Architecture Documentation.

---

## Repository Structure

```text
fribot-learning/
├─ .github/
├─ assets/
├─ docs/
├─ projects/
├─ templates/
├─ README.md
├─ SECURITY.md
├─ VERSIONING.md
├─ CHANGELOG.md
└─ LICENSE
```

### `projects/`

Contains official learner-facing PBL projects.

### `templates/`

Contains the reusable authoring structure for creating new projects.

### `docs/`

Contains Foundation, Architecture, and Roadmap Documentation.

### `assets/`

Contains public logos, screenshots, diagrams, and related media.

---

## Ecosystem Repositories

| Repository | Responsibility |
|---|---|
| **fribot-learning** | Public Project-Based Learning projects and documentation |
| **innermirror-landing** | Public Reflection user interface and Runtime result presentation |
| **innermirror-runtime-private** | Private Reflection analysis and Runtime orchestration |

---

## Repository Boundary

The `fribot-learning` repository owns:

- public learner-facing projects,
- reusable project templates,
- starter educational materials,
- public educational references,
- public project documentation,
- Foundation Documentation,
- public Architecture Documentation,
- Roadmap Documentation.

It does **not** own:

- private Reflection analysis,
- Runtime intelligence,
- learner memory,
- private recommendation logic,
- proprietary decision intelligence,
- private Runtime orchestration.

Those responsibilities belong to:

```text
innermirror-runtime-private
```

User-facing Reflection interaction belongs to:

```text
innermirror-landing
```

For detailed boundary rules, see:

- [Repository Boundary](./docs/architecture/REPOSITORY_BOUNDARY.md)
- [Cross-Repository Boundary](./docs/architecture/CROSS_REPOSITORY_BOUNDARY.md)

---

## Technology

The current ecosystem may use the following technologies.

### Public User Interface

- React
- TypeScript

### Private Runtime

- Fastify
- Supabase
- InnerMirror Runtime

The `fribot-learning` repository itself should remain focused on public project content and project structure.

Private Runtime implementation must not be added to this repository.

---

## Contributing

Before implementing new features, contributors should read:

1. [Foundation Documentation](./docs/foundation/)
2. [Architecture Documentation](./docs/architecture/)
3. [Project Template Architecture](./docs/architecture/PROJECT_TEMPLATE_ARCHITECTURE.md)
4. [PBL MVP Master Plan](./docs/roadmap/PBL_MVP_MASTER_PLAN.md)

Project authors should begin from:

- [Project Authoring Template](./templates/project-template/)

Implementation should follow the approved Foundation and Architecture Documentation rather than silently redefining them.

---

## Current Development Status

Current version:

```text
0.x.x
```

Current stage:

```text
Foundation Complete
Project Template Architecture Established
Initial MVP Projects In Development
```

Current priorities:

- complete the Class Concept Robot project,
- connect its Reflection entry to InnerMirror,
- validate the first end-to-end learner experience,
- add the Tandem Dual MCU project using the same structure.

---

## License

This repository is distributed under the **Fribot Educational License 1.0 (FEL-1.0)**.

Educational use is encouraged.

Commercial redistribution of official educational materials and proprietary technologies is restricted.

See the [LICENSE](./LICENSE) file for details.

---

## Contact

Website:

https://lab.fribot.com/

Email:

mail@fribot.com