# micro:bit Library Installation

> Project: Tandem Dual MCU

---

# Purpose

This document explains how to install the shared MicroPython library used by every Tandem Dual MCU Starter Project.

The shared library is provided by the Tandem Robotics repository.

---

# Repository

Official Repository

https://github.com/wookjin-chung/Tandem_Robotics

Locate:

```text
microbit/

microbit_abot.py
```

---

# Step 1 — Download

Clone the repository.

```bash
git clone https://github.com/wookjin-chung/Tandem_Robotics.git
```

or download the ZIP archive.

---

# Step 2 — Open the micro:bit Editor

Use the official micro:bit Python Editor or another compatible MicroPython editor.

---

# Step 3 — Import the Library

Copy

```text
microbit_abot.py
```

into the project.

The project should contain:

```text
main.py

microbit_abot.py
```

---

# Step 4 — Write or Copy main.py

Each Starter Project provides its own

```text
main.py
```

Examples:

```text
01_basic_tandem_drive

02_button_command

03_sensor_role_split
```

Only replace

```text
main.py
```

between learning stages.

Do not modify

```text
microbit_abot.py
```

during the MVP.

---

# Step 5 — Download to micro:bit

Transfer the MicroPython project to the micro:bit.

Wait until the board restarts.

---

# Verification

Confirm:

- [ ] microbit_abot.py present
- [ ] main.py present
- [ ] Program downloads successfully
- [ ] Handshake completes
- [ ] Robot responds correctly

---

# Learning Principle

The shared library remains stable.

Learning occurs by modifying

```text
main.py
```

rather than changing the communication Runtime.

This separation mirrors real software engineering,

where application code evolves while platform infrastructure remains stable.

---

# Next Step

Continue to:

```text
starter-project/

01_basic_tandem_drive/
```