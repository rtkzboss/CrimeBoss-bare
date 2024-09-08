#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_BasherComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BasherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_WeaponBashAttackDefinition BashAttackDefinition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_WeaponBashAttackDefinition AIAttackDefinition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
public:
    UIGS_BasherComponent(const FObjectInitializer& ObjectInitializer);

};

