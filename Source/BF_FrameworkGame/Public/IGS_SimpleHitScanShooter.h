#pragma once
#include "CoreMinimal.h"
#include "IGS_NetProjectileHitResult.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/DamageType.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "IGS_ImpactTypeObject.h"
#include "IGS_SimpleShooter.h"
#include "Templates/SubclassOf.h"
#include "IGS_SimpleHitScanShooter.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleHitScanShooter : public UIGS_SimpleShooter {
    GENERATED_BODY()
public:
    UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_HandleMiss(const FTransform& inShotTransform, const FIGS_NetProjectileHitResult& inFinalHit);

    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_HandleHitResults(const FTransform& inShotTransform, const TArray<FIGS_NetProjectileHitResult>& inPenetrations, const FIGS_NetProjectileHitResult& inFinalHit);

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

};
