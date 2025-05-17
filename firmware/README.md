# TeslaRake Firmware

This folder contains the firmware source code for TeslaRake. It is structured for use with [PlatformIO](https://platformio.org/) to streamline builds and uploads.

## 📦 Prerequisites

- [PlatformIO IDE](https://platformio.org/install/ide?install=vscode) (VS Code extension is recommended)
- Supported microcontroller: **ESP32** (change `platformio.ini` if using something else)

## 📁 Structure

firmware/
├── lib/ # Custom libraries (optional)
├── src/ # Main firmware source files
│ └── main.cpp
├── platformio.ini # PlatformIO configuration
└── README.md


## 🚀 Build & Upload Instructions

1. Install PlatformIO (VS Code extension or CLI).
2. Open the `firmware/` folder in VS Code.
3. Modify `src/main.cpp` as needed.
4. Connect your device via USB.
5. Click **"Upload"** in PlatformIO UI or run:
   ```bash
   pio run --target upload

🧰 Troubleshooting
Device Not Found: Check your COM port settings or permissions.

Board Errors: Make sure the board type in platformio.ini matches your hardware.


---

## ⚙️ `firmware/platformio.ini`

**📍 Path**: `firmware/platformio.ini`  
**💬 Commit Message**: `Add PlatformIO configuration for ESP32`

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200
upload_speed = 921600




