#include "IGS_LensFlare.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/SphereComponent.h"

AIGS_LensFlare::AIGS_LensFlare(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("LensFlareComponent"));
    auto gen2 = CreateDefaultSubobject<USphereComponent>(TEXT("SourceBoundsComponent"));
    (*this).LensFlareComponent = gen;
    (*this).SourceBounds = gen2;
    (*this).FPS = 6.000000000e+01f;
    (*this).Luminosity = 1.000000000e+00f;
    (*this).GlobalBrightness = 1.000000000e+00f;
    (*this).GhostsBrightness = 1.000000000e+00f;
    (*this).FadeDistance = 2.048000000e+03f;
    (*this).IncreasingBloomByDistance = 2.000000000e+00f;
    (*this).GlobalColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).FadeOutSpeed = 1.500000000e+01f;
    (*this).FadeInSpeed = 1.500000000e+01f;
    (*this).BaseSizeY = 5.000000000e+00f;
    (*this).BaseSizeX = 5.000000000e+00f;
    (*this).FlickerIntensity = 1.000000000e+00f;
    (*this).FlickerTime = 2.000000000e+00f;
    (*this).HaloTextureBrightness = 2.000000000e+00f;
    (*this).HaloContrast = 2.000000000e+00f;
    (*this).HaloOpacity = 2.500000000e-01f;
    (*this).HaloInnerRadius = 1.000000000e+00f;
    (*this).HaloOuterColor = FLinearColor(3.551600128e-02f, 0.000000000e+00f, 5.551790000e+05f, 1.000000000e+00f);
    (*this).HaloInnerColor = FLinearColor(1.000000000e+00f, 1.964700073e-01f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).HaloTextureSize = 1.428572059e+00f;
    (*this).IrisBrightness = 1.000000000e+00f;
    (*this).IrisContrast = 1.000000000e+00f;
    (*this).IrisSize = 1.000000000e+00f;
    (*this).IrisColor = FLinearColor(1.000000000e+00f, 2.249599993e-01f, 6.932600141e-01f, 1.000000000e+00f);
    (*this).IrisProximityCentre = 6.000000238e-01f;
    (*this).CentreFlareBrightness = 4.000000000e+01f;
    (*this).CentreFlareContrast = 2.000000000e+00f;
    (*this).CentreFlareSize = 1.419999957e+00f;
    (*this).CentreFlareColor = FLinearColor(1.000000000e+00f, 1.964700073e-01f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).MainFlareBrightness = 5.000000075e-02f;
    (*this).MainFlareContrast = 5.000000000e+00f;
    (*this).MainFlareInnerRadius = 3.000000119e-01f;
    (*this).MainFlareSize = 1.000000000e+00f;
    (*this).MainOuterColor = FLinearColor(1.000000000e+00f, 1.964700073e-01f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).MainInnerColor = FLinearColor(1.000000000e+00f, 1.964700073e-01f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).ReflectionBrightness = 1.000000000e+01f;
    (*this).ReflectionContrast = 4.000000000e+00f;
    (*this).ReflectionSize = 2.380000114e+00f;
    (*this).ReflectionColor = FLinearColor(1.000000000e+00f, 1.964700073e-01f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).FlareOppositeBrightness1 = 1.000000000e+01f;
    (*this).FlareOppositeContrast1 = 2.000000000e+00f;
    (*this).FlareOppositeSize1 = 4.500000000e+01f;
    (*this).FlareOppositeColor1 = FLinearColor(1.000000000e+00f, 2.249599993e-01f, 6.932600141e-01f, 1.000000000e+00f);
    (*this).FlareOppositeBrightness2 = 1.000000000e+01f;
    (*this).FlareOppositeContrast2 = 2.000000000e+00f;
    (*this).FlareOppositeSize2 = 1.620000076e+01f;
    (*this).FlareOppositeColor2 = FLinearColor(1.000000000e+00f, 0.000000000e+00f, 8.323000371e-02f, 1.000000000e+00f);
    (*this).OppositeFlaresAxisProjection = 8.000000119e-01f;
    (*this).FlareFrontBrightness01 = 1.000000000e+00f;
    (*this).FlareFrontContrast01 = 2.000000000e+00f;
    (*this).FlareFrontSize01 = 1.750000000e+01f;
    (*this).FlareFrontProximityCentre01 = 6.200000048e-01f;
    (*this).FlareFrontColor1 = FLinearColor(5.729200244e-01f, 1.288799942e-01f, 3.971799910e-01f, 1.000000000e+00f);
    (*this).FlareFrontBrightness02 = 1.000000000e+00f;
    (*this).FlareFrontContrast02 = 2.000000000e+00f;
    (*this).FlareFrontSize02 = 8.000000000e+00f;
    (*this).FlareFrontProximityCentre02 = 8.000000119e-01f;
    (*this).FlareFrontColor2 = FLinearColor(4.218800068e-01f, 9.489999712e-02f, 2.924700081e-01f, 1.000000000e+00f);
    (*this).FrontFlaresAxisProjection = 6.000000238e-01f;
    (*this).ReflectedFlareBrightness01 = 1.000000000e+02f;
    (*this).ReflectedFlareContrast01 = 2.000000000e+00f;
    (*this).ReflectedFlareSize01 = 7.000000000e+00f;
    (*this).ReflectedFlareProximityCentre01 = 6.000000238e-01f;
    (*this).ReflectedFlareColor01 = FLinearColor(1.000000000e+00f, 8.449999616e-03f, 6.817000359e-02f, 1.000000000e+00f);
    (*this).ReflectedFlareBrightness02 = 1.300000000e+01f;
    (*this).ReflectedFlareContrast02 = 2.000000000e+00f;
    (*this).ReflectedFlareSize02 = 5.000000000e+00f;
    (*this).ReflectedFlareProximityCentre02 = 6.999999881e-01f;
    (*this).ReflectedFlareColor02 = FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.103499979e-01f, 1.000000000e+00f);
    (*this).GlobalMinorFlareBrightness01 = 1.000000000e+02f;
    (*this).GlobalMinorFlareContrast01 = 4.000000000e+00f;
    (*this).GlobalMinorFlareSize01 = 7.000000000e+00f;
    (*this).MinorFlareSizeRandom01 = 7.000000000e+00f;
    (*this).MinorFlareProximityCentre01 = 6.000000238e-01f;
    (*this).GlobalMinorFlareColor01 = FLinearColor(2.447900027e-01f, 5.507000163e-02f, 1.696999967e-01f, 1.000000000e+00f);
    (*this).GlobalMinorFlareBrightness02 = 1.000000000e+02f;
    (*this).GlobalMinorFlareContrast02 = 4.000000000e+00f;
    (*this).GlobalMinorFlareSize02 = 7.000000000e+00f;
    (*this).MinorFlareSizeRandom02 = 7.000000000e+00f;
    (*this).MinorFlareProximityCentre02 = 6.000000238e-01f;
    (*this).GlobalMinorFlareColor02 = FLinearColor(2.864600122e-01f, 6.443999708e-02f, 1.985899955e-01f, 1.000000000e+00f);
    (*this).MinorContrast1 = 1.000000000e+00f;
    (*this).MinorBrightness1 = 1.000000000e+00f;
    (*this).MinorContrast2 = 1.000000000e+00f;
    (*this).MinorBrightness2 = 1.000000000e+00f;
    (*this).MinorContrast3 = 1.000000000e+00f;
    (*this).MinorBrightness3 = 1.000000000e+00f;
    (*this).MinorContrast4 = 1.000000000e+00f;
    (*this).MinorBrightness4 = 1.000000000e+00f;
    (*this).MinorContrast5 = 1.000000000e+00f;
    (*this).MinorBrightness5 = 1.000000000e+00f;
    (*this).MinorContrast6 = 1.000000000e+00f;
    (*this).MinorBrightness6 = 1.000000000e+00f;
    (*this).MinorContrast7 = 1.000000000e+00f;
    (*this).MinorBrightness7 = 1.000000000e+00f;
    (*this).MinorContrast8 = 1.000000000e+00f;
    (*this).MinorBrightness8 = 1.000000000e+00f;
    (*this).AdditionalFlareBrightness = 1.000000000e+00f;
    (*this).AdditionalFlareContrast = 1.000000000e+00f;
    (*this).AdditionalFlareSize = 5.000000000e+00f;
    (*this).AdditionalFlareColor = FLinearColor(1.000000000e+00f, 2.249599993e-01f, 6.932600141e-01f, 1.000000000e+00f);
    (*this).PrimaryActorTick.bTickEvenWhenPaused = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.TickInterval = 1.666666754e-02f;
    (*this).RootComponent = gen;
}


