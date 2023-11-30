# Autonomous

## Table of Contents
+ [About](#about)
+ [Features](#features)
+ [Usage](#usage)
+ [Future Scope](#Future_Scope)

## About <a name = "about"></a>
This project aims to create a self-driving vehicle using the Adafruit Metro RP2040, Adafruit Motor Shield, Adafruit IMC20948 IMU, three ultrasonic sensors, and four independently driven DC motors. The implementation leverages BUS, WIRE, SPI, and NEOPIXEL libraries to enable communication and control between various components.

## Features <a name = "features"></a>
[deployment](#deployment) Adafruit Metro RP2040: The project is built on the powerful Adafruit Metro RP2040 microcontroller, providing the computational capabilities needed for autonomous navigation.

Adafruit Motor Shield: Control four DC motors independently using the Adafruit Motor Shield, ensuring precise and responsive movement.

Adafruit IMC20948 IMU: The Inertial Measurement Unit (IMU) is employed for accurate measurement of the vehicle's orientation, facilitating navigation and control.

Ultrasonic Sensors: Three ultrasonic sensors are utilized for obstacle detection and avoidance, enhancing the vehicle's ability to navigate its environment safely.

Libraries:

BUS, WIRE, SPI: These libraries are crucial for communication between different modules, enabling seamless data exchange.
NEOPIXEL: The NEOPIXEL library is used for controlling RGB LEDs, adding a visual aspect to the vehicle's status and behavior.

### Prerequisites

What things you need to install the software and how to install them.

```
Give examples
```

### Installing

A step by step series of examples that tell you how to get a development env running.

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo.

## Future Scope <a name = "Future_Scope"></a>
```
The Autonomous Vehicle Project has exciting future possibilities:

SLAM (Simultaneous Localization and Mapping): Implement SLAM algorithms to enhance the vehicle's mapping and navigation capabilities.
```
Machine Learning Integration: Once a Raspberry Pi is integrated into the system, explore machine learning principles for advanced decision-making and adaptive behavior.
Add notes about how to use the system.

icm.setAccelRange(ICM20948_ACCEL_RANGE_16_G);
 
ICM20948_ACCEL_RANGE_2_G:
ICM20948_ACCEL_RANGE_4_G:
ICM20948_ACCEL_RANGE_8_G:
ICM20948_ACCEL_RANGE_16_G:


icm.setGyroRange(ICM20948_GYRO_RANGE_2000_DPS);
ICM20948_GYRO_RANGE_250_DPS:
ICM20948_GYRO_RANGE_500_DPS:
ICM20948_GYRO_RANGE_1000_DPS:
ICM20948_GYRO_RANGE_2000_DPS:
