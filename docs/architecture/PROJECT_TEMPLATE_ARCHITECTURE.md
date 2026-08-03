# Project Template Architecture

> Status: MVP Architecture  
> Scope: `fribot-learning`  
> Purpose: Define the common structure used by all learner-facing PBL projects.

---

## 1. Purpose

Fribot Learning already defines its educational philosophy, repository boundaries, service responsibilities, and MVP roadmap.

This document introduces the first concrete learner-facing architecture:

```text
Project Template
```

A Project Template gives a learner a small and executable route from the first project action to a final Reflection entry.

This document does not define:

- a learning management system,
- an AI coaching engine,
- a dynamic curriculum,
- a progress database,
- a project-specific Reflection type,
- or a private Runtime process.

Its responsibility is limited to defining how learner-facing PBL projects are structured and added to the public `fribot-learning` repository.

---

## 2. Repository Responsibility

The `fribot-learning` repository owns:

- public PBL project structure,
- learner-facing project templates,
- starter project materials,
- public educational references,
- project completion guidance,
- Reflection entry links,
- project authoring standards.

The repository does not own:

- private Reflection analysis,
- Runtime intelligence,
- user memory processing,
- project-specific cognitive analysis,
- AI-generated learning paths,
- private recommendation logic,
- long-term learner state management.

These boundaries must remain consistent with the existing repository and cross-repository governance documents.

The Project Template Architecture must not weaken or duplicate those existing boundaries.

---

## 3. Architecture Goal

The MVP must support more than one project without creating a new platform structure for every project.

The intended growth path is:

```text
First Project
    ↓
Second Project
    ↓
Third Project
    ↓
Up to Five MVP Projects
```

Each project may contain different technical content, hardware, programming languages, and learning goals.

However, every project must preserve the same basic learner-facing structure.

This allows the repository to grow through additional project content rather than repeated platform redesign.

---

## 4. Two-Layer Project Structure

The MVP separates project content into two directories.

### 4.1 `projects/`

The `projects/` directory contains actual learner-facing projects.

Example:

```text
projects/
├─ class-concept-robot/
└─ tandem-dual-mcu/
```

Each directory represents one complete project experience.

A learner may enter a project directory, understand the goal, follow the stages, access starter materials, and reach the final Reflection entry.

The files inside `projects/` are intended for real learner use.

---

### 4.2 `templates/project-template/`

The `templates/project-template/` directory contains the common authoring skeleton used to create a new project.

It is not itself a completed learner course.

It exists for project authors and maintainers.

```text
templates/project-template/
        ↓ copy
projects/<project-id>/
```

When a new project is added, the common template should be copied and then adapted to the new topic.

The common structure should not be redesigned for every project.

---

## 5. Why `projects/` and `templates/` Are Separate

The two directories have different responsibilities.

### `projects/`

Stores completed or actively developed learner-facing experiences.

### `templates/`

Stores the reusable authoring structure.

This separation prevents the following problems:

- learners encountering unfinished authoring placeholders,
- project authors inventing incompatible structures,
- repeated redesign of project flow,
- confusion between a real course and a reusable skeleton,
- accidental coupling between one project and the overall repository.

The rule is:

> A learner enters `projects/`.  
> A project author begins from `templates/project-template/`.

---

## 6. Common Project Lifecycle

Every MVP project follows the same five-stage structure.

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

The technical topic may change, but the learner-facing sequence should remain stable.

This lifecycle is intentionally simple.

It begins with a familiar action, produces a visible result, introduces a controlled change, reveals deeper meaning, and then invites Reflection.

---

## 7. Stage 1 — Start

The learner understands:

- what will be built,
- what is required,
- what visible result is expected,
- what prior knowledge is assumed,
- how to begin.

The Start stage should reduce uncertainty.

It should not begin with extensive theory.

The learner should quickly understand:

```text
What am I making?
What do I need?
What should happen first?
```

### Required characteristics

- one concrete project goal,
- clear hardware and software requirements,
- minimal prior-knowledge assumptions,
- a visible first result,
- no unnecessary architecture terminology.

### The Start stage must not

- explain the entire technical domain,
- require the learner to understand the final system structure,
- force GitHub setup before the project can be understood,
- introduce advanced design theory before the first action.

---

## 8. Stage 2 — Run

The learner executes a prepared example and confirms that it works.

