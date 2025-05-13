# Troubleshooting Guide

A quick reference for resolving common issues encountered when assembling or testing the TeslaRake hardware modules.

---

## ✅ System Doesn't Power Up
- 🔋 Check all capacitor polarities.
- 🔌 Ensure boost converter wiring is correct and not reversed.
- 📏 Measure voltage before and after diode bridges with a multimeter.
- 🔍 Look for visible damage on PCB traces or components.

---

## 📉 No RF Output
- 📡 Verify antenna is securely connected and matches target bands.
- 📻 Test with known RF field sources (e.g., phone hotspot, AM/FM radio).
- 🔧 Temporarily bypass RF filters to isolate issues in stages.
- 🧲 Confirm RF-to-DC rectifier diodes are Schottky type and functional.

---

## 🔋 Supercapacitor Not Charging
- ☀️ Confirm solar panel is oriented toward light and not blocked.
- ➕➖ Check panel and module polarities.
- 🔁 Ensure all harvesters route through diodes into the capacitor.
- 🔍 Replace failed diodes or check for faulty boost converter IC.

---

## 🧠 Firmware Won’t Upload
- 🖥️ Ensure correct board is selected in the Arduino IDE (e.g., ATtiny85).
- 🔌 If using USBasp, verify the programmer is recognized by your OS.
- 🧵 Check all breadboard/ISP connections for looseness or shorts.
- 🔄 Burn bootloader if chip is unresponsive (via Arduino as ISP).
