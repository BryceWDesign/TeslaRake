# TeslaRake – RF Energy Harvesting Circuit

This document provides the schematic and notes for the RF energy collection module.

---

## Purpose

Capture and rectify ambient RF energy from Wi-Fi, cellular, FM/AM, and digital TV frequencies, converting it to usable DC power for capacitor storage or step-up conversion.

---

## RF Harvester Core Circuit

**Components:**
| Component       | Part/Model Suggestion          | Function                      |
|------------------|-------------------------------|-------------------------------|
| Antenna (x3+)    | Dipole / PCB microstrip       | Receive RF from various bands |
| Matching Network | L, C tuned (band-specific)    | Impedance match               |
| Schottky Diode   | HSMS-2852 or SMS7630          | Ultra-low Vf rectification    |
| Bypass Capacitor | 10nF ceramic                  | Smooth ripple                 |
| Storage Cap      | 0.1F–1F supercap              | Buffer output                  |
| Output Tap       | Diode-isolated to main bus    | Forward to staging caps       |

---

### Schematic Description

