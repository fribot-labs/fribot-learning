# Foundation Documentation

The Foundation Documentation defines the long-term philosophy, architecture, and development principles of the Fribot ecosystem.

These documents serve as the constitutional foundation of the project.

Every architectural decision, repository change, and major feature should remain consistent with the principles defined here.

---

# Purpose

The purpose of the Foundation Documentation is to ensure that the Fribot ecosystem evolves with a consistent direction over time.

Rather than documenting implementation details, these documents define the permanent rules that guide development.

They answer four fundamental questions:

1. Why does the project exist?
2. How is the system organized?
3. How should development decisions be made?
4. Which repository owns each responsibility?

---

# Foundation Documents

## 01_FOUNDATION_PHILOSOPHY.md

Defines the vision, mission, educational philosophy, and long-term goals of the Fribot ecosystem.

Topics include:

- Vision
- Mission
- Learning Philosophy
- Decision Evolution
- Senior Thinking
- Security Philosophy
- Long-Term Vision

---

## 02_REPOSITORY_ARCHITECTURE.md

Defines the technical architecture of the Fribot ecosystem.

Topics include:

- System Architecture
- Data Flow
- Runtime Boundary
- Public / Private Separation
- Repository Topology
- Security Architecture

---

## 03_DEVELOPMENT_PRINCIPLES.md

Defines the development principles that every Pull Request should follow.

Topics include:

- Service First
- Thinking Before Coding
- Runtime Independence
- Project-Based Learning
- Manual GitHub Synchronization
- Security by Design
- Pull Request Evaluation Checklist

---

## 04_REPOSITORY_ROLES.md

Defines the permanent responsibility of every repository.

Topics include:

- Repository Lifecycle
- Repository Responsibilities
- Active / Research / Archive
- Repository Selection Guide
- Repository Boundary Rules

---

# Reading Order

Developers joining the project should read the documents in the following order.

```
01_FOUNDATION_PHILOSOPHY

↓

02_REPOSITORY_ARCHITECTURE

↓

03_DEVELOPMENT_PRINCIPLES

↓

04_REPOSITORY_ROLES
```

The documents are intentionally ordered from philosophy to implementation.

---

# Scope

The Foundation Documentation defines long-term principles.

It does **not** describe:

- implementation details
- API specifications
- UI behavior
- feature-level documentation

Those belong to other documentation categories.

---

# Relationship with Other Documentation

```
Foundation
│
├── Philosophy
├── Architecture
├── Development Principles
└── Repository Roles

↓

Architecture Documentation

↓

Roadmap

↓

Implementation

↓

Pull Requests
```

Foundation documents influence every other document in the repository.

---

# Modification Policy

Foundation documents are expected to remain stable.

Changes should occur only when:

- the long-term vision changes,
- the repository architecture changes,
- the development philosophy changes,
- or the educational direction fundamentally evolves.

Routine feature development should **not** require modifications to these documents.

---

# Guiding Principle

The Foundation Documentation is the constitutional layer of the Fribot ecosystem.

Architecture may evolve.

Implementation may evolve.

Technology may evolve.

The philosophy and long-term direction defined here should remain the stable foundation upon which every future version of Fribot is built.
