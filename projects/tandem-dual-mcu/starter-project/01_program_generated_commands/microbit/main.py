"""
Fribot Learning
Tandem Dual MCU

Starter Project 01
Basic Tandem Drive

Learning flow:

micro:bit main.py
    ↓
microbit_abot.py
    ↓
I2C communication
    ↓
Arduino MicroAbot Runtime
    ↓
Continuous rotation servos
    ↓
Robot movement

Hardware:

Left wheel servo  → Arduino digital pin 13
Right wheel servo → Arduino digital pin 12
"""

from microbit import *
from microbit_abot import bot


# ---------------------------------------------------------------------------
# Hardware configuration
# ---------------------------------------------------------------------------

LEFT_SERVO_PIN = 13
RIGHT_SERVO_PIN = 12

DRIVE_SPEED = 100

FORWARD_TIME_MS = 2000
TURN_TIME_MS = 1000
BACKWARD_TIME_MS = 2000
STOP_TIME_MS = 700


# ---------------------------------------------------------------------------
# Robot object
# ---------------------------------------------------------------------------

robot = bot(
    LEFT_SERVO_PIN,
    RIGHT_SERVO_PIN
)


# ---------------------------------------------------------------------------
# Movement helpers
# ---------------------------------------------------------------------------

def stop_robot(duration_ms=STOP_TIME_MS):
    """
    Stop both wheels and wait briefly.

    A visible pause makes it easier to compare
    each movement with EXPECTED_OUTPUT.md.
    """

    robot.servo_speed(0, 0)
    sleep(duration_ms)


def move_forward():
    """
    Left wheel:  positive speed
    Right wheel: negative speed
    """

    display.show(Image.ARROW_N)

    robot.servo_speed(
        DRIVE_SPEED,
        -DRIVE_SPEED
    )

    sleep(FORWARD_TIME_MS)

    stop_robot()


def pivot_left():
    """
    Stop the left wheel and move the right wheel.
    The robot pivots around the stopped wheel.
    """

    display.show(Image.ARROW_W)

    robot.servo_speed(
        0,
        -DRIVE_SPEED
    )

    sleep(TURN_TIME_MS)

    stop_robot()


def pivot_right():
    """
    Move the left wheel and stop the right wheel.
    The robot pivots around the stopped wheel.
    """

    display.show(Image.ARROW_E)

    robot.servo_speed(
        DRIVE_SPEED,
        0
    )

    sleep(TURN_TIME_MS)

    stop_robot()


def move_backward():
    """
    Reverse the speed signs used for forward movement.
    """

    display.show(Image.ARROW_S)

    robot.servo_speed(
        -DRIVE_SPEED,
        DRIVE_SPEED
    )

    sleep(BACKWARD_TIME_MS)

    stop_robot()


def detach_wheel_servos():
    """
    Stop sending servo control signals after the sequence.
    """

    stop_robot(300)

    bot(LEFT_SERVO_PIN).detach()
    bot(RIGHT_SERVO_PIN).detach()


# ---------------------------------------------------------------------------
# Main project sequence
# ---------------------------------------------------------------------------

display.show(Image.HAPPY)

# Prepare both continuous rotation servos before using servo_speed().
robot.servo_attachpins()

# Begin from an explicit stopped state.
stop_robot(1000)

move_forward()

pivot_left()

pivot_right()

move_backward()

detach_wheel_servos()

display.show(Image.YES)


# ---------------------------------------------------------------------------
# Completion state
# ---------------------------------------------------------------------------

while True:
    """
    The demonstration runs once.

    Touch the micro:bit logo to restart the complete sequence.
    """

    if pin_logo.is_touched():
        reset()

    sleep(100)