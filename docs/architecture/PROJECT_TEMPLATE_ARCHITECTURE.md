# Project Template Architecture

> **Architecture Documentation**
>
> Status: MVP Architecture  
> Scope: `fribot-learning`  
> Purpose: Define the common structure used by all learner-facing PBL projects.
>
> This document translates the Learning Constitution and Learning Content
> Standard into a repeatable learner-facing project architecture.
>
> The constitutional source of truth remains the
> `fribot-labs/innermirror-constitution` repository.
>
> This document defines project structure and educational responsibility.
>
> It does not redefine constitutional meaning.

---

# 1. Constitutional Basis

Fribot Learning implements the Learning Constitution through learner-facing
projects.

The governing documentation hierarchy is:

```text
Learning Constitution

↓

Fribot Foundation Documentation

↓

Constitution Application Documentation

↓

Project Template Architecture

↓

Starter Projects

↓

Learner Experience
```

This architecture must remain consistent with:

- `docs/constitution/CONSTITUTION_REFERENCE.md`
- `docs/constitution/LEARNING_CONTENT_STANDARD.md`
- `docs/constitution/CONSTITUTIONAL_REVIEW_CHECKLIST.md`
- `docs/foundation/01_FOUNDATION_PHILOSOPHY.md`
- `docs/foundation/03_DEVELOPMENT_PRINCIPLES.md`
- `docs/foundation/04_REPOSITORY_ROLES.md`
- `docs/architecture/REPOSITORY_BOUNDARY.md`
- `docs/architecture/CROSS_REPOSITORY_BOUNDARY.md`
- `docs/architecture/SERVICE_RESPONSIBILITY_MATRIX.md`

The highest governing learning principle is:

> **Learning does not begin with explanation.**
>
> **Learning begins when expectation meets reality.**

Every substantial Fribot Learning project should preserve this principle
whenever a meaningful learner experience can be designed.

---

# 2. Purpose

Fribot Learning already defines its:

- educational philosophy,
- constitutional relationship,
- repository boundaries,
- service responsibilities,
- development principles,
- learning-content standards,
- MVP roadmap.

This document defines the first repeatable learner-facing architecture:

```text
Project Template
```

A Project Template gives a learner a small, executable route from the first
project action to a possible final Reflection entry.

The template should help the learner:

- form an expectation,
- execute something real,
- observe the result,
- make one controlled change,
- compare meaningful differences,
- understand an underlying relationship,
- recognize whether their understanding changed,
- and optionally continue into InnerMirror Reflection.

This document does not define:

- a learning management system,
- an AI coaching engine,
- a dynamic curriculum,
- a progress database,
- a project-specific Reflection type,
- a private Runtime process,
- a learner identity model,
- or an automated cognitive evaluation system.

Its responsibility is limited to defining how learner-facing PBL projects are
structured, authored, reviewed, and added to the public `fribot-learning`
repository.

---

# 3. Repository Responsibility

The `fribot-learning` repository owns:

- public PBL project structure,
- learner-facing project templates,
- executable Starter Project materials,
- public educational references,
- project progression,
- observation guidance,
- meaningful comparison structures,
- explanation after experience,
- project completion guidance,
- Reflection transition links and questions,
- project-authoring standards.

The repository does not own:

- private Reflection analysis,
- Runtime intelligence,
- user-memory processing,
- continuity scoring,
- identity interpretation,
- project-specific cognitive analysis,
- AI-generated personalized learning paths,
- private recommendation logic,
- long-term learner-state management,
- adaptive coaching strategy selection.

These boundaries must remain consistent with the repository and
cross-repository governance documents.

The Project Template Architecture must not weaken, duplicate, or bypass those
boundaries.

---

# 4. Architecture Goal

The MVP must support more than one project without creating a new platform
structure for every project.

The intended growth path is:

```text
First Project

↓

Second Project

↓

Third Project

↓

Up to Five Maintained MVP Projects
```

Each project may contain different:

- technical content,
- hardware,
- programming languages,
- project outcomes,
- and learning goals.

However, every project should preserve the same underlying learner-facing
architecture.

This allows the repository to grow through additional learning experiences
rather than repeated platform redesign.

The governing principle is:

> **Fribot Learning adds educational value by adding projects to a stable
> common structure, not by creating a new platform architecture for every
> project.**

---

# 5. Two Complementary Learning Structures

Fribot Learning distinguishes between:

1. the visible project lifecycle,
2. the underlying constitutional learning mechanism.

They are complementary rather than competing structures.

---

## 5.1 Project Lifecycle

Every MVP project follows the same five-stage learner-facing lifecycle.

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

This structure tells the learner where they are within the project.

---

## 5.2 Constitutional Learning Flow

Within that lifecycle, learning should normally progress through:

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

This structure explains how the project produces understanding.

---

## 5.3 Relationship Between the Two Structures

