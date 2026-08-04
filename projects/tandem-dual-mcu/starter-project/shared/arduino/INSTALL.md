# Arduino Runtime Installation

> Project: Tandem Dual MCU  
> Platform: Arduino Uno  
> Runtime Source: Tandem_Robotics

---

# Purpose

This document explains how to prepare the shared Arduino Runtime used by every Tandem Dual MCU Starter Project.

The Arduino Runtime is **not maintained inside this repository**.

Instead, it is provided by the official Tandem Robotics repository.

Using one shared Runtime ensures that every learner uses the same verified communication layer.

---

# Runtime Repository

Official Runtime

https://github.com/wookjin-chung/Tandem_Robotics

The repository contains:

- MicroAbot Arduino Library
- Arduino examples
- Robot Runtime
- Communication implementation

Always use the latest verified version unless the project explicitly requires another version.

---

# Step 1 — Clone or Download

Clone the repository.

```bash
git clone https://github.com/wookjin-chung/Tandem_Robotics.git
```

or download the ZIP archive.

---

# Step 2 — Install Arduino Library

Locate:

```text
arduino/

MicroAbot.zip
```

Open Arduino IDE.

```text
Sketch

↓

Include Library

↓

Add .ZIP Library
```

Select

```text
MicroAbot.zip
```

Wait until installation completes.

---

# Step 3 — Open the Runtime Example

Open:

```text
examples/

microbit_abot/

microbit_abot.ino
```

inside the installed Arduino Library.

---

# Step 4 — Select Board

```text
Tools

↓

Board

↓

Arduino Uno
```

---

# Step 5 — Select Port

```text
Tools

↓

Port

↓

Connected Arduino
```

---

# Step 6 — Verify

Click

```text
Verify
```

The project should compile without errors.

---

# Step 7 — Upload

Click

```text
Upload
```

Wait until uploading finishes.

The Arduino Runtime is now installed.

---

# Verification

Confirm:

- [ ] Runtime uploaded
- [ ] Arduino restarts normally
- [ ] No compilation errors
- [ ] MicroAbot library recognized

---

# Important

This Runtime is reused by every Starter Project.

Do **not** modify the Runtime during the MVP.

Only the micro:bit program changes.

---

# Next Step

Continue to:

```text
shared/microbit/INSTALL.md
```