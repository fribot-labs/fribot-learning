# SECURITY.md

# Security Policy

The Fribot ecosystem is designed around the principle that a learner's decision history is significantly more valuable than ordinary application data.

Reflection records, learning history, and decision evolution represent personal intellectual assets.

Security is therefore considered a core architectural principle rather than an implementation detail.

---

# Security Philosophy

Fribot separates the system into public and private responsibilities.

```
Public Learning

↓

User Interface

↓

Private Runtime

↓

Decision Intelligence

↓

Learning Memory
```

Educational content may be public.

Decision intelligence remains private.

---

# Security Principles

## 1. Security by Design

Security is considered during architecture design.

It should never be treated as an afterthought.

Every new feature should preserve:

- repository boundaries
- runtime independence
- private decision processing

---

## 2. Repository Separation

Public repositories should never contain

- runtime intelligence
- coaching algorithms
- memory processing
- decision models

Private repositories are responsible for all cognitive processing.

---

## 3. Runtime Isolation

The official Runtime performs

- Reflection Analysis
- GitHub Snapshot Analysis
- Decision Review
- PBL Coaching
- Learning Memory

Only processed results are returned to public interfaces.

Raw decision processing remains inside the private Runtime.

---

## 4. Least Exposure

The system should expose only the minimum amount of information required.

Examples

Public

- Learning Progress
- Coaching Results
- Portfolio

Private

- Reflection History
- Decision Models
- Runtime Intelligence
- Learning Memory

---

## 5. GitHub Data

Fribot analyzes GitHub repositories only when explicitly requested by the learner.

The MVP workflow is

```
Reflection

+

Reflect + GitHub Analyze

↓

GitHub Snapshot

↓

Runtime Analysis
```

No automatic repository monitoring is performed during the MVP.

---

# Cognitive Data

Fribot treats the following as sensitive information.

- Reflection
- Decision History
- Learning Context
- Coaching History
- Long-term Learning Trajectory

These data should remain under the learner's control whenever possible.

---

# Educational Content

Educational use is encouraged.

However,

official Fribot educational materials remain protected.

Examples include

- PDF documents
- official learning materials
- diagrams
- illustrations
- project templates
- proprietary educational content

Commercial redistribution requires permission.

---

# Proprietary Components

The following remain proprietary.

- InnerMirror Runtime
- Decision Intelligence
- Coaching Engine
- Runtime orchestration
- Cognitive processing
- Prompt engineering
- Internal recommendation logic

Public repositories intentionally exclude these components.

---

# Responsible Disclosure

If you discover a security vulnerability affecting the Fribot ecosystem,

please report it privately before public disclosure.

Do not publish security issues that could expose user data or compromise private Runtime services.

Contact

mail@fribot.com

---

# Long-Term Security Direction

Future versions of Fribot aim to strengthen user ownership of learning data.

Planned directions include

- stronger runtime isolation
- encrypted storage
- improved access control
- user-controlled data management
- privacy-preserving learning architecture

Specific implementation details will evolve over time.

---

# Scope

This document applies to the public Fribot repositories.

Private runtime infrastructure may implement additional security measures that are intentionally not documented publicly.

---

# Foundation Principle

Code can be replaced.

Infrastructure can evolve.

A learner's decision history cannot.

Protecting the learner's intellectual growth is therefore one of the highest priorities of the Fribot ecosystem.
