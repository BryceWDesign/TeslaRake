# TeslaRake – Microcontroller Power Monitoring & Display System

This system is optional but highly recommended for smart power staging, battery health, and visual feedback.

---

## Objectives

- Monitor energy input from each subsystem
- Display charge level and active sources
- Optionally enable source prioritization or power shedding
- Enable USB charging cut-off to preserve supercap life

---

## Hardware Spec

| Component       | Recommended Models       | Notes                              |
|------------------|--------------------------|-------------------------------------|
| MCU              | ESP32-S3 or ATtiny1616    | ESP32 if Wi-Fi/Bluetooth logging    |
| OLED Display     | SSD1306 (128x64)         | I2C or SPI                          |
| Voltage Sensor   | INA219 or resistive div. | Monitors supercap + USB output     |
| Current Sensor   | INA219, INA3221, ACS712  | Optional, per source or total draw |
| Optional Input   | Button or encoder        | Manual override or menu nav        |

---

## Firmware Features

1. Energy Harvest Status
   - Real-time readout of voltage from each harvesting module
   - Source toggling (manual or logic-based)

2. Charge Status Display
   - Voltage level of supercap bank (e.g., 2.8V–5.4V)
   - USB output voltage + current
   - Estimated "phone charges left"

3. Intelligent Cut-off
   - Cut USB output if supercap < safe threshold
   - Prevents draining below recoverable voltage (e.g., 2.4V)

4. Logging (Optional)
   - ESP32 can store harvest trends via SD card or web dashboard
   - Enable tracking of source efficiency by environment

5. Optional OTA (ESP32)
   - Wi-Fi config + over-the-air firmware updates

---

## Display UI Mock

