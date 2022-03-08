## High level test plan

|Test ID|	Description	                                   |Exp I/P|	Exp O/P             |Actual Output	       |TypeOftest       |
|-------|------------------------------------------------|-------|----------------------|----------------------|-----------------|
|H_01   |Integrate Ultrasonicsensors with Microcontroller|  None |Successful Integration|successful Integration|Requirement based|
|H_02   |Integrate LED with Microcontroller              |  None |Successful Integration|Successful Integration|Requirement based|


##  Low level test plan

| **Test ID** | **Description**                                                         | **Exp I/P**                                                                                     | **Exp O/P**   | **Actual Output** |**Type Of Test**      |   
|-------------|-------------------------------------------------------------------------|------------------------------------------------------------------------------------------------ |---------------|-------------------|----------------------|
|  L_01       | Use Potentiometer to give input to the ultrasonic sensor                |                                                 -                                               |     -         |      -            | Requirement based    |          
|  L_02       | Detect Distance of any water wave near to ultrasonic sensor             | For simulation, a potentiometer is used to provide the expected input for an ultrasonic sensor  | LED Turns on  |  LED Turns on     | Requirement based    |
|  L_03       | If object is far away from the sensor.                                  | For simulation potentiometer is used to provide the expected input for an ultrasonic sensor.    |LED Turns off  | LED Turns off     | Requirement based    |
