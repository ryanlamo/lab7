/* Author: C1C Ryan Lamo
 * Created: 5 December 2013
 * Last Edited: 5 December 2013
 * Description: This program will allow the MSP 430 to take an analog input from
 * the robot IR sensor, convert it to digital and turn the LED lights on when the
 * robot is close to a wall.
 * Documentation:
 */


#include <msp430.h> 
#include "sensor.h"

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	return 0;
}
