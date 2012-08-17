//
//  AGSStarterGeoServices.h
//  iOSLite
//
//  Created by Nicholas Furness on 7/9/12.
//  Copyright (c) 2012 ESRI. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>

// Notification Definitions - subscribe to these to be notified when GeoServices have completed.
// Each geoservices has an OK and an Error notification. See the keys below for getting information
// about those notifications.
#define kEQSGeoServicesNotification_AddressFromPoint_OK @"EQSGeocodingGetAddressOK"
#define kEQSGeoServicesNotification_AddressFromPoint_Error @"EQSGeocodingGetAddressError"

#define kEQSGeoServicesNotification_PointsFromAddress_OK @"EQSGeocodingAddressSearchOK"
#define kEQSGeoServicesNotification_PointsFromAddress_Error @"EQSGeocodingAddressSearchError"

#define kEQSGeoServicesNotification_FindRoute_OK @"EQSGeoservicesFindRouteOK"
#define kEQSGeoServicesNotification_FindRoute_Error @"EQSGeoservicesFindRouteError"

// Each Notification's userInfo dictionary will contain service-specific values, but some are common
// kEQSGeoServicesNotification_WorkerOperationKey: The NSOperation handling the call.
#define kEQSGeoServicesNotification_WorkerOperationKey @"operation"
// kEQSGeoServicesNotification_ErrorKey: The NSError object in the case a call failed.
#define kEQSGeoServicesNotification_ErrorKey @"error"

#define kEQSGeoServicesNotification_AddressFromPoint_AddressCandidateKey @"candidate"
#define kEQSGeoServicesNotification_AddressFromPoint_MapPointKey @"mapPoint"
#define kEQSGeoServicesNotification_AddressFromPoint_DistanceKey @"distance"

#define kEQSGeoServicesNotification_PointsFromAddress_LocationCandidatesKey @"candidates"
#define kEQSGeoServicesNotification_PointsFromAddress_AddressKey @"address"
#define kEQSGeoServicesNotification_PointsFromAddress_ExtentKey @"searchExtent"

#define kEQSGeoServicesNotification_FindRoute_RouteTaskResultsKey @"routeResult"

// Keys to determine properties of the Route Task results.
#define kEQSRoutingStartPointName @"Start Point"
#define kEQSRoutingEndPointName @"End Point"

// Getting address values from the raw AddressFromPoint geoservice result.
#define kEQSAddressCandidateAddressField @"Address"
#define kEQSAddressCandidateCityField @"Admin1"
#define kEQSAddressCandidateStateField @"Admin2"
#define kEQSAddressCandidateZipField @"Postal"

@interface EQSGeoServices : NSObject
// Geocoding
- (NSOperation *) getPointFromAddress:(NSString *)singleLineAddress;
- (NSOperation *) getPointFromAddress:(NSString *)singleLineAddress withinEnvelope:(AGSEnvelope *)env;
// Reverse Geocoding
- (NSOperation *) getAddressFromPoint:(AGSPoint *)mapPoint;
// Routing
- (NSOperation *) getDirectionsFrom:(AGSPoint *)startPoint To:(AGSPoint *)fromPoint;
@end