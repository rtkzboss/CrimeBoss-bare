#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_DangerAreaComponent.generated.h"

class UIGS_DamageTypeBase;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DangerAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DangerRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDangerous;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDangerousUntilAlarm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UIGS_DamageTypeBase>> DamageTypesToFear;
    
public:
    UIGS_DangerAreaComponent(const FObjectInitializer& ObjectInitializer);

};

