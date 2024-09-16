#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ChildActorComponent.h"
#include "PropInfoInterface.h"
#include "PropInfoStruct.h"
#include "Templates/SubclassOf.h"
#include "PropChildActorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_PROPS_API UPropChildActorComponent : public UChildActorComponent, public IPropInfoInterface {
    GENERATED_BODY()
public:
    UPropChildActorComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropInfoStruct mPropInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderMesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> ActorClass;


    // Fix for true pure virtual functions not being implemented
};
