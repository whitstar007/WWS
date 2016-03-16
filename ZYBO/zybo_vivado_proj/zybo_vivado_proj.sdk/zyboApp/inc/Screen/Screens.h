/*
 * Screens.h
 *
 *  Created on: 13.03.2016
 *      Author: Sebi
 */

#ifndef SCREENS_H_
#define SCREENS_H_
#include "ScreenInterface.h"
#include "ScrBatIntSett.h"
#include "ScrImpCurSett.h"
#include "ScrImpGraph.h"
#include "ScrImpIntSett.h"
#include "ScrIncFreqSett.h"
#include "ScrIncNumSett.h"
#include "ScrSettings.h"
#include "ScrStartFreqSett.h"
#include "ScrSweepSettings.h"
#include "ScrTempHumBat.h"
#include "ScrTempHumSett.h"
#include <vector>
using namespace std;
vector<IScreen*> getMenuScreens()
{
	vector<IScreen*> screens;
	screens.push_back(new ScrImpGraph());
	//screens.push_back(new ScrMaxMin());
	screens.push_back(new ScrImpCurSett());
	screens.push_back(new ScrTempHumBat());
	screens.push_back(new ScrSettings());

	return screens;
}

vector<IScreen*> getSettingsScreens()
{
	vector<IScreen*> screens;
	screens.push_back(new ScrSweepSettings());
	screens.push_back(new ScrImpIntSett());
	screens.push_back(new ScrTempHumSett());
	screens.push_back(new ScrBatIntSett());

	return screens;
}

vector<IScreen*> getSweepScreens()
{
	vector<IScreen*> screens;
	screens.push_back(new ScrStartFreqSett());
	screens.push_back(new ScrIncFreqSett());
	screens.push_back(new ScrIncNumSett());

	return screens;
}



#endif /* SCREENS_H_ */