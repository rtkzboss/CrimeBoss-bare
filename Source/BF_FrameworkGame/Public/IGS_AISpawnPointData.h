#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_AISpawnPointData.generated.h"

class UStaticMesh;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AISpawnPointData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AISpawnPointData();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UStaticMesh>> TestMeshesTags;
    
};