The stages may implement the learning flow as follows:

| Project Stage | Primary Learning Responsibility |
|---|---|
| Start | Orientation and expectation formation |
| Run | Encounter with observable reality |
| Modify | Controlled change and comparison generation |
| Understand | Explanation and structural interpretation |
| Reflect | Recognition and preservation of changed understanding |

The exact boundaries may vary by project.

However, every substantial project should make clear:

- where expectation is formed,
- where reality is encountered,
- where observation occurs,
- what meaningful comparison is created,
- where explanation is introduced,
- and where changed understanding may be recognized.

---

# 6. Two-Layer Project Structure

The MVP separates project content into two directories.

---

## 6.1 `projects/`

The `projects/` directory contains actual learner-facing projects.

Example:

```text
projects/
├── class-concept-robot/
└── tandem-dual-mcu/
```

Each directory represents one complete project experience.

A learner may enter a project directory, understand the goal, follow the
stages, access starter materials, and reach an optional final Reflection
transition.

The files inside `projects/` are intended for real learner use.

---

## 6.2 `templates/project-template/`

The `templates/project-template/` directory contains the common authoring
skeleton used to create a new project.

It is not itself a completed learner course.

It exists for:

- project authors,
- maintainers,
- reviewers,
- and future repository contributors.

```text
templates/project-template/

        ↓ copy and adapt

projects/<project-id>/
```

When a new project is added, the common template should be copied and adapted
to the new subject.

The common architecture should not be redesigned for every project.

---

# 7. Why `projects/` and `templates/` Are Separate

The two directories have different responsibilities.

## `projects/`

Stores completed or actively developed learner-facing experiences.

## `templates/`

Stores the reusable authoring structure.

This separation prevents:

- learners encountering unfinished authoring placeholders,
- project authors inventing incompatible structures,
- repeated redesign of project flow,
- confusion between a real course and a reusable skeleton,
- accidental coupling between one project and the entire repository.

The rule is:

> A learner enters `projects/`.
>
> A project author begins from `templates/project-template/`.

---

# 8. Required Project Directory

Every complete project should use the following minimum top-level structure.

```text
project-id/
├── README.md
├── 01_START.md
├── 02_RUN.md
├── 03_MODIFY.md
├── 04_UNDERSTAND.md
├── 05_REFLECT.md
├── starter-code/
└── references/
```

Additional files and subdirectories may be added when the project genuinely
requires them.

A project must not introduce a different top-level learning lifecycle without
a separate architecture decision.

---

# 9. Supporting Learning Documents

A project, stage, or executable learning unit may also include:

```text
learning-unit/
├── README.md
├── EXPECTED_OUTPUT.md
├── TROUBLESHOOTING.md
├── WHY_IT_WORKS.md
├── BEFORE_YOU_CONTINUE.md
└── executable-files/
```

These files supplement the five-stage lifecycle.

They do not replace it.

For example:

- `01_START.md` may link to `EXPECTED_OUTPUT.md`.
- `02_RUN.md` may link to `TROUBLESHOOTING.md`.
- `04_UNDERSTAND.md` may link to `WHY_IT_WORKS.md`.
- `05_REFLECT.md` may follow `BEFORE_YOU_CONTINUE.md`.

---

# 10. File-Name Flexibility Rule

Not every project requires the same number of files.

A small project may combine several responsibilities in one document.

For example:

- `README.md` may include basic Run instructions.
- `02_RUN.md` may include the expected-output checklist.
- `04_UNDERSTAND.md` may contain the complete explanation.
- `05_REFLECT.md` may include the Before You Continue checkpoint.

However:

> **File names may remain flexible. Educational responsibilities must remain
> explicit.**

Every project author should be able to identify:

- which document forms expectation,
- which document guides execution,
- which document verifies observation,
- which document supports comparison,
- which document explains the result,
- which document helps recognize changed understanding,
- and which document provides the Reflection transition.

---

# 11. Document Responsibility Map

The recommended responsibility map is:

| Document | Primary Responsibility |
|---|---|
| `README.md` | Project map and entry point |
| `01_START.md` | Preparation and first expectation |
| `EXPECTED_OUTPUT.md` | Observable expectation formation |
| `02_RUN.md` | Execution and encounter with reality |
| `TROUBLESHOOTING.md` | Observation verification |
| `03_MODIFY.md` | Controlled change and comparison generation |
| `WHY_IT_WORKS.md` | Explanation after experience |
| `04_UNDERSTAND.md` | Structural interpretation of the comparison |
| `BEFORE_YOU_CONTINUE.md` | Recognition of changed understanding |
| `05_REFLECT.md` | Optional transition toward InnerMirror |

Documents should not duplicate one another without an educational reason.

---

# 12. Project README Responsibility

Each project `README.md` should explain:

