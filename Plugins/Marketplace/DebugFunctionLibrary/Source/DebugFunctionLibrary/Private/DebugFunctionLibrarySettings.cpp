#include "DebugFunctionLibrarySettings.h"

UDebugFunctionLibrarySettings::UDebugFunctionLibrarySettings() {
    (*this).bGlobalDebug = true;
    (*this).bGlobalPrintDebug = true;
    (*this).bGlobalLogDebug = true;
    (*this).bGlobalDrawDebug = true;
    (*this).MaxPrintNodeFunctionDiscoveryIterations = 1000;
    (*this).DrawDebugTickDuration = 5.000000075e-02f;
    (*this).PrintDebugTickDuration = 5.000000075e-02f;
    (*this).bDebug = true;
    (*this).bPrintDebug = true;
    (*this).PrintDuration = 1.000000000e+01f;
    (*this).PrintColour = FLinearColor(0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).PrintWarningColour = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).PrintErrorColour = FLinearColor(1.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).bPrintClass = true;
    (*this).bPrintFunction = true;
    (*this).bLogDebug = true;
    (*this).bLogClass = true;
    (*this).bLogFunction = true;
    (*this).bDrawDebug = true;
    (*this).DrawDuration = 3.000000000e+01f;
    (*this).LineThickness = 2.000000000e+00f;
    (*this).LineLength = 1.500000000e+02f;
    (*this).Radius = 3.000000000e+01f;
    (*this).Segments = 12;
    (*this).ArrowSize = 2.000000000e+01f;
    (*this).HalfHeight = 8.000000000e+01f;
    (*this).Size = 5.000000000e+01f;
    (*this).Scale = 3.000000000e+00f;
    (*this).PrimaryColour = FLinearColor(1.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).SecondaryColour = FLinearColor(0.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).TertiaryColour = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
}

