#include "PrefabricatorSettings.h"

UPrefabricatorSettings::UPrefabricatorSettings() {
    (*this).PivotPosition = EPrefabricatorPivotPosition::Center;
    (*this).bAllowDynamicUpdate = true;
    (*this).IgnoreBoundingBoxForObjects = {};
    (*this).DefaultThumbnailPitch = -1.125000000e+01f;
    (*this).DefaultThumbnailYaw = -1.575000000e+02f;
}

