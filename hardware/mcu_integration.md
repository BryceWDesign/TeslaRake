## Optional Enhancements

- Add MCU (ATtiny85 or ESP32-S3) for:
  - Power management
  - OLED display (voltage, harvest rate, est. charges)
  - Smart source switching if one is producing more

---

## Code Structure (Arduino-style)

- setup():
  - Initialize I2C/SPI, display, sensors
  - Load config from EEPROM (if applicable)

- loop():
  - Read all sensors
  - Update display
  - Check thresholds → enable/disable USB output
  - Log data if SD/Wi-Fi enabled

---

## Example Libraries

- Adafruit_SSD1306
- INA219 (Adafruit or SparkFun)
- Wire / SPI
- EEPROM (or Preferences.h on ESP32)
- WiFi.h + AsyncWebServer (for ESP32 web dashboard)
- Ticker / TaskScheduler (for timed reads)

---

## Source Prioritization Logic (Optional)

If MCU is advanced enough (e.g. ESP32):

- If Piezo + Solar producing > 75% of demand → disable RF harvesting (conserve EM filtering)
- Nighttime: disable solar monitoring to reduce sensor cycles
- Manual override via button press: Rotate "active source" for test/demo mode

---

## Build Notes

- Keep logic isolated from power delivery. MCU runs off dedicated 3.3V LDO.
- Power monitoring probes tap into high-side or center-tap of supercap bank
- Use opto-isolator if switching USB outputs via transistor/fet for safety
