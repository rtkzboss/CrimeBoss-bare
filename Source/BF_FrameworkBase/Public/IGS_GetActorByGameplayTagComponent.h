#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_GetActorByGameplayTagComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_GetActorByGameplayTagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UIGS_GetActorByGameplayTagComponent(const FObjectInitializer& ObjectInitializer);

};

