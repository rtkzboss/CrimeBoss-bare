#pragma once
#include "CoreMinimal.h"
#include "DangerAreaInterface.h"
#include "GameplayTagContainer.h"
#include "IGS_BoxSphere.h"
#include "IGS_DangerAreaVolume.generated.h"

class UNavModifierComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_DangerAreaVolume : public AIGS_BoxSphere, public IDangerAreaInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DangerType;
    
    UPROPERTY(Instanced)
    UNavModifierComponent* NavModifier;
    
public:
    AIGS_DangerAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    

    // Fix for true pure virtual functions not being implemented
};

