"""
Fribot Learning
Tandem Dual MCU

Starter Project 03
Environment-Generated Commands

Learning flow:

Environment
    ↓
micro:bit light sensor
    ↓
Sensor value
    ↓
Environment interpretation
    ↓
Movement command
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

Environment mapping:

Bright environment → Move forward
Dark environment   → Stop
Intermediate range → Keep current command

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

SENSOR_POLL_INTERVAL_MS = 100
SENSOR_STABILIZATION_TIME_MS = 1000


# ---------------------------------------------------------------------------
# Environment thresholds
# ---------------------------------------------------------------------------

# A higher threshold is required to enter the Forward state.
LIGHT_FORWARD_THRESHOLD = 120

# A lower threshold is required to return to the Stop state.
LIGHT_STOP_THRESHOLD = 80


# ---------------------------------------------------------------------------
# Command states
# ---------------------------------------------------------------------------

COMMAND_STOP = "stop"
COMMAND_FORWARD = "forward"


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

    The project remains active and continues observing
    the environment for the next state change.
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


# ---------------------------------------------------------------------------
# Command execution
# ---------------------------------------------------------------------------

def execute_command(command):
    """
    Translate an interpreted environment command
    into one robot movement operation.
    """

    if command == COMMAND_FORWARD:
        move_forward()
    else:
        stop_robot()


# ---------------------------------------------------------------------------
# Environment observation
# ---------------------------------------------------------------------------

def read_environment_value():
    """
    Read the current light level using the micro:bit display.

    The returned number is sensor data.

    It is not yet a movement command.
    """

    return display.read_light_level()


def interpret_environment(light_level, current_command):
    """
    Convert a continuous light value into a command state.

    Hysteresis is created by using two thresholds:

    - Enter Forward only at or above LIGHT_FORWARD_THRESHOLD.
    - Enter Stop only at or below LIGHT_STOP_THRESHOLD.
    - Between the thresholds, keep the current command.

    This prevents small sensor fluctuations near one boundary
    from repeatedly switching the robot between Forward and Stop.
    """

    if light_level >= LIGHT_FORWARD_THRESHOLD:
        return COMMAND_FORWARD

    if light_level <= LIGHT_STOP_THRESHOLD:
        return COMMAND_STOP

    return current_command


# ---------------------------------------------------------------------------
# Project initialization
# ---------------------------------------------------------------------------

display.show(Image.HAPPY)

# Prepare both Arduino-connected servo pins.
robot.servo_attachpins()

# Begin from a safe and observable stopped state.
current_command = COMMAND_STOP
execute_command(current_command)

# Allow the display-based light sensor to stabilize before
# interpreting the first environment value.
sleep(SENSOR_STABILIZATION_TIME_MS)


# ---------------------------------------------------------------------------
# Main environment-observation loop
# ---------------------------------------------------------------------------

while True:
    light_level = read_environment_value()

    environment_command = interpret_environment(
        light_level,
        current_command,
    )

    # Send a new command only when the interpreted
    # environment state differs from the active command.
    if environment_command != current_command:
        execute_command(environment_command)
        current_command = environment_command

    sleep(SENSOR_POLL_INTERVAL_MS)