# TeslaRake – Piezoelectric Energy Harvesting Circuit

This subsystem captures ambient mechanical energy such as vibrations, user movement, or surface oscillations to produce power.

---

## Piezo Harvesting Fundamentals

- Piezo elements convert mechanical strain into **AC voltage pulses**
- Harvested power is **pulsed**, requiring:
  - Rectification
  - Smoothing
  - Storage buffering

**Power range:** ~10 µW to 200 mW depending on surface or force applied

---

## Circuit Overview

**Components:**
| Component        | Model/Suggestion         | Function                      |
|------------------|--------------------------|-------------------------------|
| Piezo Element     | LDT0-028K, PZT disk, or MIDE V21BL | Generates AC voltage         |
| Bridge Rectifier  | MB6S or 4x 1N4148         | Converts AC to DC             |
| Smoothing Cap     | 10µF–100µF ceramic        | Absorbs ripple from pulses    |
| Supercapacitor    | 1F, 2.7–5.5V              | Stores energy surges          |
| Output Diode      | 1N5817 (Schottky)         | Prevents reverse discharge    |

---

### Schematic

