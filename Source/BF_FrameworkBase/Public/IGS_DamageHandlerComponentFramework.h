#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DamageHandlerComponentFramework.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DamageHandlerComponentFramework : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_DamageHandlerComponentFramework(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* HeadPhysicalMaterial;
    
};

