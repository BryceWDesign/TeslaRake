# TeslaRake – Enclosure & Spatial Layout

This file outlines the mechanical structure and component placement strategy of the ambient energy harvester. Focus is on:

- **Modular separation of energy systems**
- **Physical protection and airflow**
- **Optimized surface exposure for passive harvesting**
- **User-safe mechanical zones**

---

## Size Constraint

| Parameter        | Limit (Max)                    |
|------------------|--------------------------------|
| Single Microwave | ~20 in W × 12 in D × 12 in H   |
| Total Envelope   | ~40 in W × 12 in D × 12 in H   |
| Preferred Volume | ≤ 3.5 cubic feet               |

This footprint allows placement on a shelf, counter, or wall bracket. Power collectors must conform to this limit when fully deployed or housed.

---

## Enclosure Zones (Top-Down Layout)

| Zone        | Function                                  | Notes                               |
|-------------|-------------------------------------------|--------------------------------------|
| Top Panel   | Solar array + RF patch antenna grid       | Maximize sky and EM exposure         |
| Left Side   | Thermoelectric tiles w/ heat sink fins    | Placed near vent or hot air flow     |
| Right Side  | Triboelectric flaps + wind/breeze slots   | Or passive cloth-on-metal brushes    |
| Base Panel  | Piezo grid on shock-isolated mount        | For vibration or mechanical input    |
| Core Center | Supercap bank + power regulation module   | Metal shielding/EMI protection       |
| Rear Wall   | Passive airflow intake + output louvers   | Enhances convection/cooling          |

---

## Materials

| Component          | Material                 | Justification                      |
|--------------------|--------------------------|------------------------------------|
| Outer Shell        | Aluminum alloy or ABS     | Lightweight, durable, RF transparent in spots |
| Internal Plates    | Laser-cut acrylic or FR4  | Non-conductive mounting surfaces   |
| Supports           | Rubber or vibration-damp  | For piezo stability                |
| Mesh (Airports)    | Steel or copper mesh      | Allow EM/RF in, blocks large debris|

---

## Mounting Options

- **Desktop** – Rubberized feet or suction cups
- **Wall-mounted** – Screw slots + rear anchor plate
- **Mobile Mode** – Fold-out handle + strap lugs for backpack rig

---

## Human-Safe Zones

- **Front panel:** Status LEDs, USB ports, indicator screen
- **Top and sides:** Passive-only collection (no exposed moving parts)
- **Rear/underside:** Internal vibration collectors (mechanical risk low)

---

## Expandability

- Side rail slots for future module clips (e.g., Wi-Fi sniffer, BT, LoRa)
- USB-in port for firmware update or manual override
- Removable panel for battery upgrade or supercap swap

---

## Thermal & Acoustic Notes

- Passive airflow ducting: no fans unless extremely quiet (~<25 dBA)
- Noise from vibration/tribo units isolated by rubber housing and sidewall padding
- Optional: White noise muffler insert for audible sources (tribo brushing modules)

---

## Labeling and Ports

| Location      | Feature                  | Notes                       |
|---------------|---------------------------|------------------------------|
| Top           | Logo + solar + RF panel   | Coated in matte transparent |
| Front-center  | 2x USB-A + 1x USB-C Out   | Power out                   |
| Side panel    | Toggle + OLED readout     | Optional microcontroller    |
| Rear          | Reset, Expansion I/O      | Optional debug connector    |

---

## Mechanical Tolerance

- All modules removable with single screwdriver or hex key
- Mounting designed with 3D printable brackets or CNC acrylic cuts
- Tolerance: ±2 mm for internal boards, ±5 mm for passive modules

---
