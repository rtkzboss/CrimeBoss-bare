#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "CustomizableSkeletalMeshActor.generated.h"

class UCustomizableSkeletalComponent;

UCLASS()
class CUSTOMIZABLEOBJECT_API ACustomizableSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ACustomizableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableSkeletalComponent* CustomizableSkeletalComponent;

};
