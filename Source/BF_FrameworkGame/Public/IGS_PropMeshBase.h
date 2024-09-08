#pragma once
#include "CoreMinimal.h"
#include "IGS_BreakableMeshComponent.h"
#include "PropMeshInfoStruct.h"
#include "IGS_PropMeshBase.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PropMeshBase : public UIGS_BreakableMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropMeshInfoStruct PropMeshInfo;
    
    UPROPERTY(ReplicatedUsing=OnRep_Spawned)
    int16 mR_SpawnedIndex;
    
public:
    UIGS_PropMeshBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_Spawned();
    
};

