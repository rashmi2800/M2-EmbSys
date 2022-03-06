# WATER level ALERTING SYSTEM

 ## ABSTRACT 
 This project uses a microcontroller(Arduino uno), an ultrasonic sensor, and an LED. This is an example of an embedded system. The ultrasonic sensor emits ultrasonic waves that are reflected back after colliding with an item in front of it. The distance between the sensor and the item is determined by the time it takes for the signals to bounce back.

## INTRUDUCTION
Water level monitoring has several environmental benefits and is a common measurement for a variety of companies and organisations. Monitoring water flow can aid in the detection of prospective changes in water flow, as well as increased or decreased water volume levels, which may signal flow path modifications or warn of potential surface level floods.

----------------------------------------------------------

## High Level Requirements
Must be able to do things like: - 
-  Determine the distance between the ultrasonic sensor and the water in front of it and show it on a LED.
-  When the distance between the ultrasonic sensor and the water is too short, the LED will glow.

## Low Level Requirements
Low level requirements must have
-  Interface HC-SR04 (UltraSonic sensor) with Arduino uno
-  Interface LED With Arduino uno
 -  Interface Buzzer with Arduino uno
 
 ------------------------------------

 ## Component Description

 ### Power Supply:
All devices, switches, and the Arduino is powered by an external power supply.

### Microcontroller(Arduino uno):
Performs all of the operations that our system requires. Processes the signals received by the ultrasonic sensor to determine the distance between the object and the sensor.

### Ultra Sonic Sensor:
Ultrasonic signals are sent and received to determine the distance between the sensor and the item.

### LED 
Indicates the user by turning on the light.




--------------------------------------

## SWOT ANALYSIS

### Strengths
- To show the distance between the object(water) and the Ultrasonic sensor and alert using a LED
- Simple to understand and easy to setupu
- Simple method to check whether the distance between the object and the Ultrasonic sensor is very small by turning on the LED 
- Ultrasonic sensors are highly accurate and can detect small variations

 ### Weakness 
 - Ultrasonic sensors have trouble reading reflections from soft, curvy, thin, and small objects. 
 - Distance measurement is limited.

 ### Opportunities
 - Everyone can use it in their daily lives 
 -This benefit means that water level monitoring is commonly used in some of the following applications:
- Flood monitoring
- River level monitoring and many more

### Threats
- Other sensors that are more efficient than the ultrasonic sensor can be utilised. 
- There are many other similar applications available.


--------------------------------------------------------------------

## 4W's & 1H
### Who
Common people can use this to see the level of water in the tank to minimize the wastage of water.


### What
This is a utility application that uses the buzzer to determine distance and also warn the user if the water level is very high.

### When 
Human can't watch continuously this system alerts them through LED.


### Where
This application can be used by anyone from any background to determine distance or verify if an object is present in front of him.

### How
 Developed using Arduino UNO and implemented on SimulIDE.













