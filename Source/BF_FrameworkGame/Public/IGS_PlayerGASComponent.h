#pragma once
#include "CoreMinimal.h"
#include "IGS_GASComponentBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerGASComponent.generated.h"

class UGameplayEffect;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerGASComponent : public UIGS_GASComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> CharacterAttributeGEs;
    
public:
    UIGS_PlayerGASComponent(const FObjectInitializer& ObjectInitializer);

};

