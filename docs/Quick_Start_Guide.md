# TeslaRake – Quick Start Guide

This guide will walk you through setting up the TeslaRake firmware and hardware from scratch.

---

## 🔧 Prerequisites

### For Firmware Development
- [VS Code](https://code.visualstudio.com/)
- [PlatformIO Extension](https://platformio.org/install/ide?install=vscode)
- USB cable for programming your ESP32 board

### For Hardware Assembly
- Soldering station
- Multimeter
- 5V–12V DC power source
- Basic hand tools

---

## 🛠 Firmware Setup Instructions

1. **Install PlatformIO in VS Code**  
   Open VS Code > Extensions > Search "PlatformIO" and install.

2. **Open the Firmware Folder**  
   From VS Code:  
   `File > Open Folder > firmware/`

3. **Upload Code**  
   Plug in your ESP32 via USB and click the **Upload** arrow in the PlatformIO toolbar, or use:

   ```bash
   pio run --target upload
Verify Serial Output
Open PlatformIO’s Serial Monitor or use: pio device monitor
You should see:TeslaRake firmware starting...
Running main loop...

🔩 Hardware Assembly
See hardware/assembly_guide.md for full build steps and component placement. Schematic and BOM are also included in hardware/schematics/ and hardware/teslarake_BOM.csv.

💬 Troubleshooting
Problem	Likely Cause	Solution
ESP32 not detected	Wrong USB port, cable, or drivers	Try another USB cable. Ensure drivers are installed. Check Device Manager (Windows) or ls /dev/tty.* (Mac)
Upload fails	Wrong board config	Confirm platformio.ini has correct board: esp32dev
No serial output	Baud rate mismatch or power issue	Ensure 115200 baud is set. Check power supply.
Nothing powers on	Incorrect polarity or short circuit	Inspect board for solder bridges and polarity issues.
🧠 Tip: Start with firmware before full assembly. Getting serial feedback first helps isolate hardware errors later.

---

## 🧭 `docs/troubleshooting.md`

**📍 Path**: `docs/troubleshooting.md`  
**💬 Commit Message**: `Add expanded troubleshooting guide for TeslaRake users`

```markdown
# TeslaRake Troubleshooting Guide

This guide helps identify and solve issues during development or assembly.

---

## 🔌 Power Issues

### 💡 Board not powering on
- Check for proper voltage at the input terminals.
- Inspect diode orientation.
- Confirm no solder bridges between VCC and GND.

### ⚠️ ESP32 not booting
- Measure 3.3V output from onboard regulator.
- Check boot and EN pin wiring.
- Reflow ESP32 module if hand-soldered.

---

## 🖥 Upload Issues

### 🚫 Serial port not found
- Reconnect USB, change ports.
- Confirm correct COM port selected in PlatformIO.
- Try a known-good data cable.

### ⛔ Upload fails mid-process
- Press and hold **BOOT** button on ESP32 during upload.
- Lower `upload_speed` in `platformio.ini`.

---

## 📉 Firmware Running but No Output

- Confirm `Serial.begin(115200)` is called early in `setup()`.
- Confirm TX/RX lines are not externally shorted or interfering.

---

## 🧰 Still Stuck?

- Revert to known-good firmware (minimal `Serial.println()` test).
- Isolate power rails and test continuity.
- Use an FTDI adapter to bypass onboard USB circuitry if needed.

When in doubt, strip it down to power + serial and build upward.
