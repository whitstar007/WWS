/*
 * ScrImpCurSett.cpp
 *
 *  Created on: 12.03.2016
 *      Author: Sebi
 */
#include "Screen/ScrImpCurSett.h"

ScrImpCurSett::ScrImpCurSett()
{

}

ScrImpCurSett::~ScrImpCurSett()
{

}

void ScrImpCurSett::sendIncCmd()
{

}

void ScrImpCurSett::sendDecrCmd()
{

}

void ScrImpCurSett::sendChScrCmd()
{

}

void ScrImpCurSett::sendConfirmCmd()
{

}

void ScrImpCurSett::printData()
{
	OLED.setCursor(4, 12);
	OLED.putString("Curr seT");
	OLED.updateDisplay();
}