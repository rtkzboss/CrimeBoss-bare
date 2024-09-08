#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundMusicStatesDataAsset.generated.h"

class UAkStateValue;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_MenuBackgroundMusicStatesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, UAkStateValue*> AkEvents;
    
    UIGS_MenuBackgroundMusicStatesDataAsset();

};

