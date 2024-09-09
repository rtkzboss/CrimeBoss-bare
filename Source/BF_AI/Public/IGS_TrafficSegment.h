#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_TrafficSegment.generated.h"

class UIGS_TrafficPathComponent;

UCLASS()
class BF_AI_API AIGS_TrafficSegment : public AActor {
    GENERATED_BODY()
public:
    AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_TrafficPathComponent* PathComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Hidden;
    
};

