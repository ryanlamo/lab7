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
	
    initLED();
    initADC();

    for(;;)
    {
    	ADC10CTL0 |= ENC + ADC10SC;
    	unsigned int getLeftSensorReading();

    	if (ADC10MEM < 0x0DA)
    	    		P1OUT &= ~ 0x01;
    	    	else
    	    		P1OUT |= 0x01;

    	unsigned int getRightSensorReading();

    	if (ADC10MEM < 0x0AF)
    		P6OUT &= ~ 0x01;
    	else
    		P6OUT |= 0x01;
    }






	return 0;
}