- why the project exists,
- the concrete project outcome,
- required hardware and software,
- expected prior knowledge,
- the five project stages,
- the main meaningful comparison,
- minimum completion criteria,
- where the learner should begin.

The README is a project map.

It must not become a complete textbook.

Detailed theory should remain in stage documents, supporting explanations, or
external references.

---

## 12.1 Recommended README Sections

```markdown
# Project Title

## Why This Project?

## Project Goal

## Learning Experience

## What Changes?

## What Remains the Same?

## Requirements

## Project Structure

## Learning Flow

## Stages

## Meaningful Comparison

## Completion Criteria

## InnerMirror Transition
```

Not every section is mandatory for a very small project.

However, staged or comparative projects should normally include both:

- `What Changes?`
- `What Remains the Same?`

---

# 13. Meaningful Comparison Requirement

Every substantial Starter Project must intentionally create at least one
meaningful comparison.

Examples include:

```text
Expected Behavior
vs
Actual Behavior
```

```text
Original Implementation
vs
Modified Implementation
```

```text
Procedural Structure
vs
Class-Based Structure
```

```text
Single Controller
vs
Two Cooperating Controllers
```

```text
Program-Generated Command
vs
User-Generated Command
```

```text
User-Generated Command
vs
Environment-Generated Command
```

```text
Learner-Generated Code
vs
AI-Generated Code
```

A project author should be able to answer:

> **What meaningful comparison will the learner experience?**

If no meaningful comparison can be identified, the material may still be a
technical demonstration or reference.

However, it may not yet constitute a complete Fribot Learning Starter
Project.

---

# 14. Stage Document Standard

Each stage document should normally contain:

```markdown
# Stage Title

## Goal

## What Changes?

## What Remains the Same?

## Required Work

## Observe

## Compare

## Reference

## Completion Check

## Think About
```

Sections may be omitted when they are not meaningful for a particular stage.

However, the educational responsibilities should remain visible.

---

## 14.1 Goal

The `Goal` section defines one observable goal for the stage.

It should answer:

> What should the learner accomplish before moving on?

The goal should be:

- concrete,
- limited,
- observable,
- appropriate to the current stage.

---

## 14.2 What Changes?

The `What Changes?` section identifies the controlled difference introduced
in the stage.

Examples:

- one value,
- one function,
- one input source,
- one responsibility,
- one message,
- one timing rule,
- one abstraction,
- one observable behavior.

The section makes the comparison target explicit.

---

## 14.3 What Remains the Same?

The `What Remains the Same?` section identifies structural continuity.

Examples:

- hardware platform,
- message flow,
- output device,
- Arduino execution responsibility,
- micro:bit communication role,
- project completion rule,
- base class interface.

This section helps the learner distinguish structural change from structural
continuity.

---

## 14.4 Required Work

The `Required Work` section contains a short list of executable actions.

Each action should:

- begin with a clear verb,
- be possible to verify,
- avoid unnecessary theory,
- remain limited to the current stage.

---

## 14.5 Observe

The `Observe` section tells the learner what reality to inspect.

Examples:

- motor behavior,
- LED state,
- sensor value,
- message timing,
- terminal output,
- changed code path,
- failure behavior.

Observation should precede explanation wherever practical.

---

## 14.6 Compare

The `Compare` section asks the learner to contrast two meaningful states.

Examples:

- expectation and actual behavior,
- before and after modification,
- one command source and another,
- successful and failed communication,
- direct control and message-based control.

The comparison should remain simple enough to interpret.

---

## 14.7 Reference

The `Reference` section provides only the material required for the current
stage.

References may include:

- a short explanation,
- a PDF page,
- an external educational link,
- a code example,
- a hardware guide,
- a troubleshooting note.

References should not force the learner to read an entire textbook before
continuing.

---

## 14.8 Completion Check

The `Completion Check` section helps the learner decide whether to continue.

Example:

```markdown
- [ ] The example runs.
- [ ] The expected result is visible.
- [ ] The observed result was compared with the expectation.
- [ ] The controlled modification was tested.
- [ ] One meaningful difference was identified.
- [ ] One remaining question was recorded.
```

Completion criteria should be observable.

---

## 14.9 Think About

The `Think About` section contains one short question.

It should encourage understanding without interrupting project momentum.

Examples:

- What changed when you modified this value?
- Which part of the code appears to remember the current state?
- Why might these two responsibilities need to be separated?
- What remained unchanged even though the input source changed?
- What became easier to understand after seeing both versions?

The question should not require a long essay.

---

# 15. Stage 1 — Start

The learner understands:

- what will be built,
- what is required,
- what visible result is expected,
- what prior knowledge is assumed,
- how to begin,
- what to observe,
- what first prediction to make.

The Start stage should reduce unnecessary uncertainty.

It should not begin with extensive theory.

The learner should quickly understand:

```text
What am I making?

What do I need?

What do I expect to happen?

What should I observe first?
```

