/* Author: C1C Ryan Lamo
 * Created: 5 December 2013
 * Last Edited: 9 December 2013
 * Description: This program will allow the MSP 430 to take an analog input from
 * the robot IR sensor, convert it to digital and turn the LED lights on when the
 * robot is close to a wall.
 * Documentation: I referenced Jason Mossing's code in which I learned that I should clear each
 * input before taking a reading from each sensor. I also talked to Ryan Turner who showed me that I needed
 * to add code to turn the correct Bit on in sensor.c when the sensor senses a wall.
 */


#include <msp430.h> 
#include "sensor.h"

unsigned int leftSensorValue, rightSensorValue, centerSensorValue;

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    P1DIR |= BIT0;
    P1DIR |= BIT6;

    initADC();
    __enable_interrupt();

    for(;;)
    {

    	leftSensorValue = getLeftSensorReading();
    	if (leftSensorValue < 0x1FF){
    	   		P1OUT &= ~BIT0;
    	}
    	   	else{
    	   		P1OUT |= BIT0;
    	   	}

    	rightSensorValue = getRightSensorReading();
    	if (rightSensorValue < 0x1FF){
    	   		P1OUT &= ~BIT6;
    	}
    	   	else{
    	   		P1OUT |= BIT6;
    	   	}

    	centerSensorValue = getCenterSensorReading();
    	    	if (centerSensorValue < 0x2FF){
    	    	   		P1OUT &= ~BIT6;
    	    	}
    	    	   	else{
    	    	   		P1OUT |= BIT6;
    	    	   	}

    }

	return 0;
}

#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
{
	__bic_SR_register_on_exit(CPUOFF);
}



