#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BinkSubtitleItem.h"
#include "IGS_BinkSubtitleDataAsset.generated.h"

UCLASS(BlueprintType)
class PAYBACK_API UIGS_BinkSubtitleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBinkSubtitleItem> Subtitles;
    
    UIGS_BinkSubtitleDataAsset();

};

