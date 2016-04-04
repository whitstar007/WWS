/*
 * ScrSettings.h
 *
 *  Created on: 12.03.2016
 *      Author: Sebi
 */

#include "Screen/ScrSettings.h"
#include "Screen/Screens.h"
#include <vector>

std::vector<IScreen*> settScreens;
IScreen* currentScr;
static int arrayIdx = -1;
extern bool isInSettings;

ScrSettings::ScrSettings()
{
	settScreens = getSettingsScreens();
	currentScr = settScreens[0];
}

ScrSettings::~ScrSettings()
{

}

void ScrSettings::sendIncCmd()
{
	if(-1 == arrayIdx)
	{
		currentScr = settScreens[1];
	}
	else
	{
		currentScr->sendIncCmd();
	}
}

void ScrSettings::sendDecrCmd()
{
	if(-1 == arrayIdx)
	{
		currentScr = settScreens[0];
	}
	else
	{
		currentScr->sendDecrCmd();
	}
}

void ScrSettings::sendChScrCmd()
{
	arrayIdx = -1;
}

void ScrSettings::sendConfirmCmd()
{
	if(-1 == arrayIdx)
	{
		arrayIdx = 0;
	}
	else
	{
		currentScr->sendConfirmCmd();
	}
}

void ScrSettings::printData()
{
	if(!isInSettings)
	{
		OLED.setCursor(0, 1);
		OLED.putString("Settings");
		OLED.updateDisplay();
	}
	else
	{
		currentScr->printData();
	}
}
