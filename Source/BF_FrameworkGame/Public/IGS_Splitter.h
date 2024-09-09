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
    AIGS_Splitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SplitterInit();
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UShapeComponent* SplitterShape;
    

    // Fix for true pure virtual functions not being implemented
};

