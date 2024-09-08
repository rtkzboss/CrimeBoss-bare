#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AreaOfOperations.h"
#include "IGS_AreaOfOperationsComponent.generated.h"

class AIGS_RoomBase;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AreaOfOperationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FIGS_AreaOfOperations> AreaOfOperations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AIGS_RoomBase*> EmptyArray;
    
public:
    UIGS_AreaOfOperationsComponent(const FObjectInitializer& ObjectInitializer);

};

