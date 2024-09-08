#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_SplitterRemover.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SplitterRemover : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName RemoveSplittersWithTag;
    
public:
    AIGS_SplitterRemover(const FObjectInitializer& ObjectInitializer);

};