---

## 15.1 Required Characteristics

- one concrete project goal,
- clear hardware and software requirements,
- minimal prior-knowledge assumptions,
- an observable first result,
- one initial expectation or prediction,
- no unnecessary architecture terminology.

---

## 15.2 The Start Stage Must Not

- explain the entire technical domain,
- reveal every learning conclusion,
- require the learner to understand the final architecture,
- force GitHub setup before the project can be understood,
- introduce advanced design theory before the first action,
- provide a model Reflection answer.

---

# 16. EXPECTED_OUTPUT.md — Expectation Formation

`EXPECTED_OUTPUT.md` establishes an observable expectation before or during
the first execution.

It should explain:

- what successful behavior looks like,
- which outputs can be observed,
- which conditions indicate success,
- what the learner should predict,
- what should remain unchanged.

Possible observations include:

- motor movement,
- LED state,
- sensor response,
- serial output,
- message timing,
- button response,
- controller behavior.

---

## 16.1 Expected Output Rule

`EXPECTED_OUTPUT.md` should answer:

> What should I be able to observe?

It should not fully answer:

> Why does the system work this way?

That explanation belongs later.

```text
EXPECTED_OUTPUT.md
= What should happen?

WHY_IT_WORKS.md
= Why does it happen?
```

---

# 17. Stage 2 — Run

The learner executes a prepared example and confirms its observable behavior.

The first successful result should occur before extensive conceptual
explanation whenever practical.

This stage creates:

- a direct encounter with reality,
- confidence,
- a working baseline,
- evidence for future comparison.

The learner should be able to say:

> The project works in its original form.

The learner should also begin distinguishing:

- what matched the expectation,
- what differed from the expectation,
- what remains uncertain.

---

## 17.1 Required Characteristics

- prepared Starter Project example,
- build, upload, or execution instructions,
- observable expected result,
- basic troubleshooting guidance,
- explicit completion criteria,
- opportunity to compare expectation with reality.

---

## 17.2 The Run Stage Must Not

- require the learner to write the complete project from scratch,
- introduce several unrelated variables at once,
- hide the expected result,
- turn the first execution into an unnecessarily large debugging exercise,
- require the full theory before running.

---

# 18. TROUBLESHOOTING.md — Observation Verification

Troubleshooting is not merely error correction.

It is guided observation.

`TROUBLESHOOTING.md` should help the learner distinguish among:

- code problems,
- hardware problems,
- environment problems,
- communication problems,
- incorrect expectations,
- incomplete observations.

---

## 18.1 Recommended Troubleshooting Structure

```text
Observed Symptom

↓

What to Check

↓

Possible Cause

↓

Minimal Correction

↓

Run Again

↓

Compare
```

---

## 18.2 Troubleshooting Rule

Troubleshooting should:

- begin from the observed symptom,
- guide inspection before replacement,
- recommend the smallest correction,
- preserve the comparison opportunity,
- invite the learner to run again and reobserve.

It should not immediately replace observation with a long list of answers.

---

# 19. Stage 3 — Modify

The learner changes one controlled part of the project and observes the
result.

The change should be small enough that cause and effect remain visible.

Examples include:

- changing one value,
- replacing one function,
- adding one method,
- changing one input source,
- changing one component role,
- modifying one timing rule,
- separating one responsibility.

The learner should be able to compare:

```text
Original Behavior

↓

One Controlled Change

↓

Changed Behavior
```

---

## 19.1 Required Characteristics

- one clear modification target,
- an explicit `What Changes?` statement,
- an explicit `What Remains the Same?` statement,
- a visible before-and-after difference,
- limited change scope,
- repeatable execution,
- comparison guidance.

---

## 19.2 The Modify Stage Must Not

- require multiple major changes at once,
- hide the relationship between code and result,
- demand a full architectural redesign,
- introduce several advanced concepts without need,
- make the comparison ambiguous.

Controlled modification makes comparison possible.

Uncontrolled modification makes learning difficult to interpret.

---

# 20. WHY_IT_WORKS.md — Explanation After Experience

`WHY_IT_WORKS.md` connects observed behavior with underlying principles.

It may explain:

- code and hardware relationships,
- state and behavior,
- responsibility separation,
- message flow,
- control flow,
- communication,
- timing,
- abstraction,
- structural differences,
- extension possibilities.

The explanation should answer questions already created by experience.

---

## 20.1 Explanation Order

The preferred order is:

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

`WHY_IT_WORKS.md` should not be required before the learner has encountered
the relevant phenomenon unless safety or basic execution requires prior
knowledge.

---

## 20.2 Explanation Boundary

`WHY_IT_WORKS.md` primarily explains:

> Why did the observed behavior occur?

`04_UNDERSTAND.md` primarily helps the learner ask:

> What does this comparison reveal about the larger structure?

