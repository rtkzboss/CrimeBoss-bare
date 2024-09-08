#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_TrafficSegment.generated.h"

class UIGS_TrafficPathComponent;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_TrafficSegment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_TrafficPathComponent* PathComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Hidden;
    
    AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer);

};

