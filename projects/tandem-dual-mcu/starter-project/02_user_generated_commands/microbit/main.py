"""
Fribot Learning
Tandem Dual MCU

Starter Project 02
User-Generated Commands

Learning flow:

User button input
    ↓
micro:bit main.py
    ↓
microbit_abot.py
    ↓
I2C communication
    ↓
Arduino MicroAbot Runtime
    ↓
Continuous-rotation servos
    ↓
Robot movement

Button mapping:

Button A     → Move forward
Button B     → Move backward
Buttons A+B  → Stop

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
INPUT_POLL_INTERVAL_MS = 50


# ---------------------------------------------------------------------------
# Command states
# ---------------------------------------------------------------------------

COMMAND_STOP = "stop"
COMMAND_FORWARD = "forward"
COMMAND_BACKWARD = "backward"


# ---------------------------------------------------------------------------
# Robot object
# ---------------------------------------------------------------------------

robot = bot(
    LEFT_SERVO_PIN,
    RIGHT_SERVO_PIN,
)


# ---------------------------------------------------------------------------
# Movement commands
# ---------------------------------------------------------------------------

def stop_robot():
    """
    Stop both continuous-rotation servos.

    The program remains active and continues waiting
    for the next user-generated command.
    """

    robot.servo_speed(0, 0)
    display.show(Image.SQUARE)


def move_forward():
    """
    Move the robot forward.

    The opposite speed signs compensate for the two servos
    being mounted in opposite physical directions.
    """

    robot.servo_speed(
        DRIVE_SPEED,
        -DRIVE_SPEED,
    )

    display.show(Image.ARROW_N)


def move_backward():
    """
    Move the robot backward by reversing
    the forward speed signs.
    """

    robot.servo_speed(
        -DRIVE_SPEED,
        DRIVE_SPEED,
    )

    display.show(Image.ARROW_S)


# ---------------------------------------------------------------------------
# Command execution
# ---------------------------------------------------------------------------

def execute_command(command):
    """
    Translate a user-generated command state
    into one robot movement operation.
    """

    if command == COMMAND_FORWARD:
        move_forward()

    elif command == COMMAND_BACKWARD:
        move_backward()

    else:
        stop_robot()


# ---------------------------------------------------------------------------
# User input
# ---------------------------------------------------------------------------

def read_user_command():
    """
    Convert the current micro:bit button state
    into a movement command.

    A+B is checked first so that the stop command
    has priority over individual button commands.

    Returning None means that no new command source
    is currently active. The robot keeps its existing state.
    """

    a_pressed = button_a.is_pressed()
    b_pressed = button_b.is_pressed()

    if a_pressed and b_pressed:
        return COMMAND_STOP

    if a_pressed:
        return COMMAND_FORWARD

    if b_pressed:
        return COMMAND_BACKWARD

    return None


# ---------------------------------------------------------------------------
# Project initialization
# ---------------------------------------------------------------------------

display.show(Image.HAPPY)

# Prepare both Arduino-connected servo pins.
robot.servo_attachpins()

# Begin from a safe and observable stopped state.
current_command = COMMAND_STOP
execute_command(current_command)

sleep(500)


# ---------------------------------------------------------------------------
# Main interaction loop
# ---------------------------------------------------------------------------

while True:
    user_command = read_user_command()

    # Send a command only when the user creates
    # a state different from the current state.
    if (
        user_command is not None
        and user_command != current_command
    ):
        execute_command(user_command)
        current_command = user_command

    sleep(INPUT_POLL_INTERVAL_MS)