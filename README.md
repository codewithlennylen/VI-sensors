# VI-sensors
Testing Voltage &amp; Current Sensors (DC &amp; AC) - Arduino Uno


## Current Sensors

### AC Sensors

#### ACS712 AC Sensor Module


This module can measure both AC & DC, where it outputs voltage proportional to AC or DC currents


Electrical Characteristics (more info in the datasheet)
https://www.allegromicro.com/-/media/files/datasheets/acs712-datasheet.ashx
- Vcc: 5V
- Icc: 10 mA


Library Used: ACS712-driver by Ransky3000
https://github.com/Ransky3000/ACS712-driver


#### ZMCT103C Current Sensor Module

Measures AC currents up to 5A

Reference: https://electropeak.com/learn/interfacing-zmct103c-5a-ac-current-transformer-module-with-arduino/




## Voltage Sensors

### DC Sensors

---

#### Generic Voltage Sensor Module

Reference: https://robu.in/wp-content/uploads/2017/05/datasheet1.pdf

<img width="359" height="232" alt="Screenshot from 2026-02-11 10-04-50" src="https://github.com/user-attachments/assets/c9f61c7d-3abd-43df-855a-93dd7d28bd70" />


### AC Sensors

---

#### ZMPT101B Voltage Sensor Module

ZMPT 101B is a high-precision voltage transformer. This module measures AC Voltages up to 250 V with an accuracy of 1%

Reference: 

Library Used: ZMPT101B-arduino by Abdurraziq
https://github.com/Abdurraziq/ZMPT101B-arduino


##### Calibration Procedure

1. Determine the appropriate sensitivity value

Open the calibrate.ino example and change the ACTUAL_VOLTAGE value according to the actual AC voltage value (eg based on a measurement with a voltmeter or something else). Upload the code then open serial monitor. Wait until the sensitivity value is displayed and then copy it.
2. Start measurement

Open the simple_usage.ino example then change the SENSITIVITY value (seventh line) based on the value you got in the previous process. Upload the code then open the serial monitor to observe the displayed voltage value.