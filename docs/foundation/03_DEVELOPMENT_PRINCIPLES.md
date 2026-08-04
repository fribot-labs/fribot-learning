# Development Principles

> **Foundation Documentation**
>
> This document defines the repository-level development principles of the
> `fribot-learning` repository.
>
> It translates the Learning Constitution into practical standards for
> architecture, implementation, documentation, and Pull Request development.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> This document must not redefine or replace constitutional meaning.

---

# Constitutional Basis

Fribot Learning implements the Learning Constitution maintained in the
`innermirror-constitution` repository.

Repository development should remain consistent with:

- Fribot Learning Constitution
- Learning Principle Zero
- Comparison-Based Learning
- Experience Before Explanation
- Reflection Emergence
- Runtime Constitution

The highest governing learning principle is:

> **Learning does not begin with explanation.**
>
> **Learning begins when expectation meets reality.**

This principle applies not only to learner-facing materials, but also to the
development of project templates, documentation structures, repository
boundaries, and service integrations.

---

# Document Authority

The governing hierarchy is:

```text
Learning Constitution
        ↓
Fribot Foundation Documentation
        ↓
Repository Architecture
        ↓
Development Principles
        ↓
Pull Requests
        ↓
Learner-Facing Implementation
```

The Constitution defines enduring meaning.

Foundation documents translate that meaning into repository identity.

Architecture documents define structural responsibility.

This document defines how development work should proceed.

Pull Requests implement one controlled and reviewable change at a time.

---

# Purpose

This document defines the development principles of the Fribot ecosystem,
with particular responsibility for the `fribot-learning` repository.

Every Pull Request, architectural decision, documentation change, and
implementation should be evaluated against these principles.

These principles exist to ensure that development remains:

- constitutionally aligned,
- educationally meaningful,
- architecturally clear,
- secure,
- maintainable,
- and appropriate for the current development phase.

Development is not complete merely because code works.

It is complete when the implementation also creates the intended learning
experience while preserving repository boundaries.

---

# Principle 1 — Learning Service First

The objective is to build a coherent learning service.

Technology exists to support that service.

Users should experience a connected learning journey rather than a
collection of unrelated technical features.

Whenever a conflict exists between technical sophistication and meaningful
learner experience, the learner experience takes priority unless safety,
security, or architectural integrity requires otherwise.

Every feature should answer:

> **What meaningful learner experience does this create or improve?**

If this question cannot be answered clearly, the feature should be
reconsidered.

---

# Principle 2 — Experience Before Optimization

Programming remains important.

However, technical implementation is not the final educational objective.

The learner's understanding should improve through meaningful experience.

Every learner-facing feature should contribute to one or more of the
following:

- forming an expectation,
- executing a real system,
- observing behavior,
- comparing meaningful differences,
- understanding a relationship,
- improving reasoning,
- improving decision-making,
- improving architectural awareness.

Features that increase technical complexity without improving learner
experience should be postponed.

The preferred development question is not:

> How much functionality can be added?

It is:

> What experience will help the learner understand something that was not
> previously visible?

---

# Principle 3 — Thinking Through Action

Thinking is not separate from implementation.

Running, modifying, debugging, and comparing systems are ways of making
thought visible.

Fribot Learning should therefore avoid treating the learner's thinking as
something that must be completed before action begins.

The preferred learning progression is:

```text
Expectation

↓

Implementation or Execution

↓

Observed Consequence

↓

Comparison

↓

Revised Understanding

↓

Improved Judgment
```

Code is an implementation artifact.

Its behavior creates evidence.

Comparison turns that evidence into understanding.

Reflection may preserve the resulting change.

---

# Principle 4 — Decision Transparency

Technical decisions matter because they produce consequences.

Learners should gradually become able to explain:

- what they expected,
- what they chose,
- why they chose it,
- what alternatives existed,
- what happened after implementation,
- what trade-offs became visible,
- and what they would now change.

Decision Review should therefore examine more than the final source code.

