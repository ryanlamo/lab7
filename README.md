# Lab 6
Code to initiate and read from the IR sensors. 

## Notes About Lab
The Lab utilizes the ADC on the MSP 430 to convert the analog inputs from the sensors to digital values that can be read by the MSP 430.

This code requires connecting the MSP 430 to the correct pins on the robot. The pin layout is as follows
 - Pin 1.1 connected to Left Sensor
 - Pin 1.4 connected to Right Sensor
 - Pin 1.5 connected to Center Sensor

## Functions
- 'initADC()'
  - initializes the MSP 430 to allow ADC 
  - initializes pins 1,4 and 5 to accept analog inputs

- code utilized by the user
  - 'getLeftSensorReading()'
  - 'getRightSensorReading()'
  - 'getCenterSensorReading()'


