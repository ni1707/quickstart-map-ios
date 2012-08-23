//
//  EQSSampleAppState.h
//  esriQuickStartApp
//
//  Created by Nicholas Furness on 8/21/12.
//  Copyright (c) 2012 ESRI. All rights reserved.
//

#ifndef esriQuickStartApp_EQSSampleAppState_h
#define esriQuickStartApp_EQSSampleAppState_h

typedef enum
{
    EQSSampleAppStateBasemaps,
    EQSSampleAppStateGeolocation,
    EQSSampleAppStateGraphics,
    EQSSampleAppStateGraphics_Editing,
    EQSSampleAppStateCloudData,
    EQSSampleAppStateFindPlace,
	EQSSampleAppStateDirections,
    EQSSampleAppStateDirections_WaitingForRouteStart,
    EQSSampleAppStateDirections_WaitingForRouteEnd
}
EQSSampleAppState;

#endif