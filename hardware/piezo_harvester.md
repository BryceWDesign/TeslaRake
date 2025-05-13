[Piezo Element]
~ ~
 |
AC —> |>| —+—[Capacitor]— GND
       |         |
     [Bridge]    +—> [Supercap] —>|—> To Staging Bus
       |
      GND

- **Bridge**: MB6S IC or DIY full bridge from 1N4148 x4
- **Capacitor**: Smooths rectified pulses before charging the supercap
- **Supercapacitor**: Buffers bursty motion into trickle energy flow
- **Output Diode**: Prevents supercap from back-draining

---

## Mounting Strategy

- Best output from:
  - Cantilever mounts (flexible support for oscillation)
  - Embedded in shoes, backpacks, door frames, railings
- Avoid overloading – piezo disks crack easily from direct impact

---

## Output Characteristics

| Source Motion         | Typical Voltage | Power        |
|------------------------|------------------|--------------|
| Vibration (AC vent)    | 1–5V pulses      | ~100 µW      |
| User walking w/ shoe   | 2–20V pulses     | 1–50 mW      |
| Oscillating fan mount  | 1–10V pulses     | 500 µW       |

---

## BOM (Per Unit)

| Qty | Component               | Description                       | Source                       |
|-----|--------------------------|-----------------------------------|------------------------------|
| 1   | Piezo Element           | LDT0-028K, V21BL, PZT disk        | Adafruit, Mouser, SparkFun   |
| 1   | Bridge Rectifier        | MB6S or 4x 1N4148 diodes          | Any supplier                 |
| 1   | Ceramic Capacitor       | 100µF, 25V                        | Electronics distributor      |
| 1   | Supercapacitor          | 1F, 5.5V                          | Adafruit, eBay               |
| 1   | Schottky Diode          | 1N5817                            | Mouser, Digi-Key             |
