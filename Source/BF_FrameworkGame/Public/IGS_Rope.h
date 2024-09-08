#pragma once
#include "CoreMinimal.h"
#include "IGS_Ladder.h"
#include "IGS_Rope.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_Rope : public AIGS_Ladder {
    GENERATED_BODY()
public:
    AIGS_Rope(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPostInitializeComponents();
    
};

