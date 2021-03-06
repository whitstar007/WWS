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
vector<IScreen*> getMenuScreens();

vector<IScreen*> getSettingsScreens();

vector<IScreen*> getSweepScreens();

#endif /* SCREENS_H_ */
