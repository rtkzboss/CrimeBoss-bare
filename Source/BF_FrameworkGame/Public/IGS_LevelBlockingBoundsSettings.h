#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "Templates/SubclassOf.h"
#include "IGS_LevelBlockingBoundsSettings.generated.h"

class UNavArea;
class UUserWidget;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_LevelBlockingBoundsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> NoHeisterAreaClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UUserWidget> OutOfBoundsWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UIGS_LevelBlockingBoundsSettings();

};

