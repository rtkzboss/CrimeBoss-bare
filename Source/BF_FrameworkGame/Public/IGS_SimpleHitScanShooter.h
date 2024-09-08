#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_SimpleShooter.h"
#include "Templates/SubclassOf.h"
#include "IGS_SimpleHitScanShooter.generated.h"

class UDamageType;
class UIGS_ImpactTypeObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleHitScanShooter : public UIGS_SimpleShooter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugTrace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> ShotImpactType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactAILoudness;
    
public:
    UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_HandleMiss(const FTransform& inShotTransform, const FHitResult& inFinalHit);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_HandleHitResults(const FTransform& inShotTransform, const TArray<FHitResult>& inPenetrations, const FHitResult& inFinalHit);
    
};

