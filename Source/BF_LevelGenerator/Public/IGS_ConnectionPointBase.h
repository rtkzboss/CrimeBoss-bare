#pragma once
#include "CoreMinimal.h"
#include "EIGS_ConnectionPointTag.h"
#include "GameFramework/Actor.h"
#include "IGS_ConnectionPointBase.generated.h"

class USceneComponent;

UCLASS(Abstract)
class BF_LEVELGENERATOR_API AIGS_ConnectionPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_ConnectionPointTag> PopulatorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ConnectionPointTag;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* Root;
    
public:
    AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer);

};

