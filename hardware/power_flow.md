# TeslaRake – Power Flow Architecture

This document maps the energy routing from multiple ambient sources through harvesting circuits into smart storage and output systems. The design is modular and scalable.

---

## Power Input Sources

All sources are diode-isolated and can operate in parallel without cross-interference.

| Source           | Harvesting Module                  | Output Type     | Peak Input (typical) |
|------------------|------------------------------------|------------------|-----------------------|
| RF               | Multi-band rectenna array          | DC µW–mW        | 0.1–300 µW/cm²       |
| Thermoelectric   | TEG panels (TEC1-based)            | DC mW–W         | 0.2–3 W              |
| Piezoelectric    | Beam/resonant plate + rectifier    | Pulsed DC       | 10–100 mW            |
| Triboelectric    | Friction layers + charge storage   | Pulsed DC       | ~µW bursts           |
| Indoor Light     | Low-light PV panel                 | DC              | 10–200 mW            |
| Kinetic Motion   | Magnetic pendulum / flywheel coil  | Pulsed DC       | 0.1–3 W (bursts)     |

---

## Energy Conditioning Stage

1. **Full-wave bridge rectifiers**
   - All AC or pulsed sources (piezo, tribo, kinetic) converted to DC

2. **Diode isolation and one-way gates**
   - Prevents backflow or source interference

3. **Supercapacitor staging array**
   - Quick absorption of spikes from kinetic/piezo
   - Smooths pulse-style harvesting into semi-constant trickle

4. **Step-up DC-DC boost converters**  
   - Bring low-voltage signals (e.g. 0.3V–2V) up to Li-Ion charging levels (~4.2V)

---

## Energy Storage Stage

| Storage Layer | Type                       | Specs                | Purpose                  |
|---------------|----------------------------|----------------------|--------------------------|
| Primary       | 18650 Li-Ion battery bank  | 3.7V nominal, 5000+ mAh | Long-term energy storage |
| Secondary     | Ultracapacitor array       | 2.7V–5.5V, 10–100F    | Pulse absorption & smoothing |

---

## Output Stage

- **Charge controller IC (e.g. TP4056 or BQ24210)**
  - Manages charging state, overvoltage, undervoltage

- **5V Regulated USB output (1A–2A burst capable)**
  - Boost converter ensures consistent device charging
  - Optional extra 3.3V / 9V tap for sensors/dev boards

---

## Smart Power (Optional)

- Optional microcontroller (ESP32 or STM32 ultra-low-power)
  - Monitors voltage levels
  - Displays available charge level
  - Can sleep/wake to conserve power

---

## Notes

- All systems are passive unless stated (no MCU or fan required for base function)
- Primary energy strategy: **low trickle from many sources over time > single large input**

---
