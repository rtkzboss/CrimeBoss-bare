#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SearchPointBase.generated.h"

class UIGS_SearchPointComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_SearchPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_SearchPointComponent* SearchPointComponent;
    
    AIGS_SearchPointBase(const FObjectInitializer& ObjectInitializer);

};

