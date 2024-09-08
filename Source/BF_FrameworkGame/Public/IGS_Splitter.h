#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_BreachInterface.h"
#include "IGS_Splitter.generated.h"

class UShapeComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_Splitter : public AActor, public IIGS_BreachInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UShapeComponent* SplitterShape;
    
public:
    AIGS_Splitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SplitterInit();
    

    // Fix for true pure virtual functions not being implemented
};

