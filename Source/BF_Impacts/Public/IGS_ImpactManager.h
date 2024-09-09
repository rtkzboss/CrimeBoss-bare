#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_WoundType.h"
#include "IGS_ImpactParameters.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactManager.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ImpactManager;
class UIGS_ImpactManagerSettings;
class UIGS_ImpactTypeObject;
class UObject;
class USkinnedDecalSampler;

UCLASS(BlueprintType)
class BF_IMPACTS_API UIGS_ImpactManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_ImpactManager();

    UFUNCTION(BlueprintCallable)
    static void CreateSkinnedDecalImpact(USkinnedDecalSampler* inSampler, const FHitResult& inHitResult, EIGS_WoundType inWoundType);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBloodSpatterImpact(const AIGS_GameCharacterFramework* inHitCharacter, UIGS_ImpactManager* inImpactManager, FIGS_ImpactParameters inParameters, const FHitResult& inHitResult);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableBloodImpacts;
    
protected:
    UPROPERTY()
    TArray<TSubclassOf<UIGS_ImpactTypeObject>> LoadedIDs;
    
    UPROPERTY()
    TMap<TWeakObjectPtr<UObject>, float> HitImpactCooldownMap;
    
    UPROPERTY()
    UIGS_ImpactManagerSettings* ImpactManagerSettings;
    
};

