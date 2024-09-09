#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerIgnoreCollisionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerIgnoreCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerIgnoreCollisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableCollisionWithBackupHeisters;
    
};

