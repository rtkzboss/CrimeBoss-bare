#pragma once
#include "CoreMinimal.h"
#include "IGS_SmartObjectInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_SmartObjectSimpleBase.generated.h"

class USceneComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_SmartObjectSimpleBase : public AActor, public IIGS_SmartObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bShouldPlayAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bCanPlayerBumpInto;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootComp;
    
public:
    AIGS_SmartObjectSimpleBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

