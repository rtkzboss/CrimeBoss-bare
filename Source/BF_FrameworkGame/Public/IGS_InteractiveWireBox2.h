#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveWireBoxBase.h"
#include "IGS_InteractiveWireBox2.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UMaterialInterface;
class UPrimitiveComponent;
class UTimelineComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBox2 : public AIGS_InteractiveWireBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTimelineComponent* LightsTimeline;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* LightFailMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* CutSuccessAkEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> LightColorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UPrimitiveComponent*> WireSpheresLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UPrimitiveComponent*> WireSpheresRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UIGS_InteractiveComponent*> WireInteractiveComponents;
    
public:
    AIGS_InteractiveWireBox2(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLightsColors();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Client_SetLightFailColors(int32 inWireIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_SetLightColors(int32 inWireIndex, int32 inFirstColorIndex, int32 inSecondColorIndex);
    
};

