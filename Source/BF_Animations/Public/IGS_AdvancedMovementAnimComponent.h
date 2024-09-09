#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AdvancedMovementAnimComponent.generated.h"

class AIGS_PlayerFPVArmsFramework;
class AIGS_WieldableBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_ANIMATIONS_API UIGS_AdvancedMovementAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AdvancedMovementAnimComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY()
    AIGS_WieldableBase* m_WieldableBase;
    
    UPROPERTY()
    AIGS_PlayerFPVArmsFramework* m_ArmsActor;
    
};

