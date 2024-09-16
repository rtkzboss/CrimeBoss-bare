#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SafePointBase.generated.h"

class UIGS_SafePointComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SafePointBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_SafePointBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_SafePointComponent* SafePointComponent;

};
