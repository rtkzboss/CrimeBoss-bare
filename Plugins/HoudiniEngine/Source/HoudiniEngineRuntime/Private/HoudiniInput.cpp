#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput() {
    (*this).AssetNodeId = -1;
    (*this).InputNodeId = -1;
    (*this).ParmId = -1;
    (*this).KeepWorldTransform = EHoudiniXformType::Auto;
    (*this).bCookOnCurveChanged = true;
    (*this).GeometryInputObjects = {nullptr};
    (*this).bUseLegacyInputCurves = true;
    (*this).UnrealSplineResolution = 5.000000000e+01f;
    (*this).GeometryCollectionInputObjects = {nullptr};
    (*this).bCanDeleteHoudiniNodes = true;
}

