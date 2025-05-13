# TeslaRake – Ambient Energy Harvester

TeslaRake is a compact, multi-source ambient energy harvesting device designed to extract and store usable electrical power from the surrounding environment—no wall outlet required. Inspired by Nikola Tesla’s dream of wireless and passive power, it harnesses energy from RF, solar, thermal, vibrational, and triboelectric sources simultaneously.

💡 Goal: Charge an average smartphone ~8x per day under typical environmental exposure.

—

## 🔋 Features

- Multi-source energy harvesting:
  - 📡 RF (Wi-Fi, cellular, EM)
  - ☀️ Solar (indoor/outdoor light)
  - 🔥 Thermoelectric (waste heat or airflow differentials)
  - ⚙️ Piezo + vibration (mechanical or kinetic input)
  - ✋ Triboelectric brushes (friction-based surface contact)

- No wall plug required – fully ambient powered
- Supercapacitor bank with smart USB output
- Optional onboard microcontroller:
  - OLED real-time display
  - Source prioritization & energy management
  - Logging via SD or web dashboard

—

## 📐 Dimensions & Build Philosophy

| Dimension | Target                         |
|-----------|--------------------------------|
| Width     | ≤ 40 inches (≈ two microwaves) |
| Height    | ≤ 12 inches                    |
| Depth     | ≤ 12 inches                    |
| Volume    | ≤ 3.5 cubic feet               |

Portable, repairable, and fully open-source.

—

## 🧰 Build It Yourself

🧠 Skill Level: Intermediate (electronics + basic fabrication)

✅ What you’ll need:

- Basic tools (screwdriver, soldering iron)
- 3D printer or access to laser-cut panels (optional)
- Bill of Materials (see /hardware/)

📁 Project Breakdown:

| Folder        | Description                          |
|---------------|--------------------------------------|
| /hardware     | Schematic, enclosure design, BOM     |
| /firmware     | MCU firmware (ESP32 or ATtiny)       |
| /pcb          | Circuit files (KiCAD, Gerber, etc)   |
| /tests        | Source performance tests & logs      |
| /docs         | Whitepapers, energy theory, diagrams |

🛠 Assembly Guide → See docs/assembly_guide.md

—

## ⚙️ How It Works

TeslaRake uses passive and active elements to absorb ambient energy from the environment. These include:

- Reverse-engineered Wi-Fi/cellular RF collectors
- Thermoelectric tiles placed near heat vents or electronics
- Piezo elements that convert vibration or mechanical impact
- Solar cells for both direct and diffuse light
- Triboelectric contact panels generating charge through brushing or motion

All energy feeds into a regulated power bus and is stored in high-capacity supercapacitors. USB output ports can charge devices directly when thresholds are met.

—

## 🧠 Why It Matters

TeslaRake brings the dream of decentralized power one step closer. Ideal for:

- Emergency backup / blackouts
- Off-grid environments
- Environmental and physics education
- Remote sensors and micro-IoT deployments

—

## 🧪 Current Status

✅ Version: v1.0 (Functional prototype)

🚧 In development:
- Automated source switching
- 3D printable enclosure refinement
- Long-term energy harvesting performance data

—

## 🤝 Contributing

All contributions welcome: engineers, hackers, educators, researchers, or anyone passionate about open energy.

- Fork this repo and submit a PR
- File issues for improvements, bugs, or enhancements
- Add tests and data to /tests for validation

—

## 📜 License

MIT License – Free to use, modify, and redistribute with attribution.

Let’s electrify the future—one watt at a time.

—

## 🧭 Links

- Assembly Guide → docs/assembly_guide.md
- Schematics → hardware/
- Firmware → firmware/
- Energy Source Notes → docs/source_theory.md
