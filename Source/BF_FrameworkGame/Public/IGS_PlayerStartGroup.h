#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PlayerStartGroup.generated.h"

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PlayerStartGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRandom;
    
    AIGS_PlayerStartGroup(const FObjectInitializer& ObjectInitializer);

};

