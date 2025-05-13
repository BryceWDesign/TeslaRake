# TeslaRake – Ambient Energy Source Matrix

This document catalogs every ambient energy source used by the TeslaRake system, with validated real-world harvesting technologies and output data.

---

## 1. Radio Frequency (RF) Harvesting

### Description
Collects energy from Wi-Fi, cellular towers, FM/AM broadcast, and ambient RF fields.

### Real-World Tech
- **Rectenna array** with Schottky diodes (e.g., HSMS-2852) and tuned antennas
- Impedance-matched to maximize input

### Estimated Output
- Urban: 50–300 µW/cm²
- Indoor dense: 10–100 µW/cm²

### Notes
- Best suited for continuous trickle charging of ultracapacitors
- Antennas can be embedded along enclosure edges or panels

---

## 2. Thermoelectric (TEG) Harvesting

### Description
Uses temperature differentials (sun vs shade, body heat vs air, machine surface vs air) to generate voltage via the Seebeck effect.

### Real-World Tech
- TEG modules (e.g., TEC1-12706) reversed for energy collection
- Passive or forced airflow cooling

### Estimated Output
- 1–3W per module (with ≥30°C delta)
- Indoor ambient: ~200–500 mW with airflow

### Notes
- Mounted on top or side panels exposed to heat differentials
- Silent fan (or low-noise moving air) can increase delta

---

## 3. Piezoelectric Harvesting (Vibration/Motion)

### Description
Generates electricity via mechanical stress or vibration using piezo discs or beams.

### Real-World Tech
- Piezo elements (e.g., Murata 7BB-35-3) or stacked beams
- Placed on vibration mounts or magnetic resonators

### Estimated Output
- Per pulse: 2–20 mJ
- Constant vibration: up to 100 mW average (per optimized array)

### Notes
- Use shock-mounted internal plates or external “rattle plates”
- Works near machinery, roads, or even footsteps

---

## 4. Triboelectric (Electrostatic Friction)

### Description
Harvests electrostatic energy from contact and separation of materials (airflow, movement, brushing).

### Real-World Tech
- DIY tribo-panels using Teflon and copper foil
- Embedded in handheld or exposed surfaces

### Estimated Output
- ~10–100 µW per activation
- Up to 1 mW average with motion or airflow

### Notes
- Self-sustaining for low-drain sensor circuits or trickle capacitor fill
- Supplementary layer only

---

## 5. Light (Photovoltaic / Indoor Solar)

### Description
Low-light harvesting using advanced PV cells for sub-optimal conditions.

### Real-World Tech
- Amorphous silicon or dye-sensitized solar cells
- Optimized for indoor/artificial lighting

### Estimated Output
- 10–50 mW per module (indoor)
- 500 mW–2W per panel (outdoor/cloudy)

### Notes
- Mounted on top or angled panels
- Works synergistically with TEGs for thermal/light combo modules

---

## 6. Kinetic (Flywheel or Magnetic Pendulum)

### Description
Harvests rotational or oscillating motion using moving magnets over coils.

### Real-World Tech
- Miniature flywheel with rare-earth magnets + wound copper coils
- Magnetic pendulums or gravity-assisted shakers

### Estimated Output
- Peak bursts: 500 mW–3W
- Averaged via supercap storage: 50–200 mW continuous (if disturbed)

### Notes
- Mount in protected lower side of chassis
- Requires user/environmental movement, but passive

---

## Multi-Source Integration Notes

- **Smart charge controller** handles mixed inputs (diode isolated + capacitor staged)
- **Ultracapacitor bank** absorbs pulses; **Li-Ion** provides regulated 5V USB output
- Sources are harvested in **parallel**, all the time

---
