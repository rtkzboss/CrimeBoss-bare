#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_ResetTriggerResult.h"
#include "IGS_LootBagThrownInWaterDynamicSignatureDelegate.h"
#include "IGS_ResetZone.generated.h"

class AIGS_LootBagPickup;
class AIGS_PlayerCharacter;
class UBoxComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ResetZone : public AActor {
    GENERATED_BODY()
public:
    AIGS_ResetZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ResetCharacter(AIGS_PlayerCharacter* Character, FVector& safeResetLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillCharacter(AIGS_PlayerCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleResetTrigger(AActor* inOtherActor, bool bKillOnFail);
    
    UFUNCTION(BlueprintCallable)
    void HandleReset(AIGS_PlayerCharacter* Character, FVector& safeResetLocation);
    
    UFUNCTION(BlueprintCallable)
    bool HandleBagReset(AIGS_LootBagPickup* bag, FVector& safeResetLocation);
    
    UFUNCTION(BlueprintCallable)
    void HandleBagDestroy(AIGS_LootBagPickup* bag);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* ResetTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> LastCheckpointResetLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NavmeshSearchExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NavmeshSearchExtentWider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavmeshOffsetZ;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ResetTriggerResult ResetTriggerResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LootBagThrownInWaterDynamicSignature OnLootBagInWaterEvent;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugCapsule;
    
};