The first successful result should occur before extensive theory is introduced.

This stage creates confidence and establishes a concrete reference point.

The learner should be able to say:

> “The project works in its original form.”

### Required characteristics

- prepared starter example,
- build, upload, or execution instructions,
- expected observable result,
- basic troubleshooting guidance,
- explicit completion criteria.

### The Run stage must not

- require the learner to write the complete project from scratch,
- introduce several unrelated variables at once,
- hide the expected result,
- turn the first execution into a large debugging exercise.

---

## 9. Stage 3 — Modify

The learner changes a controlled part of the project and observes the result.

The change should be small enough that cause and effect remain visible.

Examples include:

- changing one value,
- replacing one function,
- adding one method,
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

### Required characteristics

- one clear modification target,
- a visible before-and-after difference,
- a limited change scope,
- a repeatable execution process,
- a short explanation of what changed.

### The Modify stage must not

- require multiple major changes at once,
- hide the relationship between code and result,
- demand full architectural redesign,
- introduce several advanced concepts without need.

---

## 10. Stage 4 — Understand

The learner connects the practical result to the underlying concept or structure.

This is where the project moves beyond simple execution.

The learner compares the original and modified forms and begins to understand:

- what information the system remembers,
- what actions the system performs,
- which parts depend on one another,
- why one structure may be easier to understand or change,
- what new question has appeared.

This stage may reveal a broader view of the project, but should not require the learner to design a complete system from the beginning.

### Required characteristics

- comparison between original and modified versions,
- one structural concept,
- one simple system view,
- one remaining question,
- language appropriate to the learner’s current level.

### The Understand stage must not

- become a complete textbook chapter,
- introduce unrelated architecture concepts,
- imply that one design is always correct,
- force the learner to use advanced terminology before understanding the experience.

---

## 11. Stage 5 — Reflect

The learner is invited to record how their understanding changed.

Reflection remains a normal InnerMirror Reflection.

The project may provide:

- project title,
- stage title,
- one Reflection question.

The project must not pre-write the learner’s conclusion.

The learner writes the Reflection directly.

### Example Reflection direction

```text
At first I thought...
After running and modifying the project...
What became clearer...
What is still difficult...
What I want to explore next...
```

### Reflection rules

- Reflection should be short enough not to interrupt project momentum.
- Reflection should not be required after every small task.
- Reflection should occur after meaningful experience.
- Reflection must remain optional in the MVP.
- Reflection must not be used as a grading mechanism.
- Reflection must not be replaced by a pre-filled answer.

---

## 12. Required Project Directory

Every project must use the following minimum structure.

```text
project-id/
├─ README.md
├─ 01_START.md
├─ 02_RUN.md
├─ 03_MODIFY.md
├─ 04_UNDERSTAND.md
├─ 05_REFLECT.md
├─ starter-code/
└─ references/
```

Additional files may be added only when the project genuinely requires them.

A project must not introduce a different top-level learning flow without a separate architecture decision.

---

## 13. Project README Responsibility

Each project `README.md` must explain:

- why the project exists,
- the concrete project outcome,
- required hardware and software,
- expected prior knowledge,
- the five project stages,
- minimum completion criteria,
- where the learner should begin.

The README must not become a complete textbook.

Detailed learning material should remain in stage documents or external references.

### Required README sections

```markdown
# Project Title

## Why This Project?

## Project Goal

## Expected Experience

## Requirements

## Stages

## Completion
```

---

## 14. Stage Document Standard

Each stage document should contain the following sections.

```markdown
# Stage Title

## Goal

## Required Work

## Reference

## Completion Check

## Think About
```

---

### 14.1 Goal

The `Goal` section defines one observable goal for the current stage.

It should answer:

> What should the learner accomplish before moving on?

The goal should be concrete and limited.

---

### 14.2 Required Work

The `Required Work` section contains a short list of executable actions.

Each action should:

- begin with a clear verb,
- be possible to verify,
- avoid unnecessary explanation,
- remain limited to the current stage.

---

### 14.3 Reference

The `Reference` section provides only the material required for the current stage.

References may include:

- a short explanation,
- a PDF page,
- an external education link,
- a code example,
- a hardware guide,
- a troubleshooting note.

References should not force the learner to read an entire textbook before continuing.

---

### 14.4 Completion Check

The `Completion Check` section helps the learner decide whether to continue.

