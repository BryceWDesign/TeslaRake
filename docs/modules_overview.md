# Power Harvesting Modules Overview

TeslaRake includes multiple harvesting subsystems, each contributing to ambient energy collection from different environmental sources.

## 📡 RF Harvester
- Based on [XYZ design].
- Harvests ambient RF from Wi-Fi, GSM, AM/FM.
- Output: ~1.5–3.3V regulated.
- Key Components: antenna, bandpass filters, matching network, rectifier.

## ☀️ Solar Harvester
- 6V flexible solar cell.
- Diode-protected input, regulated to charge supercapacitor bank.
- Ideal for continuous low-light indoor harvesting.

## 🔥 TEG Harvester
- Dual-sided aluminum/copper heat sink pads.
- Converts thermal gradient into voltage via Peltier-style TEGs.
- Max output: 200–500mV per cell.
- Requires booster for usable system voltage.

## 🌀 Vibration Harvester
- Spring-mounted magnet inside copper coil.
- Generates AC from physical vibration or resonance.
- Boosted using LTC3108 or similar low-voltage startup converter.

## ⚡ Triboelectric Harvester
- PTFE film rubbed against conductive tape layers.
- Generates high-voltage, low-current static discharge.
- Amplified using voltage ladder/passive charge pump.
- Best suited for high-friction dynamic environments.
