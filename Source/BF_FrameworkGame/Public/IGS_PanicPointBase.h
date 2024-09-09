#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PanicPointBase.generated.h"

class UIGS_PanicPointComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PanicPointBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_PanicPointBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_PanicPointComponent* PanicPointComponent;
    
};

