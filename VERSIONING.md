# VERSIONING.md

> **Foundation Documentation**
>
> This document defines the versioning and release policy of the Fribot ecosystem.
>
> Version numbers represent meaningful milestones in the evolution of the platform rather than individual implementation tasks.

---

# Purpose

The Fribot ecosystem is developed through small, incremental Pull Requests.

However, versions should represent **user-visible milestones**, not individual commits.

This document defines:

- version numbering
- release stages
- changelog policy
- release criteria

---

# Versioning Strategy

Fribot follows a simplified semantic versioning model.

```
MAJOR.MINOR.PATCH
```

Example

```
0.1.0
1.0.0
1.2.3
2.0.0
```

---

# Version Meaning

## MAJOR

Major architectural or product evolution.

Examples

- Official public release
- Commercial platform launch
- Major architecture redesign

Example

```
0.x.x

↓

1.0.0

↓

2.0.0
```

---

## MINOR

Meaningful functional expansion.

Examples

- GitHub Integration
- Runtime Coaching
- Decision Review
- Portfolio
- Organization Support

Each Minor version should provide visible user value.

---

## PATCH

Bug fixes

Documentation improvements

Performance improvements

Refactoring

Internal maintenance

Patch releases should not significantly change the learning experience.

---

# Development Phases

## 0.x.x

Internal MVP Development

Characteristics

- Active development
- Experimental features
- Foundation documents
- Repository stabilization

Current development belongs to this stage.

---

## 0.1.x

First Working MVP

Includes

- GitHub Login
- Repository Selection
- Reflection
- Manual GitHub Sync
- Runtime Analysis
- PBL Coaching
- Decision Review

This is the first functional educational platform.

---

## 0.5.x

Feature Complete MVP

Includes

- Stable learning flow
- Portfolio
- Senior Thinking Checkpoints
- Runtime stabilization

Feature-complete MVP before public launch.

---

## 1.0.0

First Public Release

The platform is considered ready for public educational use.

Requirements

- Stable architecture
- Complete documentation
- Reliable learning workflow
- Production-quality Runtime
- Public onboarding

---

## 2.x.x

Commercial Expansion

Examples

- Team Learning
- Enterprise Features
- Organization Dashboard
- Marketplace
- Advanced Analytics
- Commercial Services

---

# Pull Request Relationship

Pull Requests do not define versions.

Many Pull Requests may belong to a single version.

Example

```
PR-000

↓

PR-001

↓

PR-002

↓

...

↓

Version 0.1.0
```

Versions represent completed milestones.

PRs represent implementation steps.

---

# Phase Relationship

Development Phases and Versions are related but independent.

Example

```
Phase 0

↓

Phase 1

↓

Phase 2

↓

Version 0.1.0
```

A version may contain multiple development phases.

---

# Changelog Policy

The CHANGELOG should begin with the first meaningful MVP release.

Current policy

```
CHANGELOG starts from

Version 0.1.0
```

Foundation documentation,

repository setup,

and architectural preparation

are intentionally excluded from the CHANGELOG.

These activities belong to project initialization rather than user-facing releases.

---

# Release Criteria

A version should be released only when

- the learning workflow is stable,
- documentation is updated,
- repository boundaries remain correct,
- Runtime is operational,
- user-visible functionality is complete.

Versions should never be created simply because many PRs have accumulated.

---

# Documentation Policy

Every released version should update

- README
- CHANGELOG
- Release Notes

when appropriate.

Foundation Documentation should only change when the long-term philosophy or architecture changes.

---

# Long-Term Version Roadmap

```
0.x.x

Foundation
MVP Development

↓

0.1.x

First Working MVP

↓

0.5.x

Feature Complete MVP

↓

1.0.0

Public Release

↓

2.x.x

Commercial Expansion
```

---

# Foundation Principle

Pull Requests measure implementation.

Versions measure progress.

The purpose of versioning is not to count releases.

The purpose is to communicate meaningful milestones in the evolution of the Fribot ecosystem.
