# Documentation

Welcome to the documentation for the **Fribot Learning** ecosystem.

This directory contains the long-term documentation that defines the philosophy, architecture, roadmap, and implementation strategy of the project.

The documentation is intentionally organized from **high-level concepts** to **implementation details**.

---

# Documentation Structure

```
docs/

├── README.md
│
├── foundation/
│   ├── README.md
│   ├── 01_FOUNDATION_PHILOSOPHY.md
│   ├── 02_REPOSITORY_ARCHITECTURE.md
│   ├── 03_DEVELOPMENT_PRINCIPLES.md
│   └── 04_REPOSITORY_ROLES.md
│
├── architecture/
│
└── roadmap/
```

---

# Reading Guide

Different readers have different goals.

Choose the appropriate starting point below.

---

## New Contributors

Start here.

```
Foundation

↓

Architecture

↓

Roadmap
```

Reading order

1. `foundation/README.md`
2. `01_FOUNDATION_PHILOSOPHY.md`
3. `02_REPOSITORY_ARCHITECTURE.md`
4. `03_DEVELOPMENT_PRINCIPLES.md`
5. `04_REPOSITORY_ROLES.md`

This provides the complete context before writing code.

---

## Developers

Developers should understand

- project philosophy
- repository boundaries
- Runtime responsibilities
- development principles

before implementing new functionality.

Recommended reading

```
Foundation

↓

Architecture

↓

Implementation
```

---

## Project Maintainers

Project maintainers should keep the following documents synchronized.

- README.md
- Foundation Documentation
- Roadmap
- Versioning
- License

These documents define the public identity of the project.

---

# Documentation Categories

## Foundation

Long-term principles.

Defines

- philosophy
- architecture
- repository roles
- development rules

Foundation documents rarely change.

---

## Architecture

Technical system design.

Examples

- Runtime Architecture
- API Design
- Data Flow
- Database Structure
- Security Architecture

Architecture evolves with the implementation.

---

## Roadmap

Development planning.

Examples

- MVP Development Plan
- Phase Planning
- Feature Planning
- Release Roadmap

Roadmap documents describe where the project is going.

---

# Relationship Between Documents

```
Foundation

↓

Architecture

↓

Roadmap

↓

Implementation

↓

Pull Requests
```

Each layer builds upon the previous one.

Implementation should never contradict the Foundation Documentation.

---

# Repository Relationship

The documentation supports the entire Fribot ecosystem.

```
fribot-learning

↓

innermirror-landing

↓

innermirror-runtime-private

↓

Research & Archive Repositories
```

Although documentation is maintained in **fribot-learning**, its principles apply to every repository in the ecosystem.

---

# Documentation Principles

Good documentation should be

- concise
- maintainable
- version-aware
- implementation-independent when possible

Documentation should explain

**why**

before explaining

**how**.

---

# Future Expansion

The documentation structure is designed to grow.

Future categories may include

```
docs/

foundation/

architecture/

roadmap/

adr/

research/

release/

api/

tutorials/
```

New categories should preserve the same hierarchical organization.

---

# Guiding Principle

The documentation is not a collection of notes.

It is the long-term knowledge base of the Fribot ecosystem.

Architecture may evolve.

Implementation may evolve.

Documentation preserves the reasoning behind those changes.
