# TeslaRake – Thermoelectric Energy Harvesting Circuit

This module uses temperature differentials from sunlight, surfaces, or airflow to generate energy via the Seebeck effect using TEG plates.

---

## Thermoelectric Generator Basics

- TEG modules (like **TEC1-12706**) produce voltage when a heat differential exists between front and rear surfaces.
- Power increases with greater temperature delta (ΔT).
- Mount TEG on a **metal heat sink** (hot side) with **forced airflow or passive radiator** on the cold side.

---

## Circuit Overview

**Components:**
| Component        | Model/Suggestion        | Purpose                        |
|------------------|-------------------------|--------------------------------|
| TEG Module       | TEC1-12706              | Generates DC from heat diff    |
| Capacitor        | 100µF–1000µF Electrolytic| Stabilizes DC output           |
| Boost Converter  | LTC3108 or TPS61200     | Lifts ~0.3–1.5V to 3.7–5V      |
| Diode (optional) | Schottky 1N5817         | Prevents reverse current       |
| Heatsink         | Aluminum CPU-style fin  | Maximizes thermal delta        |
| Fan (optional)   | 5V silent brushless     | Accelerates ΔT when active     |

---

### Schematic Diagram

