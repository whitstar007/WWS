/*
 * ScrTempHumBat.h
 *
 *  Created on: 12.03.2016
 *      Author: Sebi
 */
#include "Screen/ScrTempHumBat.h"
#include "stdio.h"
extern float temperature;
extern unsigned char humidity;
ScrTempHumBat::ScrTempHumBat()
{

}

ScrTempHumBat::~ScrTempHumBat()
{

}

void ScrTempHumBat::sendIncCmd()
{

}

void ScrTempHumBat::sendDecrCmd()
{

}

void ScrTempHumBat::sendChScrCmd()
{

}

void ScrTempHumBat::sendConfirmCmd()
{

}

void ScrTempHumBat::printData()
{
	OLED.setCursor(0, 0);
	char data[20];
	sprintf(data, "temp: %.2f *C", temperature);
	OLED.putString(data);
	OLED.setCursor(0, 2);
	sprintf(data, "hum: %d %%", humidity);
	OLED.putString(data);
	OLED.updateDisplay();
}
