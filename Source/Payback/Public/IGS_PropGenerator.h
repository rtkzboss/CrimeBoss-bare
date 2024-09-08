#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PropGenerator.generated.h"

class UIGS_PropLogicComponent;
class USceneComponent;

UCLASS()
class PAYBACK_API AIGS_PropGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PropLogicComponent* m_PropLogicComponent;
    
public:
    AIGS_PropGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UIGS_PropLogicComponent* GetLogicComponent() const;
    
};

