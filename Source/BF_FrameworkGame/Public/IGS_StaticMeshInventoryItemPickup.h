#pragma once
#include "CoreMinimal.h"
#include "IGS_PickupActorInventoryItem.h"
#include "IGS_StaticMeshInventoryItemPickup.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_StaticMeshInventoryItemPickup : public AIGS_PickupActorInventoryItem {
    GENERATED_BODY()
public:
    AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsShineEnabled(bool inEnabled);

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* PickupStaticMeshComp;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> DefaultMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsShineEnabled;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTakeMeshFromDatabase;

};