Example:

```markdown
- [ ] The example runs.
- [ ] The expected result is visible.
- [ ] The modification was tested.
- [ ] One remaining question was recorded.
```

Completion criteria should be observable.

---

### 14.5 Think About

The `Think About` section contains one short question.

It should encourage understanding without interrupting project flow.

Examples:

- What changed when you modified this value?
- Which part of the code appears to remember the current state?
- Why might these two responsibilities need to be separated?
- What became easier to understand after seeing the whole structure?

The question should not require a long essay.

---

## 15. Reflection Placement

Reflection should occur after meaningful experience, not after every small task.

Recommended Reflection points include:

- the first successful execution,
- resolving a repeated failure,
- changing a design structure,
- selecting a new direction,
- completing the project.

For the first MVP templates, the required Reflection entry is located at the final stage.

Reflection is encouraged but should not block project completion.

---

## 16. GitHub Rule

GitHub is an optional but recommended execution record.

A learner may use GitHub to preserve:

- source code,
- commits,
- branches,
- pull requests,
- test results,
- unresolved issues,
- implementation decisions.

The project template must remain usable by a beginner who has not yet connected GitHub.

GitHub integration must therefore not be a prerequisite for:

- opening the project,
- understanding the project,
- running the starter code,
- completing the first execution,
- entering InnerMirror Reflection.

The MVP may later connect GitHub through InnerMirror, but this public repository must not require automatic GitHub synchronization.

---

## 17. InnerMirror Connection Rule

PBL and InnerMirror should feel like one continuous user experience.

The intended flow is:

```text
PBL Project
    ↓
Meaningful Project Experience
    ↓
Reflection Entry Link
    ↓
InnerMirror Reflection Screen
    ↓
User Writes a General Reflection
```

In the MVP:

- the learner opens InnerMirror from the PBL project,
- project title, stage, and question may be displayed in the UI,
- the Reflection input remains empty,
- the learner writes the Reflection directly,
- the Reflection remains a normal InnerMirror Reflection,
- project context is not sent to the private Runtime.

The `fribot-learning` repository does not call the Runtime directly.

---

## 18. Reflection Independence

The Project Template Architecture must preserve Reflection independence.

The MVP must not create:

- `ProjectReflection`,
- `PblReflection`,
- `CourseReflection`,
- project-specific Reflection storage,
- project-specific Runtime contracts.

The Reflection belongs to InnerMirror.

The PBL project only creates the experience and provides the entry question.

---

## 19. Initial MVP Projects

The MVP begins with two projects.

### 19.1 `class-concept-robot`

This project begins with a familiar procedural coding experience and gradually helps the learner understand why related state and behavior are represented through a class.

The project should move from:

```text
Working Robot Code
        ↓
C and C++ Comparison
        ↓
Small Class Modification
        ↓
State and Behavior Understanding
        ↓
Reflection
```

The learner should eventually understand:

- object,
- state,
- behavior,
- member variable,
- method,
- public interface,
- private boundary,
- why related state and behavior are grouped together.

The complete educational content is outside the scope of this architecture PR.

---

### 19.2 `tandem-dual-mcu`

This project begins with working microcontroller behavior and gradually helps the learner understand role separation, communication, and collaboration between two controllers.

The project should move from:

```text
Single Working Function
        ↓
Two MCU Roles
        ↓
Communication
        ↓
Independent Testing
        ↓
Coordinated Behavior
        ↓
Reflection
```

The learner should eventually understand:

- role separation,
- independent execution,
- communication,
- coordination,
- failure isolation,
- collaboration between components.

The complete educational content is outside the scope of this architecture PR.

---

## 20. MVP Project Limit

Additional projects may be added later.

The maintained MVP set should remain at five projects or fewer until the common structure and InnerMirror Reflection experience have been validated.

A new project should not require a new platform feature.

A new project may be added only when:

- it follows the common five-stage flow,
- it can use the existing Reflection entry pattern,
- it does not require private Runtime logic in this repository,
- it does not require a new learner database,
- it does not require a new authentication system,
- it does not change the repository boundary.

---

## 21. New Project Authoring Rule

A new project should begin by copying:

```text
templates/project-template/
```

into:

```text
projects/<project-id>/
```

The author must then:

