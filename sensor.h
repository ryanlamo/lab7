/*
 * sensor.h
 *
 *  Created on: Dec 5, 2013
 *      Author: C14Ryan.Lamo
 */

#ifndef SENSOR_H_
#define SENSOR_H_

void initADC();

unsigned int getLeftSensorReading();

unsigned int getRightSensorReading();

unsigned int getCenterSensorReading();


#endif /* SENSOR_H_ */
