# 03_DEVELOPMENT_PRINCIPLES.md

> **Foundation Documentation**
>
> This document is part of the Fribot Foundation Documentation.
>
> The Foundation Documentation defines the long-term architectural, philosophical, and development principles of the Fribot ecosystem.
>
> All MVP and future development should follow these documents unless explicitly superseded by a later foundation revision.

---

# Development Principles

## Purpose

This document defines the development principles of the Fribot ecosystem.

Every pull request, architectural decision, and implementation should be evaluated against these principles before development begins.

These principles exist to ensure that the project remains consistent, maintainable, and aligned with its long-term vision.

---

# Principle 1 — Service First

The objective is to build a learning service.

Technology exists to support the service.

Users should experience a coherent learning journey rather than isolated technical features.

Whenever a conflict exists between technical complexity and user experience, the learning experience takes priority.

---

# Principle 2 — Thinking Before Coding

Programming is not the primary objective.

Improving the learner's thinking process is.

Every new feature should contribute to at least one of the following:

- better problem framing
- better reasoning
- better decision making
- better architectural thinking
- better long-term learning

If a feature only increases technical complexity without improving learning, it should be postponed.

---

# Principle 3 — Decision Before Code

Code is the implementation.

Decision is the design.

Reflection is the learning process.

Runtime should therefore analyze:

- why decisions were made
- how decisions changed
- what alternatives were considered

rather than evaluating only the final source code.

---

# Principle 4 — Project-Based Learning

Every learner should work inside a real project.

Learning units are organized as

Project

↓

Milestone

↓

Pull Request

↓

Completion

Reflection is always connected to a real software project.

---

# Principle 5 — Runtime Independence

The Runtime is an independent intelligence service.

Landing provides

- user interaction
- presentation
- visualization

Runtime provides

- analysis
- coaching
- decision review
- memory
- continuity

Presentation logic must never move into Runtime.

Decision logic must never move into Landing.

---

# Principle 6 — Manual GitHub Synchronization

The MVP intentionally avoids automatic synchronization.

The official workflow is

Reflection

+

"Reflect + GitHub Analyze"

↓

GitHub Snapshot

↓

Runtime Analysis

Automatic synchronization,

GitHub Webhooks,

background schedulers,

and polling systems

belong to future versions.

---

# Principle 7 — Project Context First

Every Reflection belongs to a project.

Every analysis belongs to a project.

Every coaching result belongs to a project.

There is no standalone Reflection in the MVP.

Project context is always preserved.

---

# Principle 8 — Repository Responsibility

Every repository has exactly one primary responsibility.

Responsibilities should never overlap.

Before implementing any feature,

developers must first determine

which repository owns the responsibility.

Repository boundaries are architectural boundaries.

---

# Principle 9 — Security by Design

Sensitive cognitive data should always remain inside the private Runtime.

Public repositories should never contain

- coaching models
- reasoning algorithms
- memory structures
- decision intelligence

The architecture protects both intellectual property and user privacy.

---

# Principle 10 — Simplicity Before Automation

Simple systems are easier to validate.

Automation should only be introduced after the manual workflow has proven to provide educational value.

The MVP prioritizes

clarity

over

automation.

---

# Principle 11 — Continuous Evolution

No document,

component,

or architecture

is considered permanently complete.

However,

every modification must preserve

the original philosophy

defined in the Foundation Documentation.

Evolution should improve the architecture,

not replace its identity.

---

# Pull Request Evaluation Checklist

Every Pull Request should answer the following questions.

## Service

- Does this improve the learner's experience?

---

## Learning

- Does this improve thinking rather than only coding?

---

## Architecture

- Does this respect repository boundaries?

---

## Runtime

- Does this preserve Runtime independence?

---

## Security

- Does this keep sensitive processing inside the private Runtime?

---

## MVP

- Is this necessary for the MVP?

If not,

move it to the future roadmap.

---

# Definition of Done

A feature is considered complete only when it satisfies all of the following.

- The learning objective is clear.
- The architectural responsibility is correct.
- Repository boundaries remain intact.
- Runtime and Landing remain independent.
- Documentation is updated when necessary.
- Future maintainability is preserved.

Completion is therefore measured by

quality,

not

quantity.

---

# Long-Term Development Strategy

The Fribot ecosystem grows through

small,

well-defined,

high-quality Pull Requests.

Every PR should represent one meaningful architectural step.

Large,

multi-purpose Pull Requests

should be avoided.

Stable architecture emerges through

continuous,

incremental,

well-documented evolution.

---

# Foundation Principle

Development should never optimize only for implementation speed.

Every implementation should improve

the quality of thinking,

the quality of architecture,

and the quality of long-term learning.

Software is the product.

Decision quality is the legacy.
