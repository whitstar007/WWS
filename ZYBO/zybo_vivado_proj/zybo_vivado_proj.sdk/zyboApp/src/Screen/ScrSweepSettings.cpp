/*
 * ScrSweepSettings.h
 *
 *  Created on: 12.03.2016
 *      Author: Sebi
 */
#include "Screen/ScrSweepSettings.h"

ScrSweepSettings::ScrSweepSettings()
{

}

ScrSweepSettings::~ScrSweepSettings()
{

}

void ScrSweepSettings::sendIncCmd()
{

}

void ScrSweepSettings::sendDecrCmd()
{

}

void ScrSweepSettings::sendChScrCmd()
{

}

void ScrSweepSettings::sendConfirmCmd()
{

}

void ScrSweepSettings::printData()
{
	OLED.setCursor(0, 1);
	//char data[20];
	//sprintf(data, "imped: %.2f K", impedanceArray[0]);
	OLED.putString("setFreq");

	OLED.updateDisplay();
}
