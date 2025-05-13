- D1 = Schottky diodes (1 per input) to prevent backflow between sources
- SuperCap Bank = 2–4 supercaps in series (with balancing resistors)
- Boost Converter = Ensures minimum 5V output even from ~2.5V cap level

---

## Recommended Output Profiles

| Application       | Output | Method                            |
|--------------------|--------|-----------------------------------|
| USB Charging       | 5V     | XL6009, MT3608, TPS61200          |
| Direct Li-Ion Cell | 3.7V   | TP4056 with protection            |
| MCU/Logic Control  | 3.3V   | AMS1117-3.3 or LD1117             |

---

## Supercapacitor Bank Example (Series)

| Capacitance | Voltage | # in Series | Effective Cap. | Balancing Method    |
|-------------|---------|-------------|----------------|----------------------|
| 5F          | 2.7V    | 2           | 2.5F @ 5.4V     | 10k resistors each   |
| 10F         | 2.5V    | 3           | 3.3F @ 7.5V     | Optional balancer IC |

---

## BOM – Power Bus Stage

| Qty | Component             | Description                        | Source                         |
|-----|------------------------|------------------------------------|--------------------------------|
| 4+  | Schottky Diodes       | 1N5817 or SS34                     | Prevent reverse flow           |
| 2–4 | Supercapacitors       | 5F–10F, 2.7V–5.5V each             | Adafruit, Mouser               |
| 1   | Boost Converter       | XL6009, MT3608, TPS61200           | eBay, Amazon                   |
| 1   | USB Charger Module    | TP4056                             | Optional, AliExpress           |
| 2–3 | Resistors             | 10kΩ (for balancing caps)          | Any electronics supplier       |
| 1   | Capacitor (output)    | 470µF Electrolytic                 | Smoothes post-boost power      |
