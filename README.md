# Common Arduino Voltage and Current Sensor Modules

Testing Voltage &amp; Current Sensors (DC &amp; AC) using an Arduino Uno


## Current Sensors

### AC Sensors

#### ACS712 AC Sensor Module

<img width="387" height="424" alt="image" src="https://github.com/user-attachments/assets/92d0b979-9c2f-418b-a04f-645a41582dc5" />

This module can measure both AC & DC, where it outputs a voltage proportional to AC or DC currents

- [Datasheet](https://www.allegromicro.com/-/media/files/datasheets/acs712-datasheet.ashx)
- Library Used: [ACS712-driver by Ransky3000](https://github.com/Ransky3000/ACS712-driver)


#### ZMCT103C Current Sensor Module

<img width="387" height="424" alt="image" src="https://github.com/user-attachments/assets/2b036b21-59ff-4925-8381-5922ac022a7d" />

This module measures AC currents up to 5A

- [Reference](https://electropeak.com/learn/interfacing-zmct103c-5a-ac-current-transformer-module-with-arduino/)
- No Library was used 




## Voltage Sensors

### DC Sensors

---

#### Generic Voltage Sensor Module

<img width="387" height="424" alt="image" src="https://github.com/user-attachments/assets/001c2f52-9887-491f-b090-f0faa90a8d1b" />

This module measures DC Voltages up to 25V. Based on the voltage divider principle

- [Reference](https://robu.in/wp-content/uploads/2017/05/datasheet1.pdf)
- No Library was used

<img width="359" height="232" alt="Screenshot from 2026-02-11 10-04-50" src="https://github.com/user-attachments/assets/c9f61c7d-3abd-43df-855a-93dd7d28bd70" />


### AC Sensors

---

#### ZMPT101B Voltage Sensor Module

<img width="387" height="424" alt="image" src="https://github.com/user-attachments/assets/79d56fab-7615-47d2-9676-ed5398c785e9" />

ZMPT 101B is a high-precision voltage transformer. This module measures AC Voltages up to 250 V with an accuracy of 1%

- Library Used: [ZMPT101B-arduino by Abdurraziq](https://github.com/Abdurraziq/ZMPT101B-arduino)

##### Calibration Procedure

1. **Determine the appropriate sensitivity value**

  Open the **calibrate.ino** example and change the `ACTUAL_VOLTAGE` value according to the actual AC voltage value (e.g., based on a measurement with a voltmeter). Upload the code, then openthe  serial monitor.
  Wait until the sensitivity value is displayed and then copy it.
  
2. **Start measurement**

  Open the **simple_usage.ino** example then change the `SENSITIVITY` value (seventh line) based on the value you got in the previous process. Upload the code, then open the serial monitor to observe the displayed voltage value.