The two documents may be combined in a small project, but their
responsibilities should remain conceptually distinct.

---

# 21. Stage 4 — Understand

The learner connects practical results to an underlying concept, relationship,
or structure.

This is where the project moves beyond simple execution.

The recommended progression is:

```text
Observed Difference

↓

Meaningful Comparison

↓

Underlying Relationship

↓

Engineering Concept

↓

New Question
```

The learner may begin to understand:

- what information the system remembers,
- what actions the system performs,
- which parts depend on one another,
- which responsibilities remain local,
- which information must be communicated,
- why one structure may be easier to modify,
- what new question has appeared.

---

## 21.1 Required Characteristics

- comparison between meaningful states,
- one structural concept,
- one understandable system view,
- one relation between cause and effect,
- one remaining question,
- language appropriate to the learner's current level.

---

## 21.2 The Understand Stage Must Not

- become a complete textbook chapter,
- introduce unrelated architecture concepts,
- imply that one design is always correct,
- force advanced terminology before experiential understanding,
- hide trade-offs,
- prescribe one Reflection conclusion.

---

# 22. BEFORE_YOU_CONTINUE.md — Changed Understanding Checkpoint

`BEFORE_YOU_CONTINUE.md` is not an examination.

It gives the learner a short pause before moving forward.

Its purpose is to help the learner recognize whether their understanding has
changed.

Recommended questions include:

- What did you originally expect?
- What actually happened?
- What surprised you?
- What changed and what remained the same?
- Which relationship became visible?
- What now seems clearer?
- What is still difficult?
- What question has become more important?
- What would you like to change next?

The learner does not need to answer every question.

This document should remain short enough to preserve project momentum.

---

# 23. Stage 5 — Reflect

The learner is invited to record how their understanding changed.

Reflection remains a normal InnerMirror Reflection.

The project may provide:

- project title,
- stage title,
- one Reflection question,
- a public project reference,
- an optional GitHub reference.

The project must not prewrite the learner's conclusion.

The learner writes the Reflection directly.

---

## 23.1 Reflection Emergence Principle

Reflection should not be requested merely because a stage has ended.

Reflection becomes meaningful when the learner recognizes that something has
changed in their understanding.

```text
Experience

↓

Observation

↓

Comparison

↓

Changed Understanding

↓

Reflection
```

The project should create the conditions for Reflection.

It should not manufacture a predetermined Reflection result.

---

## 23.2 Example Reflection Direction

```text
At first I thought...

After running and modifying the project...

What became clearer...

What still feels unresolved...

What I want to explore next...
```

---

## 23.3 Reflection Rules

- Reflection should be short enough not to interrupt project momentum.
- Reflection should not be required after every small task.
- Reflection should occur after meaningful experience.
- Reflection must remain optional in the MVP.
- Reflection must not be used as a grading mechanism.
- Reflection must not be replaced by a prefilled answer.
- Reflection must not assume every learner experienced the same change.
- Reflection must not expose private Runtime analysis in the public project.

---

# 24. Recommended Reflection Questions

Useful questions include:

- What surprised you?
- Which expectation changed?
- Which relationship became visible?
- What do you understand differently now?
- What remains unresolved?
- Which question would you like to carry forward?
- What would you now do differently?

Questions should focus on change, not repetition.

---

# 25. GitHub Rule

GitHub is an optional but recommended execution record.

A learner may use GitHub to preserve:

- source code,
- commits,
- branches,
- Pull Requests,
- test results,
- unresolved issues,
- implementation decisions.

The project template must remain usable by a beginner who has not yet
connected GitHub.

GitHub integration must not be a prerequisite for:

- opening the project,
- understanding its purpose,
- running Starter Project code,
- completing the first execution,
- observing the result,
- entering a general InnerMirror Reflection.

The MVP may connect GitHub through InnerMirror.

This public repository must not require automatic GitHub synchronization.

---

# 26. InnerMirror Connection Rule

PBL and InnerMirror should feel like one continuous but constitutionally
separated user journey.

The intended experience is:

```text
PBL Project

↓

Meaningful Project Experience

↓

Recognition of Changed Understanding

↓

Optional Reflection Entry

↓

InnerMirror Reflection Screen

↓

Learner Writes a General Reflection
```

In the MVP:

- the learner may open InnerMirror from the PBL project,
- project title, stage, question, or public reference may be displayed,
- the Reflection input remains under learner control,
- the learner writes the Reflection directly,
- the Reflection remains a normal InnerMirror Reflection,
- Fribot Learning does not privately interpret the Reflection,
- Fribot Learning does not call the private Runtime directly.

---

# 27. Project Context Transfer Rule

Project context must not be transferred automatically merely because the
learner completed a project stage.

Only explicit, minimal, user-authorized project context may be included
through an approved contract.

Permitted context may include:

