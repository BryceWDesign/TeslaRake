[HOT SURFACE]
     |
  [TEG] TEC1-12706
     |
    +--->|---+---[Capacitor]--- GND
    |    D1   |
    |         +---> [Boost Converter] ---> To Supercap Bus
   GND  

- D1 = Optional Schottky diode to block backflow from capacitor
- Capacitor = Smooths pulsed or fluctuating voltage from TEG
- Boost = Required to reach charging voltages

---

### Output Characteristics

- 5°C ΔT: ~50mV
- 20°C ΔT: ~300–500mV
- 30°C ΔT: ~1.5V+
- Power: up to **2–3W** at 60°C delta (sun to shade)

---

## Mounting Strategy

- Attach hot side to **sun-exposed aluminum plate**, metal casing, or machinery
- Cool side:
  - Passive: finned aluminum heatsink
  - Active (optional): silent fan blowing ambient air
- Ensure **thermal paste** is applied between all plates and surfaces

---

## Bill of Materials (Per Module)

| Qty | Component             | Description                     | Source                         |
|-----|------------------------|---------------------------------|--------------------------------|
| 1   | TEG Module            | TEC1-12706 or equivalent        | eBay, Amazon, Adafruit         |
| 1   | Boost Converter       | LTC3108, TPS61200               | Mouser, AliExpress             |
| 1   | Aluminum Heatsink     | 60x60mm or larger               | Salvage, CPU coolers           |
| 1   | Thermal Paste         | Non-conductive, high spread     | Any electronics supplier       |
| 1   | Capacitor             | 470µF Electrolytic (25V+)       | Any electronics supplier       |
| 1   | Schottky Diode        | 1N5817 or SS14                  | Optional, Digi-Key             |