It may consider:

- problem framing,
- assumptions,
- alternatives,
- implementation evidence,
- observed consequences,
- revised judgment.

The objective is not to grade a learner against one ideal decision.

The objective is to help the learner form, test, and revise judgment.

---

# Principle 5 — Project-Based Learning

Every substantial learning experience should occur within a meaningful
project context.

Projects provide the environment in which:

- constraints become visible,
- decisions produce consequences,
- abstractions become necessary,
- responsibilities must be divided,
- and trade-offs can be experienced.

The operational project structure may include:

```text
Project

↓

Milestone

↓

Pull Request

↓

Executable Result
```

The constitutional learning structure should preserve:

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

Not every project must use these exact labels.

However, the underlying progression should remain recognizable whenever
applicable.

---

# Principle 6 — Meaningful Comparison

Every substantial Starter Project or learner-facing development unit should
identify at least one meaningful comparison.

Examples include:

- expected behavior versus actual behavior,
- original code versus modified code,
- procedural code versus class-based structure,
- one controller versus two controllers,
- direct hardware control versus message-based control,
- local responsibility versus shared responsibility,
- learner-generated code versus AI-generated code.

Comparison should be intentionally designed.

It should not be left entirely to chance.

A project that produces working code but no meaningful opportunity for
comparison may be technically complete while remaining educationally
incomplete.

---

# Principle 7 — Explanation After Experience

Explanation remains essential.

However, it should not automatically precede every learner encounter.

Whenever meaningful experience can be created safely and accessibly, the
preferred order is:

```text
Expectation

↓

Execution

↓

Observation

↓

Comparison

↓

Explanation

↓

Understanding
```

Documents such as `WHY_IT_WORKS.md` and `UNDERSTAND.md` should connect an
experienced phenomenon with its underlying concept.

They should not remove every opportunity for discovery before execution.

Reference documents may still provide direct explanations.

However, direct explanation alone should not be treated as a complete Fribot
Learning project.

---

# Principle 8 — Reflection Emergence

Reflection should not be treated as a mandatory completion checkbox.

Meaningful Reflection naturally emerges when the learner recognizes a change
in understanding.

Fribot Learning is responsible for creating experiences that can make
Reflection valuable.

It is not responsible for forcing Reflection when no meaningful cognitive
change has occurred.

Reflection prompts should focus on questions such as:

- What surprised me?
- Which expectation changed?
- What relationship became visible?
- Which assumption proved incorrect?
- What do I understand differently now?
- Which new question emerged?

Reflection should preserve change rather than merely summarize activity.

---

# Principle 9 — Project Context Preservation

Meaningful Reflection often emerges from project experience.

The relevant project context should therefore remain available whenever
Reflection is recorded or analyzed.

Useful context may include:

- the project identity,
- the learner's expectation,
- the executed version,
- the observed behavior,
- the modification made,
- the comparison performed,
- the related commit or Pull Request.

However, Fribot Learning should not assume that every human Reflection must
belong to a project.

The project-context requirement applies to PBL-generated learning flows, not
to all possible InnerMirror Reflection.

---

# Principle 10 — Repository Responsibility

Every repository should have one clearly defined primary responsibility.

Before implementing a feature, developers must determine which repository
owns it.

Repository boundaries are architectural boundaries.

The primary relationship is:

```text
fribot-learning

↓

Learner Experience and Project Materials
```

```text
innermirror-landing

↓

Reflection Entry and User Presentation
```

```text
innermirror-runtime-private

↓

Private Reflection Processing and Continuity
```

```text
innermirror-engine-private

↓

Experimental Decision and Recommendation Intelligence
```

A feature should not be placed in a repository merely because it is
technically convenient.

It should be placed where its responsibility belongs.

---

# Principle 11 — Runtime Independence

Runtime is an independent private intelligence service.

Landing provides:

- user interaction,
- input,
- presentation,
- visualization.

Fribot Learning provides:

