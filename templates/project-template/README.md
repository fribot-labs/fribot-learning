# Project Title

> Status: Project Template (Authoring Template)

This directory is the standard template used to create every learner-facing
PBL project in the Fribot Learning repository.

It is **not** a completed learner project.

Instead, it provides a reusable structure that project authors copy when
creating a new project.

Every new PBL project should begin from this template.

---

# Purpose

The purpose of this template is to ensure that every learner experiences a
consistent learning flow regardless of the technical topic.

Different projects may teach different technologies.

For example:

- C Programming
- C++ Class Design
- Robotics
- Dual MCU Systems
- Embedded Systems
- Web Development
- AI Applications

However, every project should guide the learner through the same experience.

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

This consistency allows learners to focus on the project itself rather than
learning a different educational structure every time.

---

# Why This Project?

Every project should begin by answering one question.

> **Why is this project worth doing?**

Do **not** explain only the technical result.

Instead, describe the understanding that the learner is expected to gain
through the experience.

Good examples include:

- understanding why classes exist
- understanding why two controllers divide responsibilities
- understanding why state should be protected
- understanding why structure becomes important as systems grow

The learner should know **why** the project exists before beginning.

---

# Project Goal

Describe one concrete and observable outcome.

The project goal should answer:

- What will the learner build?
- What visible result should appear?
- How will the learner know the project is complete?

Example:

> Build a working robot program and modify it to understand why related
> state and behavior belong together inside one class.

Avoid broad goals such as:

- Learn C++
- Learn Robotics
- Understand Programming

Instead, define one practical project outcome.

---

# Expected Learning Experience

Every project should provide the following experience.

1. Begin with something familiar.
2. Execute a working example.
3. Make one meaningful change.
4. Discover the structural meaning behind the change.
5. Reflect on how understanding has changed.

Projects should avoid introducing complex theory before the learner has
experienced a visible result.

---

# Common Learning Flow

Every project follows the same learner-facing progression.

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

The technical content changes.

The learning flow does not.

---

# Project Stages

## Stage 1 — Start

Purpose

Help the learner begin with confidence.

The learner should understand:

- what the project will build,
- what tools are required,
- what the expected result looks like,
- how to begin.

---

## Stage 2 — Run

Purpose

Run the prepared project and observe a visible result.

The learner should first experience:

> "It works."

before studying detailed implementation.

---

## Stage 3 — Modify

Purpose

Change one controlled part of the project.

The learner should observe how one modification changes behavior.

The relationship between

Cause

↓

Effect

should remain obvious.

---

## Stage 4 — Understand

Purpose

Connect practical experience with underlying structure.

The learner begins asking:

- Why does this structure exist?
- Why is this design easier to understand?
- Why was this change beneficial?

This stage introduces meaning rather than additional syntax.

---

## Stage 5 — Reflect

Purpose

Pause after the project and record how understanding changed.

Reflection belongs to InnerMirror.

The project should simply provide an opportunity to enter Reflection.

Reflection should never become a long report.

One meaningful question is enough.

---

# Required Files

Every learner-facing project must contain the following files.

```text
README.md

01_START.md

02_RUN.md

03_MODIFY.md

04_UNDERSTAND.md

05_REFLECT.md

starter-code/

references/
```

These files define the minimum learner experience.

Projects may add files when genuinely required, but should not remove the
common stages.

---

# Starter Code

The `starter-code/` directory contains the minimum files required to begin.

Starter code should:

- build successfully,
- demonstrate one visible result,
- be easy to modify,
- avoid unnecessary abstraction,
- avoid hidden dependencies.

Starter code should **not** contain:

- private Runtime logic,
- proprietary AI code,
- production secrets,
- hidden credentials,
- unrelated experimental features.

---

# References

The `references/` directory contains supporting learning material.

Examples:

- PDF documents
- hardware notes
- public tutorials
- diagrams
- public code examples

Reference material should support the current stage.

It should not become a complete textbook.

---

# Writing Rules

When creating a new project:

- keep instructions short,
- prefer practical tasks,
- delay advanced theory,
- introduce one important concept at a time,
- encourage observation before explanation,
- avoid overwhelming beginners.

Projects should gradually reveal structure.

They should not expose the complete architecture immediately.

---

# Reflection Rule

Projects do not own Reflection.

Reflection belongs to InnerMirror.

Projects should only provide:

- one Reflection entry point,
- one Reflection question,
- one natural transition.

The learner writes a normal InnerMirror Reflection.

Projects must not:

- generate Reflection automatically,
- create project-specific Reflection types,
- pre-fill the learner's conclusion,
- evaluate Reflection quality.

---

# GitHub Rule

GitHub is recommended but optional.

Projects may encourage learners to record:

- commits,
- branches,
- pull requests,
- implementation history.

However, a learner should still be able to complete the project without
connecting GitHub.

GitHub integration should never prevent the first project experience.

---

# Project Completion

A project is complete when:

- the visible result has been achieved,
- the learner has made at least one meaningful modification,
- the learner understands the key structural idea,
- the learner has been invited to Reflection.

Reflection itself remains optional in the MVP.

---

# Out of Scope

This template does not define:

- learner scoring,
- achievements,
- badges,
- dashboards,
- AI-generated curriculum,
- automatic GitHub synchronization,
- Runtime contracts,
- Thinking Maps,
- Domain Maps,
- Living Maps,
- AI OS functionality.

Those capabilities belong to future development stages.

---

# Author Checklist

Before publishing a new project, verify:

- [ ] Project goal is clear.
- [ ] Five-stage structure is preserved.
- [ ] Starter code works.
- [ ] Reference links are valid.
- [ ] Completion criteria are observable.
- [ ] Reflection question is meaningful.
- [ ] Reflection remains a normal InnerMirror Reflection.
- [ ] No private Runtime behavior is exposed.
- [ ] GitHub remains optional.
- [ ] The project can be understood without reading the entire documentation.

---

# Foundation Statement

A learner should begin with action,

discover structure through experience,

and finish by reflecting on how their understanding changed.

Every project in Fribot Learning should preserve this principle.