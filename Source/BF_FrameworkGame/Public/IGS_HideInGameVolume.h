#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_HideInGameVolume.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_HideInGameVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_HideInGameVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetObjectsHidden(bool inHidden);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCollectOnlyObjectsWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RequiredTag;
    
};

