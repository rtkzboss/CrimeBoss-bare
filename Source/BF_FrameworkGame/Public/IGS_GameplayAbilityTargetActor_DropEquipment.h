#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "IGS_GameplayAbilityTargetActor_DropEquipment.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_GameplayAbilityTargetActor_DropEquipment : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LocalSpawnTransform;
    
    AIGS_GameplayAbilityTargetActor_DropEquipment(const FObjectInitializer& ObjectInitializer);

};

