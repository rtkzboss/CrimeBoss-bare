#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ThreatPointBase.generated.h"

class UIGS_ThreatPointComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ThreatPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_ThreatPointComponent* ThreatPointComponent;
    
    AIGS_ThreatPointBase(const FObjectInitializer& ObjectInitializer);

};