- projects,
- executable materials,
- learning progression,
- observation structures,
- comparison structures,
- transitions toward Reflection.

Runtime provides:

- Reflection processing,
- continuity analysis,
- pacing,
- coaching,
- memory,
- private cognitive interpretation.

Presentation logic should not move into Runtime.

Private reasoning and continuity logic should not move into Landing or
Fribot Learning.

Runtime should not become the owner of learner-facing project design.

---

# Principle 12 — User-Triggered GitHub Synchronization

The MVP intentionally avoids automatic GitHub synchronization.

The official MVP workflow remains user-triggered.

```text
Reflection

+

Reflect + GitHub Analyze

↓

GitHub Snapshot

↓

Runtime Analysis
```

Automatic synchronization mechanisms such as:

- GitHub Webhooks,
- background schedulers,
- continuous polling,
- automatic repository aggregation,

belong to future phases.

Manual synchronization should first demonstrate real educational and product
value.

---

# Principle 13 — Security by Design

User Reflections, decision histories, and long-term cognitive patterns are
personal intellectual assets.

Sensitive processing should remain inside private Runtime boundaries.

Public repositories should never contain:

- private coaching models,
- private reasoning algorithms,
- personal memory structures,
- identity interpretation,
- user-specific decision intelligence,
- private Reflection data.

The architecture should protect:

- user privacy,
- personal intellectual data,
- private implementation logic,
- repository responsibility.

Security is not a later optimization.

It is a development boundary.

---

# Principle 14 — Simplicity Before Automation

Simple systems are easier to understand, validate, and govern.

Automation should be introduced only after a manual workflow has demonstrated
clear value.

The MVP prioritizes:

```text
Clarity

↓

Validation

↓

Educational Value

↓

Automation
```

Automation that hides the learning process or obscures repository
responsibility should be postponed.

---

# Principle 15 — Executable Learning Materials

Learner-facing projects should provide executable materials whenever
practical.

A Starter Project should not exist only as an abstract description.

It should provide enough material for the learner to:

- prepare the environment,
- run a baseline,
- observe expected behavior,
- identify unexpected behavior,
- make one controlled modification,
- compare the result,
- understand the underlying relationship.

Executable does not mean production-grade.

It means that the learner can encounter reality rather than only read about
it.

---

# Principle 16 — Controlled Modification

Modification should be intentional and observable.

A learner should not be asked to change many unrelated variables at the same
time.

Preferred modifications:

- change one input,
- change one responsibility,
- change one communication rule,
- change one abstraction,
- change one observable behavior.

Controlled modification makes comparison possible.

Uncontrolled modification makes learning ambiguous.

---

# Principle 17 — Documentation Has Distinct Roles

Different project documents should serve distinct educational functions.

Typical roles include:

- `README.md` — project map and entry point
- `EXPECTED_OUTPUT.md` — expectation formation
- `TROUBLESHOOTING.md` — observation verification
- `WHY_IT_WORKS.md` — explanation after experience
- `BEFORE_YOU_CONTINUE.md` — recognition of changed understanding
- `REFLECT.md` — transition toward Reflection, when appropriate

Documents should not duplicate one another without purpose.

Their order should support the intended learning progression.

---

# Principle 18 — Artificial Intelligence as a Learning Material

Artificial intelligence can generate:

- code,
- explanations,
- designs,
- debugging suggestions,
- alternative implementations.

AI output should not automatically be treated as learner understanding.

Instead, AI-generated artifacts may become objects of comparison.

Learners should be encouraged to examine:

- what the AI assumed,
- what structure it selected,
- how the result behaves,
- how it differs from another solution,
- what remains unexplained,
- what the learner now understands.

AI reduces implementation cost.

Fribot Learning should use that reduction to increase opportunities for
observation, comparison, and understanding.

---

# Principle 19 — Continuous Evolution

No document, component, project template, or architecture is permanently
complete.

However, evolution should preserve constitutional identity.

Every modification should answer:

