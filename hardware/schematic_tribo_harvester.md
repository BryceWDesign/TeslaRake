# TeslaRake – Triboelectric Energy Harvesting Circuit

This subsystem harvests energy from contact-separation cycles of dissimilar materials (e.g. rubber and Teflon) based on triboelectric effect.

---

## Principle of Operation

- When two materials rub or touch and separate, **opposite charges** build up on surfaces
- Energy is transferred when charge flows due to **potential difference**
- Output is **pulsed AC voltage**, often in **hundreds of volts at low current**

---

## Key Components

| Component         | Model/Notes                       | Function                          |
|-------------------|------------------------------------|-----------------------------------|
| Tribo Material 1   | PTFE (Teflon) film                | Charge donor                      |
| Tribo Material 2   | Aluminum foil or Kapton tape      | Charge acceptor                   |
| Electrode Plates   | Copper or aluminum sheets         | Charge collection                  |
| Spacer             | Foam or paper                     | Maintains separation/restoring force |
| Diodes (x4)        | 1N4007 or 1N4148 x4                | Full-wave rectification           |
| Capacitor          | 100nF–1µF (initial) + supercap    | Stores rectified pulses           |
| Load/Converter     | Optional: zener clamp or boost IC | Conditions output                  |

---

## Basic Schematic

