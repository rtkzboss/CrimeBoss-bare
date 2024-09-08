#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "PropInfoInterface.h"
#include "PropInfoStruct.h"
#include "Templates/SubclassOf.h"
#include "PropChildActorComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_PROPS_API UPropChildActorComponent : public UChildActorComponent, public IPropInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropInfoStruct mPropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> ActorClass;
    
    UPropChildActorComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

