

# Automatic Fan Control System

## Description
This Arduino project utilizes a temperature sensor, servo motor, and DHT library to automatically control a fan based on the ambient temperature. The system continuously monitors the temperature using the DHT sensor and adjusts the fan speed using the servo motor to maintain a comfortable temperature range.
<br>
-Temperature Sensor (DHT11 or LM35): This sensor will measure the ambient temperature.

-Arduino Uno: This microcontroller board will be used to control the entire system.
 It reads the temperature from the sensor and controls the fan speed accordingly.
 
-16x2 LCD Display: This display will show the temperature and fan status.

-Two-Way Switch: One switch will be used for automatic fan control and the other for manual control. The implementation of this will depend on your specific requirements.

-Servo Motor: The servo motor can be used to physically move the switch based on the temperature. The exact implementation will depend on your specific requirements.

-Fan Regulator: This will be used to regulate the fan speed. The implementation of this will depend on your specific requirements.



## Components Used
- Arduino Uno or compatible board
- DHT (Digital Humidity and Temperature) sensor 
- Servo motor
- Fan
- Jumper wires
- Breadboard (optional)


## Installation
1. Connect the DHT sensor and servo motor to the Arduino board following the circuit diagram provided in the 'Circuit Diagram' folder.
2. Download and install the Arduino IDE from https://www.arduino.cc/
3. Download or clone the fine and upload to the board
 ```js
git clone https://github.com/Fun-withthsi/Arduino-Fan-Automation.git
```


![Screenshot_20240325-195714~2](https://github.com/Fun-withthsi/Arduino-Fan-Automation/assets/163336735/016fad7d-e55b-45e8-8da0-207e8fcad75d)