- public project identifier,
- project title,
- learning stage,
- public repository URL,
- learner-selected commit,
- learner-selected Pull Request,
- short non-sensitive project summary.

Project context must not include:

- hidden cognitive interpretation,
- identity claims,
- private learner memory,
- inferred psychological state,
- continuity scores,
- private coaching instructions.

The learner should understand when project context is being submitted.

---

# 28. Reflection Independence

The Project Template Architecture must preserve Reflection independence.

The MVP must not create:

- `ProjectReflection`,
- `PblReflection`,
- `CourseReflection`,
- project-specific Reflection storage,
- project-specific cognitive identity,
- project-specific private Runtime contracts without architectural review.

Reflection belongs to InnerMirror.

The PBL project creates the experience and provides an entry question.

InnerMirror accepts Reflection beyond Fribot Learning projects as well.

---

# 29. Initial MVP Projects

The MVP currently begins with two project families.

These projects are not independent demonstrations.

Together they validate the first learner-facing architecture of Fribot
Learning.

The current validation status is:

```text
class-concept-robot

↓

In Development
```

```text
tandem-dual-mcu

↓

Phase 1 Validated
```

The purpose of these projects is to validate the common Project Template
Architecture before expanding the number of learner-facing projects.

---

## 29.1 `class-concept-robot`

This project begins with familiar procedural robot code and gradually helps
the learner understand why related state and behavior may be represented
through a class.

The project should move through a comparison such as:

```text
Working Procedural Robot Code

↓

C and C++ Comparison

↓

Small Class-Based Modification

↓

State and Behavior Relationship

↓

Optional Reflection
```

The learner may gradually understand:

- object,
- state,
- behavior,
- member variable,
- method,
- public interface,
- private boundary,
- why related state and behavior are grouped together.

The learner should experience the structural difference before receiving a
complete object-oriented explanation.

This project is expected to follow the same constitutional learning structure
validated by the Tandem project.

The full educational content remains outside the scope of this architecture
document.

---

## 29.2 `tandem-dual-mcu`

The Tandem Dual MCU project is the first validated implementation of the
Fribot Learning Project Template Architecture.

It uses an Arduino and a micro:bit as cooperating controllers while
preserving one stable Tandem architecture.

The current validated Starter Project sequence is organized by the source of
the command.

```text
01_program_generated_commands

↓

The Program Generates the Command
```

```text
02_user_generated_commands

↓

The User Generates the Command
```

```text
03_environment_generated_commands

↓

The Environment Generates the Command
```

The primary educational comparison is:

```text
Program

vs

User

vs

Environment
```

The command source changes.

The core architecture remains stable.

```text
Input Source

↓

Interpretation

↓

Movement Command

↓

microbit_abot.py

↓

I2C Communication

↓

Arduino Runtime

↓

Robot Behavior
```

Throughout Tandem Phase 1, learners gradually discover:

- command source,
- interpretation,
- responsibility separation,
- communication,
- independent controller roles,
- coordinated behavior,
- structural continuity across changing inputs.

Every Starter Project explicitly identifies:

- what changes,
- what remains the same,
- what the learner should observe,
- what comparison reveals the larger architecture.

Starter Project 03 additionally demonstrates the optional use of a
Reference Foundation by extending the micro:bit built-in light-sensor example
into a complete environment-driven command architecture.

The Tandem project therefore serves as the first validated reference
implementation of the Fribot Learning Project Template Architecture.

The full educational content remains outside the scope of this architecture
document.

---

# 30. Staged Project Continuity Rule

Projects containing multiple consecutive learning units must explicitly
describe both change and continuity.

Every stage or unit should answer:

```text
What Changes?

What Remains the Same?

Every validated Starter Project

should clearly identify

Command Source

when applicable.
```

This requirement helps the learner distinguish:

- a new input from a new architecture,
- a modified behavior from a modified responsibility,
- a local change from a system-wide change,
- conceptual growth from complete replacement.

A new stage should not appear as an unrelated project when it is actually a
controlled evolution of the previous stage.

---

# 31. MVP Project Limit

Additional projects may be added later.

The maintained MVP set should remain at five project families or fewer until:

- the common structure is validated,
- the Starter Project content standard is stable,
- the InnerMirror Reflection transition is tested,
- learners can complete the project flow without excessive support.

A new project may be added only when:

- it follows the common five-stage lifecycle,
- it implements a meaningful comparison,
- it can use the existing Reflection transition pattern,
- it does not require private Runtime logic in this repository,
- it does not require a new learner database,
- it does not require a new authentication system,
- it does not violate repository boundaries,
- it does not require a new platform architecture.

---

# 32. New Project Authoring Rule

During the MVP, new learner-facing projects should follow the validated
Project Template Architecture.

The Tandem Dual MCU project currently serves as the primary reference
implementation.

Rather than redesigning the learner experience, project authors should
preserve the validated educational structure and adapt it to the new project.

