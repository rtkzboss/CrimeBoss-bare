#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIDangerEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_AIDangerEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DangerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FIGS_AIDangerEvent();
};

