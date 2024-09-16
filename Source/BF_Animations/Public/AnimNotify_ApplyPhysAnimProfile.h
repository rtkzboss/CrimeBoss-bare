#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ApplyPhysAnimProfile.generated.h"

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UAnimNotify_ApplyPhysAnimProfile : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_ApplyPhysAnimProfile();

    UPROPERTY(EditAnywhere)
    FName ProfileName;

    UPROPERTY(EditAnywhere)
    FName PhysBodyName;

};