1. replace all placeholders,
2. define one concrete project goal,
3. verify all required hardware and software,
4. prepare starter materials,
5. preserve the five-stage flow,
6. write one final Reflection question,
7. verify all relative links,
8. confirm that the project does not expose private Runtime behavior.

---

## 22. Project Naming Rule

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

Project names must not contain private concepts such as:

- AI OS,
- Thinking Map,
- Domain Map,
- Synchronization Layer,
- private Runtime names.

---

## 23. Starter Code Rule

The `starter-code/` directory contains only the minimum files required to begin.

Starter code should:

- run or build in a known environment,
- produce a visible result,
- avoid unnecessary abstraction,
- include only the dependencies required for the project,
- be simple enough to modify in Stage 3.

Starter code should not:

- contain production secrets,
- include private Runtime logic,
- depend on unreleased private packages,
- require hidden credentials,
- expose proprietary analysis behavior.

---

## 24. Reference Material Rule

The `references/` directory may contain:

- short public explanations,
- links to external educational resources,
- diagrams,
- hardware notes,
- public code references,
- official project material.

It should not contain:

- private architecture documents,
- proprietary Runtime prompts,
- private contracts,
- confidential research notes,
- user data,
- internal AI OS specifications.

---

## 25. Public Repository Rule

The Project Template Architecture belongs to a public repository.

Therefore, public project files should expose only what is required for the learner experience.

Public documents may explain:

- the project goal,
- the project flow,
- required work,
- technical concepts,
- Reflection entry,
- GitHub as an optional record.

Public documents must not explain:

- private Reflection analysis,
- internal recommendation logic,
- hidden user models,
- private memory processing,
- cross-map synchronization,
- AI OS architecture.

---

## 26. MVP Exclusions

This architecture does not introduce:

- learner accounts inside `fribot-learning`,
- progress databases,
- scoring,
- badges,
- automatic GitHub synchronization,
- AI-generated projects,
- dynamic course generation,
- project-specific Reflection entities,
- Runtime contract changes,
- knowledge graphs,
- Living Map implementation,
- AI OS functionality,
- private learner modeling,
- automated psychological interpretation.

These exclusions are deliberate.

They protect the MVP from unnecessary complexity and keep development focused on the first user experience.

---

## 27. Change Rule

Changes to project content do not require an architecture update when they preserve the common structure.

Examples:

- improving Stage 2 instructions,
- replacing one starter file,
- adding a public reference,
- correcting a completion checklist,
- improving a Reflection question.

Changes require architecture review when they introduce:

- a different stage lifecycle,
- a new system dependency,
- mandatory GitHub integration,
- a new Reflection data type,
- direct Runtime communication,
- private analysis logic in the public repository,
- a new learner state database,
- a new authentication requirement,
- more than five maintained MVP projects,
- a project-specific UI platform.

---

## 28. Completion Definition

The Project Template Architecture is considered established when:

- the common template directory exists,
- the two initial project directories exist,
- all five stage files exist in the template,
- repository documentation links to this architecture,
- the root README links to learner-facing projects,
- no private Runtime behavior is introduced,
- no project-specific Reflection type is created,
- no actual project curriculum is prematurely implemented,
- GitHub remains optional,
- the project structure can support up to five MVP projects.

---

## 29. Validation Checklist

Before this architecture PR is merged, verify:

```markdown
- [ ] `projects/` exists.
- [ ] `templates/project-template/` exists.
- [ ] Both initial project placeholders exist.
- [ ] All five stage files exist.
- [ ] All relative links work.
- [ ] Existing Foundation documents were not rewritten.
- [ ] Existing repository boundaries remain unchanged.
- [ ] No Landing source code was modified.
- [ ] No Runtime source code was modified.
- [ ] No private architecture was exposed.
- [ ] No project-specific Reflection type was added.
- [ ] No GitHub integration was made mandatory.
- [ ] No learner database was added.
```

---

## 30. Foundation Statement

A PBL project should begin with an approachable action, produce a visible result, reveal a deeper structure gradually, and end by giving the learner an opportunity to reflect on how their understanding changed.

The purpose of the Project Template Architecture is not to create more documentation.

Its purpose is to make every future project immediately implementable without redesigning the platform.

---

## 31. Final Architecture Rule

> Fribot Learning adds new educational value by adding projects to a stable common structure, not by creating a new platform architecture for every project.

This rule governs all MVP project additions.