# Lab 7
Code to initiate and read from the IR sensors. 

## Notes About Lab
The Lab utilizes the ADC on the MSP 430 to convert the analog inputs from the sensors to digital values that can be read by the MSP 430. When the left sensor is activated by an object, in this case a wall, the LED connected to pin 1.0 lights up. When the right sensor is activated by close proximity to the wall, the LED connected to pin 1.6 lights up. when the robot is far enough away from the wall that the sensors do not pick it up, the LEDs will be off. Their defautl position is off. 

## Pin Layout
This code requires connecting the MSP 430 to the correct pins on the robot. The pin layout is as follows
 - Pin 1.1 connected to Left Sensor
 - Pin 1.4 connected to Right Sensor
 - Pin 1.5 connected to Center Sensor

To light the LEDs, the following wires must be connected between the MSP 430 and the chip board. 
 - Pin 1.1 connected to Pin 1.0 
 - Pin 1.4 connected to Pin 1.6

## Functions
The function that must be included in the main file is below. 
  - `initADC()`
  - initializes the MSP 430 to allow ADC 
  - initializes pins 1,4 and 5 to accept analog inputs and to be interrupt pins. 

Code that may be utilized by the user.
  - `getLeftSensorReading()`
  - `getRightSensorReading()`
  - `getCenterSensorReading()`


