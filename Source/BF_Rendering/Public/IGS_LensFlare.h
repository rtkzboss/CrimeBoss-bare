#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_LensFlare.generated.h"

class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USphereComponent;
class UTexture;

UCLASS(Abstract)
class BF_RENDERING_API AIGS_LensFlare : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UMaterialBillboardComponent* LensFlareComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USphereComponent* SourceBounds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInterface* FlareMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FPS;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstanceDynamic* m_FlareMIDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Luminosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GhostsBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDistanceBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreasingBloomByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GlobalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlickerIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlickerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HaloTextureBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HaloContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HaloOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HaloInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HaloOuterColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HaloInnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* HaloTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HaloTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor IrisColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Iris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IrisProximityCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CentreFlareBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CentreFlareContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CentreFlareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CentreFlareColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* CentreFlareTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainFlareBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainFlareContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainFlareInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainFlareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MainOuterColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MainInnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MainFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ReflectionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ReflectionCentreTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeBrightness1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeContrast1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeSize1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FlareOppositeColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* FlareOpposite01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeBrightness2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeContrast2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareOppositeSize2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FlareOppositeColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* FlareOpposite02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OppositeFlaresAxisProjection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontBrightness01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontContrast01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontSize01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontProximityCentre01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FlareFrontColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* FlareFront01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontBrightness02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontContrast02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontSize02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlareFrontProximityCentre02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FlareFrontColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* FlareFront02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontFlaresAxisProjection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareBrightness01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareContrast01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareSize01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareProximityCentre01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ReflectedFlareColor01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ReflectedFlare01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareBrightness02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareContrast02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareSize02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectedFlareProximityCentre02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ReflectedFlareColor02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ReflectedFlare02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareBrightness01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareContrast01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareSize01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorFlareSizeRandom01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorFlareProximityCentre01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GlobalMinorFlareColor01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareBrightness02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareContrast02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalMinorFlareSize02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorFlareSizeRandom02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorFlareProximityCentre02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GlobalMinorFlareColor02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare07;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MinorFlare08;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorContrast8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinorBrightness8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalFlareBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalFlareContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalFlareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AdditionalFlareColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* AdditionalFlare;
    
public:
    AIGS_LensFlare(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PostConstruction();
    
};

