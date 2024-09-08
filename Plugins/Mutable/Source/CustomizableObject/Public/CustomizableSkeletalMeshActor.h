#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "CustomizableSkeletalMeshActor.generated.h"

class UCustomizableSkeletalComponent;

UCLASS(Config=Inherit)
class CUSTOMIZABLEOBJECT_API ACustomizableSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableSkeletalComponent* CustomizableSkeletalComponent;
    
public:
    ACustomizableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

