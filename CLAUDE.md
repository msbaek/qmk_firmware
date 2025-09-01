# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## QMK Firmware Overview

QMK (Quantum Mechanical Keyboard) is a keyboard firmware framework supporting hundreds of keyboard variants. The codebase centers around a modular architecture where keyboards are organized by manufacturer/model with individual keymaps defining key layouts and behaviors.

## Key Commands

### Building and Compilation
```bash
# Compile a specific keyboard/keymap combination
qmk compile -kb keyboard_name -km keymap_name

# Example: Compile Iris Rev8 with VIA keymap
qmk compile -kb keebio/iris/rev8 -km via

# Flash firmware to connected keyboard (requires bootloader mode)
qmk flash -kb keyboard_name -km keymap_name

# List available keyboards
qmk list-keyboards

# List keymaps for a specific keyboard
qmk list-keymaps -kb keyboard_name
```

### Development Workflow
```bash
# Create new keymap for existing keyboard
qmk new-keymap

# Validate keyboard/keymap configuration
qmk lint -km keymap_name -kb keyboard_name

# Generate compile_commands.json for IDE support
qmk generate-compilation-database

# Check QMK environment setup
qmk doctor
```

## Architecture Structure

### Keyboard Organization
- `keyboards/[vendor]/[model]/` - Keyboard hardware definitions
- `keyboards/[vendor]/[model]/rev[n]/` - Hardware revisions with different configurations
- `keyboards/[vendor]/[model]/keymaps/` - Key layout definitions
- `keyboards/[vendor]/[model]/info.json` - Keyboard metadata and layout information

### Keymap Components
Each keymap directory contains:
- `keymap.c` - Core key definitions and behaviors
- `config.h` - Keyboard-specific configuration overrides
- `rules.mk` - Feature enablement (VIA, RGB, encoders, etc.)
- `keymap.json` - VIA-compatible JSON format (alternative to keymap.c)

### Build System
- `Makefile` - Top-level build orchestration using QMK CLI
- `builddefs/` - Core build system makefiles and feature definitions
- `platforms/` - MCU/platform-specific code (AVR, ARM, RP2040)
- `quantum/` - Core QMK framework code
- `tmk_core/` - Low-level hardware abstraction layer

### Key Features and Timing
- **Mod-Tap (MT)**: Keys that act as modifiers when held, regular keys when tapped
- **Layer-Tap (LT)**: Keys that switch layers when held, regular keys when tapped
- **TAPPING_TERM**: Configurable timing for tap vs hold detection
- **VIA Support**: Runtime keymap editing through VIA application

### Hardware Support
- MCU support: ATmega32u4, STM32, RP2040, and others
- Split keyboard support via serial/I2C communication
- RGB lighting, encoders, OLED displays, and other peripherals
- Bootloader integration for firmware flashing

## Current Project Context

This repository appears to be configured for developing Iris keyboard firmware, specifically:
- Working with Keebio Iris Rev8 (RP2040-based split keyboard)
- VIA-compatible firmware for real-time keymap editing
- Custom timing optimizations for Mod-Tap responsiveness
- Korean language development context based on comments and file patterns