The author should then:

1. define one concrete project goal,
2. identify the meaningful learner experience,
3. define at least one meaningful comparison,
4. identify what changes,
5. identify what remains the same,
6. verify all required hardware and software,
7. prepare executable Starter Project materials,
8. preserve the constitutional learning flow,

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

Optional Reflection
```

9. identify where expectation is formed,
10. identify where reality is observed,
11. place explanation after relevant experience,
12. include a `Reference Foundation` section when the project extends an
    existing educational example,
13. provide clear navigation to the previous and next learning stage where
    applicable,
14. verify all relative links,
15. confirm that the project does not expose private Runtime behavior,
16. review the project using the Constitutional Review Checklist.

After multiple project families have been validated, a reusable
`templates/project-template/` directory may be extracted from those validated
projects.

The MVP intentionally validates real learner projects before introducing a
dedicated project template.

---

# 33. Project Naming Rule

Project directories should use lowercase kebab-case.

Examples:

```text
class-concept-robot
tandem-dual-mcu
web-memo-app
sensor-control-basics
robot-state-machine
```

Names should be:

- short,
- descriptive,
- stable,
- technically meaningful,
- understandable without internal architecture knowledge.

Project names must not expose private or speculative internal concepts such
as:

- AI OS,
- hidden cognitive model names,
- private Runtime names,
- internal synchronization layers,
- proprietary research architecture.

---

# 34. Starter Code Rule

The `starter-code/` directory contains only the minimum files required to
begin.

Starter code should:

- run or build in a known environment,
- produce an observable result,
- establish a working baseline,
- avoid unnecessary abstraction,
- include only required dependencies,
- be simple enough to modify during Stage 3,
- preserve the meaningful comparison.

Starter code should not:

- contain production secrets,
- include private Runtime logic,
- depend on unreleased private packages,
- require hidden credentials,
- expose proprietary analysis behavior,
- silently send project or user information elsewhere.

---

# 35. Reference Material Rule

The `references/` directory may contain:

- short public explanations,
- links to external educational resources,
- diagrams,
- hardware notes,
- public code references,
- official project material,
- source attribution,
- optional deeper study.

It should not contain:

- private architecture documents,
- proprietary Runtime prompts,
- private contracts,
- confidential research notes,
- user data,
- private learner context,
- internal cognitive-model specifications.

References should support the current experience.

They should not force the learner to study the entire domain before beginning.

---

# 36. Public Repository Rule

The Project Template Architecture belongs to a public repository.

Therefore, public project files should expose only what is required for the
learner experience.

Public documents may explain:

- project purpose,
- project flow,
- required work,
- expected behavior,
- technical concepts,
- meaningful comparison,
- Reflection transition,
- GitHub as an optional record.

Public documents must not expose:

- private Reflection analysis,
- internal recommendation logic,
- hidden user models,
- private-memory processing,
- private prompts,
- identity inference,
- proprietary cognitive interpretation.

---

# 37. AI-Era Project Rule

Artificial intelligence may help learners:

- generate code,
- suggest modifications,
- explain errors,
- compare alternatives,
- propose architectures.

AI-generated output is an artifact.

It is not automatic evidence of understanding.

A project using AI should preserve opportunities to ask:

- What did the AI assume?
- What did the learner expect?
- What actually happened?
- How does one generated solution differ from another?
- Which responsibility belongs where?
- What does the learner now understand?

AI may reduce implementation cost.

The Project Template should use that reduction to increase observation,
comparison, and understanding.

---

# 38. MVP Exclusions

This architecture does not introduce:

- learner accounts inside `fribot-learning`,
- progress databases,
- scoring,
- badges,
- automatic GitHub synchronization,
- AI-generated dynamic projects,
- dynamic curriculum generation,
- project-specific Reflection entities,
- private Runtime contract changes,
- knowledge graphs,
- Living Map implementation,
- AI OS functionality,
- private learner modeling,
- automated psychological interpretation,
- automatic project-context transfer,
- mandatory AI coaching.

These exclusions are deliberate.

They protect the MVP from unnecessary complexity and keep development focused
on the learner's first meaningful experience.

---

# 39. Change Rule

Changes to project content do not require an architecture update when they
preserve the common structure.

Examples:

- improving Stage 2 instructions,
- replacing one Starter Project file,
- adding a public reference,
- correcting a completion checklist,
- improving an expected-output description,
- improving a troubleshooting path,
- improving a Reflection question.

Changes require architecture review when they introduce:

- a different top-level stage lifecycle,
- removal of meaningful comparison,
- a new system dependency,
- mandatory GitHub integration,
- a new Reflection data type,
- direct Runtime communication from `fribot-learning`,
- private analysis logic in the public repository,
- a new learner-state database,
- a new authentication requirement,
- automatic project-context submission,
- more than five maintained MVP project families,
- a project-specific UI platform.

---

# 40. Project Completion Standard

A learner-facing project is educationally complete when the learner can:

- understand the project goal,
- prepare the required environment,
- form at least one expectation,
- execute a working baseline,
- observe meaningful behavior,
- make one controlled modification,
- compare meaningful differences,
- understand at least one engineering relationship,
- distinguish what changed from what remained stable,
- recognize whether understanding changed,
- optionally continue into Reflection.

Working software alone does not complete a Fribot Learning project.

Meaningful understanding completes the learning experience.

---

# 41. Architecture Completion Definition

The Project Template Architecture is considered established when:

- the common template directory exists,
- the initial project directories exist,
- all five stage responsibilities exist in the template,
- Constitution Application documents are referenced,
- expectation formation is represented,
- observable reality is represented,
- meaningful comparison is required,
- explanation follows relevant experience,
- changed understanding can be recognized,
- Reflection remains optional and emergent,
- repository documentation links to this architecture,
- the root README links to learner-facing projects,
- no private Runtime behavior is introduced,
- no project-specific Reflection type is created,
- GitHub remains optional,
- user-authorized context rules are preserved,
- the structure can support up to five MVP project families.

---

# 42. Constitutional Validation Checklist

Before a Project Template Architecture PR is merged, verify:

```markdown
- [ ] The Learning Constitution is referenced.
- [ ] The Learning Content Standard is referenced.
- [ ] The Constitutional Review Checklist is referenced.
- [ ] `projects/` exists.
- [ ] `templates/project-template/` exists.
- [ ] Initial project directories exist.
- [ ] The five-stage lifecycle is preserved.
- [ ] Predict → Run → Observe → Compare → Understand → Reflect is represented.
- [ ] The template identifies where expectation is formed.
- [ ] The template identifies where reality is observed.
- [ ] At least one meaningful comparison is required.
- [ ] Explanation follows relevant experience.
- [ ] Changed understanding can be recognized.
- [ ] Reflection remains optional and emergent.
- [ ] Staged projects define What Changes.
- [ ] Staged projects define What Remains the Same.
- [ ] All relative links work.
- [ ] Existing Foundation principles remain intact.
- [ ] Existing repository boundaries remain unchanged.
- [ ] No Landing source code was modified.
- [ ] No Runtime source code was modified.
- [ ] No private architecture was exposed.
- [ ] No project-specific Reflection type was added.
- [ ] No GitHub integration was made mandatory.
- [ ] No learner database was added.
- [ ] No automatic project-context transfer was introduced.
- [ ] Project Position is clear.
- [ ] Learning Order is clear.
- [ ] Navigation links are valid.
- [ ] Shared Runtime is documented.
- [ ] Reference Foundation is documented if applicable.
```

---

# 43. Project Review Checklist

Before a new learner-facing project is merged, verify:

```markdown
## Experience

