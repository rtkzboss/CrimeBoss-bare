#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_InteractiveWireBoxBase.h"
#include "IGS_WireBoxWireInfo.h"
#include "IGS_InteractiveWireBox.generated.h"

class USpotLightComponent;
class UStaticMesh;
class UTimelineComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBox : public AIGS_InteractiveWireBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor StatusFailColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTimelineComponent* LightsTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<USpotLightComponent*> WireLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> WireCutMeshes;
    
    UPROPERTY(Replicated)
    TArray<FIGS_WireBoxWireInfo> mR_WiresInfo;
    
public:
    AIGS_InteractiveWireBox(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWireLightState(int32 inWireIndex, bool inState);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Client_SetWireLight(int32 inWireIndex, bool inState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_SetFailStatus();
    
};

