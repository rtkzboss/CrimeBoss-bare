#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_MusicPacksTableRow.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct BF_AUDIO_API FMETA_MusicPacksTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UAkStateValue>> MusicPacks;
    
    FMETA_MusicPacksTableRow();
};

