# SAMD21 Tetris Example

This repository contains a simple skeleton for running a Tetris game on a SAMD21
microcontroller. The example demonstrates how an SPI-driven LED matrix could be
used as the display while buttons attached to GPIO pins control the game.

## Directory Structure

- `src/` – Source files for the Tetris implementation.
  - `main.c` – Application entry point.
  - `tetris.c`, `tetris.h` – Game logic.
  - `led_matrix.c`, `led_matrix.h` – SPI LED matrix driver stubs.
  - `button.c`, `button.h` – Button input stubs.

The code is not fully complete and requires hardware specific setup for the
LED matrix and buttons. Fill in the TODOs with appropriate driver code for your
hardware and toolchain.
