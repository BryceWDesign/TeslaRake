# TeslaRake Assembly & Testing Guide

## 🛠 Assembly Steps

1. Solder all passive components (resistors, capacitors, diodes).
2. Add active components (MOSFETs, ESP32 module).
3. Mount connectors (terminal blocks).
4. Double-check all polarities and orientations.

## 🔌 Power Check

- Apply 5–12V DC input.
- Confirm ESP32 boots and outputs serial data on USB.
- Check voltage rails using multimeter:
  - 3.3V and 5V lines should be stable.
  - No shorts or heating components.

## ✅ Basic Firmware Test

1. Upload the `firmware/` using PlatformIO.
2. Open Serial Monitor at 115200 baud.
3. You should see:  
TeslaRake firmware starting...
Running main loop...

If something fails, check solder joints, component placement, and power rails.

---

Let me know when you're ready to generate the updated **Quick Start Guide, prerequisites, and troubleshooting** in `docs/`.
