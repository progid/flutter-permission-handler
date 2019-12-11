//
//  PermissionHandlerEnums.h
//  permission_geo_handler
//
//  Created by Razvan Lung on 15/02/2019.
//

typedef NS_ENUM(int, PermissionGroup) {
    PermissionGroupLocation = 0,
    PermissionGroupLocationWhenInUse,
    PermissionGroupUnknown,
};

typedef NS_ENUM(int, PermissionStatus) {
    PermissionStatusDenied = 0,
    PermissionStatusDisabled,
    PermissionStatusGranted,
    PermissionStatusRestricted,
    PermissionStatusUnknown,
};

typedef NS_ENUM(int, ServiceStatus) {
    ServiceStatusDisabled = 0,
    ServiceStatusEnabled,
    ServiceStatusNotApplicable,
    ServiceStatusUnknown,
};
