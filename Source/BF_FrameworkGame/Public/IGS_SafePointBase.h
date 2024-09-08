#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SafePointBase.generated.h"

class UIGS_SafePointComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SafePointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_SafePointComponent* SafePointComponent;
    
    AIGS_SafePointBase(const FObjectInitializer& ObjectInitializer);

};

