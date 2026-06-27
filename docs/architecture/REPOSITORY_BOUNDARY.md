# Repository Boundary

This document defines the official responsibility boundary of the `fribot-learning` repository.

The purpose of this document is to prevent role confusion between the public education platform, the user interface, and the private runtime.

---

# Repository Identity

`fribot-learning` is the official **public PBL Coding Education Platform** of the Fribot ecosystem.

It is responsible for education, learning structure, project templates, public documentation, and long-term roadmap documentation.

It is **not** responsible for AI reasoning, private runtime logic, or decision intelligence.

---

# This Repository Owns

`fribot-learning` owns the following responsibilities.

- PBL learning structure
- Project-based coding education
- Learning templates
- Public educational documentation
- Foundation documentation
- MVP roadmap
- Versioning policy
- License policy
- Public education philosophy

---

# This Repository Does Not Own

`fribot-learning` must not contain the following responsibilities.

- Runtime intelligence
- AI reasoning
- Decision Review engine
- PBL Coaching algorithm
- Memory processing
- Private Reflection analysis
- GitHub Snapshot analysis
- InnerMirror Runtime orchestration
- Proprietary decision intelligence

These responsibilities belong to `innermirror-runtime-private`.

---

# Boundary with innermirror-landing

`innermirror-landing` owns the user-facing interface.

Examples:

- Reflection editor
- GitHub connection UI
- Repository selection UI
- "Reflect + GitHub Analyze" button
- Coaching result display
- Portfolio visualization

`fribot-learning` may describe the learning flow, but it should not implement the live user interface.

---

# Boundary with innermirror-runtime-private

`innermirror-runtime-private` owns all private intelligence.

Examples:

- Reflection analysis
- GitHub Snapshot analysis
- PBL Coaching
- Decision Review
- Senior Thinking Checkpoints
- Memory
- Continuity Intelligence

If a feature analyzes learner Reflection or GitHub data to generate coaching, it belongs to `innermirror-runtime-private`.

---

# Boundary with innermirror-engine-private

`innermirror-engine-private` is a private research repository.

It may contain experimental recommendation logic or decision intelligence prototypes.

It is not part of the active MVP execution path.

Useful ideas may later be migrated into `innermirror-runtime-private` after architectural review.

---

# Boundary with fribot-flow-timeline

`fribot-flow-timeline` is a historical development archive and sandbox.

It preserves earlier Reflection Engine and UX experiments.

New MVP features should not be implemented there.

---

# Feature Placement Guide

Use this guide before implementing new functionality.

| Feature Type | Correct Repository |
|-------------|-------------------|
| Learning template | fribot-learning |
| Project-based curriculum | fribot-learning |
| Public education documentation | fribot-learning |
| User interface | innermirror-landing |
| Reflection input screen | innermirror-landing |
| GitHub analyze button | innermirror-landing |
| Runtime analysis | innermirror-runtime-private |
| Decision Review | innermirror-runtime-private |
| PBL Coaching generation | innermirror-runtime-private |
| Experimental recommendation logic | innermirror-engine-private |
| Historical prototype reference | fribot-flow-timeline |

---

# Implementation Rule

Before adding a feature to `fribot-learning`, ask:

1. Is this educational content or learning structure?
2. Is this public documentation?
3. Is this roadmap or foundation governance?

If the answer is yes, it may belong here.

If the feature performs analysis, coaching, memory, or decision intelligence, it does not belong here.

---

# Security Rule

`fribot-learning` is public.

Therefore, this repository must never contain private runtime logic, proprietary AI prompts, sensitive analysis logic, or learner cognitive data.

Public education is allowed.

Private decision intelligence is not.

---

# Foundation Principle

`fribot-learning` defines the learning platform.

It does not implement the private intelligence.

Clear repository boundaries protect both the architecture and the long-term educational mission of Fribot.