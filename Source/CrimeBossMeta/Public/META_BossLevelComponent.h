#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_BossLevelBaseComponent.h"
#include "META_BossLevelComponent.generated.h"

class UMETA_BossLevelData;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BossLevelComponent : public UIGS_BossLevelBaseComponent {
    GENERATED_BODY()
public:
    UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FMETA_PerkData> CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, UPARAM(Ref) TArray<FMETA_PerkData>& inCurrentPerks);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    UMETA_BossLevelData* BossLevelData;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AmountOfPrimaryWeaponsIssued;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AmountOfAdditionalEquipmentIssued;
    
    UPROPERTY(BlueprintReadWrite)
    float LocalBossPointAfterAsset;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite)
    float PreviousPoints;
    
};

