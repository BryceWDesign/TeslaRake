# Firmware Upload & Configuration

## 🛠️ Microcontroller

Default firmware is built for:
- ATtiny85 (low-power mode)
- ESP32 (Wi-Fi telemetry)

## 🧪 Flashing Instructions

### For ATtiny85

1. Open Arduino IDE.
2. Install ATtiny board via Board Manager.
3. Connect via USBasp.
4. Select board: "ATtiny85"
5. Burn bootloader (if needed).
6. Upload `/firmware/main_attiny.ino`

### For ESP32

1. Install ESP32 board support in Arduino IDE.
2. Open `/firmware/main_esp32.ino`
3. Connect via USB and select COM port.
4. Upload.

## 🔧 Configuration

In `firmware/config.h` (create if missing):

```c
#define ENABLE_RF       true
#define ENABLE_SOLAR    true
#define ENABLE_TEG      true
#define ENABLE_VIBE     true
#define ENABLE_TRIBO    false
