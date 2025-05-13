AC —> [Bridge Rectifier] —> [Capacitor] —> [Supercap Storage]  

- **Bridge**: High-voltage diodes (1N4007 preferred)
- **Initial Capacitor**: Charges with fast pulses
- **Supercap**: Buffers and feeds staging bus

---

## Construction: Contact-Separation TENG

**Layered Stack Example:**
1. Bottom: **Aluminum plate** (electrode)
2. Middle: **Foam pad**
3. Top: **PTFE sheet (Teflon)**
4. Weight or spring on top to ensure repeated contact-separation

**Alternate Mounting:**
- Inside shoe sole
- Sliding drawer or lid
- Flapping cloth or plastic in wind

---

## Output Characteristics

| Source               | Peak Voltage | Peak Power      |
|----------------------|---------------|------------------|
| Hand tap             | 200–400V AC   | ~5–10 mW bursts  |
| Repeated motion      | 100–300V AC   | ~100 µW–1 mW avg |
| Wind flap            | 200V+         | Variable         |

---

## BOM (Minimal TENG)

| Qty | Component              | Description                        | Source                       |
|-----|-------------------------|------------------------------------|------------------------------|
| 1   | Teflon Sheet           | PTFE film (10cm x 10cm)            | Amazon, McMaster             |
| 1   | Aluminum Sheet         | Foil or thin plate                 | Hardware store               |
| 1   | Foam or Paper Spacer   | Keeps surfaces apart               | Household supply             |
| 4   | Diodes                 | 1N4007 or 1N4148                   | Any electronics store        |
| 1   | Capacitor              | 0.1µF ceramic + 1F supercap        | Adafruit, Digi-Key           |

---

## Safety Note

While current is extremely low, voltages can spike above 300V during dry air operation. Use caution when connecting near other electronics without isolation or zener clamping.
