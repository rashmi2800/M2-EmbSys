# WATER level ALERTING SYSTEM

 ## ABSTRACT 
 This project uses a microcontroller, an ultrasonic sensor, and an LCD screen as an example of an embedded system. The ultrasonic sensor emits ultrasonic waves that are reflected back after colliding with an item in front of it. The distance between the sensor and the item is determined by the time it takes for the signals to bounce back.

## INTRUDUCTION
Water level monitoring has several environmental benefits and is a common measurement for a variety of companies and organisations. Monitoring water flow can aid in the detection of prospective changes in water flow, as well as increased or decreased water volume levels, which may signal flow path modifications or warn of potential surface level floods.

-------------------------------------

## High Level Requirements
Must be able to do things like: - 
-  Determine the distance between the ultrasonic sensor and the water in front of it and show it on a Lcd
-  When the distance between the ultrasonic sensor and the water is too short, the buzzer will sound.

## Low Level Requirements
Low level requirements must have
    -  Interface HC-SR04 (UltraSonic sensor) with Atmega8

    -  Interface LCD With Atmega8
    
    -  Interface Buzzer with Atmega8
 
 ------------------------------------

 ## Component Description

 ### Power Supply:
All devices, switches, and the microcontroller are powered by an external power supply.

### Microcontroller:
Performs all of the operations that our system requires. Processes the signals received by the ultrasonic sensor to determine the distance between the object and the sensor.

### Ultra Sonic Sensor:
Ultrasonic signals are sent and received to determine the distance between the sensor and the item.

### LCD Display
16*2 LCD Display is used to show warning also to print the distance in CM


--------------------------------------

## SWOT ANALYSIS

### Strengths
- To show the distance between the object and the Ultrasonic sensor on the LCD screen - Simple to understand and use
- Simple method to check whether the distance between the object and the Ultrasonic sensor is very small by turning on the buzzer 
- Ultrasonic sensors are highly accurate and can detect small variations

 ### Weakness 
 - Ultrasonic sensors have trouble reading reflections from soft, curvy, thin, and small objects. 
 - Distance measurement is limited.

 ### Opportunities
 - Everyone uses it in their daily lives 
 -This benefit means that water level monitoring is commonly used in some of the following applications:
- Flood monitoring
- River level monitoring and many more

### Threats
- Other sensors that are more efficient than the ultrasonic sensor can be utilised. 
- There are many other similar applications available.

## 4W's & 1H
### Who
 A user who want to put distance between himself and the object in front of him.

### What
This is a utility application that uses the buzzer/LEDs to determine distance and also warn the user if the distance is too short.

### When 
Seat belt notifier, door lock notifier, window notifier, water level detector, and many other applications are possible.

### Where
This application can be used by anyone from any background to determine distance or verify if an object is present in front of him.

### How
Developed using C Language and implemented on SimulIDE.













