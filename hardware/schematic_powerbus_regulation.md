# TeslaRake – Central Energy Staging & Regulation System

This system manages and regulates the diverse, low-power energy streams into a usable, consistent output—optimized for charging lithium-ion devices.

---

## Purpose

- Combine all harvested energy sources into a **unified staging bus**
- Use high-capacity **supercapacitors** for buffering
- Regulate final output to standard voltages (3.7V / 5V / USB)
- Optional: Include charge controller + microcontroller monitor

---

## System Components

| Component              | Model/Notes                        | Purpose                               |
|------------------------|-------------------------------------|----------------------------------------|
| Diode Combiner Bank    | 1N5817 x N                          | Isolate energy source paths            |
| Supercapacitor Bank    | 5F–25F @ 5.5V each                  | High-speed energy storage              |
| Voltage Monitor (opt.) | INA219 or resistive divider         | For MCU voltage tracking               |
| Voltage Regulator      | XL6009, TPS63000, or LM317          | Output stable charging voltage         |
| USB Charger Module     | TP4056 (optional)                   | Safe lithium battery charge path       |

---

## Central Powerbus Architecture