- Which constitutional principle does this implement?
- Which repository owns the responsibility?
- What existing learner experience changes?
- What comparison becomes possible or impossible?
- Does this improve understanding or merely add complexity?

Evolution should improve the implementation without silently redefining its
purpose.

---

# Pull Request Evaluation Checklist

Every Pull Request should answer the following questions.

## Constitutional Alignment

- Which constitutional principle does this PR implement?
- Does it preserve the Learning Constitution?
- Does it avoid redefining constitutional meaning inside the implementation
  repository?

---

## Service

- Does this improve the coherent learner journey?
- Is the user-facing value clear?

---

## Learning Experience

- Does this create or improve a meaningful learner experience?
- Can the learner interact with something observable?

---

## Expectation

- Can the learner form a meaningful expectation before seeing the result?
- Is the expected behavior understandable and testable?

---

## Comparison

- Does the learner encounter at least one meaningful comparison?
- Is the comparison appropriate for the intended learner?

---

## Explanation

- Does the explanation follow the relevant experience where practical?
- Does it connect observed behavior with an underlying principle?
- Does it avoid revealing every conclusion before the learner begins?

---

## Reflection

- Does the design naturally support Reflection?
- Is Reflection connected to possible change in understanding?
- Is Reflection being used as more than a completion checkbox?

---

## Architecture

- Does this respect repository boundaries?
- Is the responsibility placed in the correct repository?
- Does the change preserve separation among Learning, Landing, Runtime, and
  Engine?

---

## Runtime

- Does this preserve Runtime independence?
- Has private cognitive processing remained outside public repositories?

---

## Security

- Does this keep sensitive processing and personal cognitive data inside
  private boundaries?
- Does the PR expose any implementation or user information unnecessarily?

---

## MVP

- Is this necessary for the current MVP?
- Can the same value be demonstrated through a simpler manual workflow?
- Should this change remain in the future roadmap instead?

---

## Maintainability

- Is the PR limited to one meaningful responsibility?
- Are documentation and tests updated where necessary?
- Can a future developer understand why this change exists?

---

# Definition of Done

A feature or learning artifact is complete only when all relevant conditions
are satisfied.

## Learning

- The learning objective is clear.
- A meaningful learner experience exists.
- The expected behavior can be understood.
- At least one meaningful comparison exists.
- Explanation follows relevant experience where practical.
- Reflection is naturally supported when meaningful cognitive change is
  possible.

## Technical

- The executable behavior works as intended.
- Failure states are understandable.
- Troubleshooting guidance exists when necessary.
- The implementation remains appropriately simple for the MVP.

## Architecture

- The architectural responsibility is correct.
- Repository boundaries remain intact.
- Runtime, Landing, Learning, and Engine responsibilities remain separated.
- Sensitive processing remains private.

## Documentation

- Required documentation is updated.
- Each document has a distinct role.
- The development decision is traceable.
- Future maintainability is preserved.

Completion is measured by the quality and clarity of the learning experience,
not by the number of files, features, or lines of code.

---

# Long-Term Development Strategy

The Fribot ecosystem grows through small, well-defined, high-quality Pull
Requests.

Every PR should represent one meaningful constitutional, educational, or
architectural step.

Large multi-purpose Pull Requests should be avoided.

The preferred development progression is:

```text
Constitutional Principle

↓

Repository Responsibility

↓

Small Pull Request

↓

Executable Result

↓

Observation and Validation

↓

Documentation

↓

Next Controlled Step
```

Stable architecture emerges through continuous, incremental, and
well-documented evolution.

---

# Foundation Principle

Development should never optimize only for implementation speed.

Every implementation should improve:

- the quality of learner experience,
- the visibility of meaningful relationships,
- the clarity of repository responsibility,
- the quality of long-term understanding.

```text
Software creates experiences.

Experiences reveal differences.

Differences transform understanding.

Understanding strengthens judgment.

Judgment supports long-term growth.
```

Software is an artifact.

Meaningful human growth is the objective.