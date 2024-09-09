#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PropInfoInterface.h"
#include "PropInfoStruct.h"
#include "PropMeshComponent.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_PROPS_API UPropMeshComponent : public UStaticMeshComponent, public IPropInfoInterface {
    GENERATED_BODY()
public:
    UPropMeshComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropInfoStruct mPropInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> StaticMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderMesh;
    

    // Fix for true pure virtual functions not being implemented
};

