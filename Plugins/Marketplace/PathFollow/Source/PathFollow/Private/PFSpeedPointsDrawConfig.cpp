#include "PFSpeedPointsDrawConfig.h"
#include "Engine/Texture2D.h"

FPFSpeedPointsDrawConfig::FPFSpeedPointsDrawConfig() {
    (*this).bHideSpeedPoints = false;
    (*this).bHideSpeedPointInfoText = false;
    (*this).SpeedPointsColor.B = 0;
    (*this).SpeedPointsColor.G = 255;
    (*this).SpeedPointsColor.R = 0;
    (*this).SpeedPointsColor.A = 255;
    (*this).SpeedPointHitProxySize = 2.000000000e+01f;
    static ConstructorHelpers::FObjectFinder<UTexture2D> gen(TEXT("/PathFollow/S_Speed.S_Speed"));
    (*this)._SpeedPointSpriteTexture = gen.Object;
    (*this).bVisualizeSpeed = false;
    (*this).LowSpeedColor = FLinearColor(0.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).HighSpeedColor = FLinearColor(1.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
}