- [ ] The learner can execute or observe something real.
- [ ] A working baseline exists.
- [ ] The project is more than a passive explanation.

## Expectation

- [ ] The learner can form a clear expectation.
- [ ] The expected result is observable.

## Comparison

- [ ] At least one meaningful comparison is explicitly designed.
- [ ] The comparison is appropriate to the learner's level.
- [ ] What Changes is identified.
- [ ] What Remains the Same is identified.

## Explanation

- [ ] Explanation follows relevant experience.
- [ ] WHY_IT_WORKS or its equivalent explains observed behavior.
- [ ] UNDERSTAND or its equivalent reveals structural meaning.

## Reflection

- [ ] The learner can recognize changed understanding.
- [ ] Reflection remains optional.
- [ ] The project does not prewrite the learner's conclusion.

## Boundary

- [ ] The project contains no private Runtime processing.
- [ ] No personal cognitive data is stored.
- [ ] Any project-context transfer is explicit and user-authorized.

## Technical

- [ ] Starter code runs or builds in a known environment.
- [ ] Expected output is documented.
- [ ] Troubleshooting guidance exists where necessary.
- [ ] Completion criteria are observable.

## Navigation

- [ ] The learner knows where to begin.
- [ ] The learner knows where to continue.
- [ ] The learner knows when the project is complete.
```

---

# 44. Foundation Statement

A PBL project should:

- begin with an approachable action,
- create an expectation,
- produce an observable result,
- introduce one controlled change,
- reveal a meaningful difference,
- explain the deeper relationship after experience,
- and give the learner an opportunity to recognize how understanding changed.

Reflection is not an additional assignment placed at the end.

Reflection is a possible consequence of meaningful experience.

---

# 45. Final Architecture Rule

> **Fribot Learning adds new educational value by adding meaningful projects
> to a stable common structure, not by creating a new platform architecture
> for every project.**

And:

> **File names may evolve.**
>
> **Educational responsibilities must remain visible.**

This rule governs all MVP project additions.