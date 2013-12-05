/*
 * sensor.c
 *
 *  Created on: Dec 5, 2013
 *      Author: C14Ryan.Lamo
 */

#include "sensor.h"

void initADC()
{
	WDTCTL = WDTPW + WDTHOLD;
	ADC10CTL0 = ADC10SHT_3 + ADC10ON + ADC10IE;

	//Set pins 1 and 4 to Analog input
	ADC10AE0 |= BIT1;
	ADC10AE0 |= BIT4;

	ADC10CTL1 |= ADC10SSEL1|ADC10SSEL0;

}

unsigned int getLeftSensorReading()
{

	ADC10CTL1 = INCH_1;
}

unsigned int getRightSensorReading()
{

	ADC10CTL1 = INCH_4;
}







