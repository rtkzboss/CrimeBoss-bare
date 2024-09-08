#pragma once
#include "CoreMinimal.h"
#include "IGS_LootItemsData.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootItemBaseComponent.generated.h"

class UIGS_LootItemInventoryObject;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootItemBaseComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_LootItemInventoryObject> LootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootOrderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemWeight;
    
    UIGS_LootItemBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FIGS_LootItemsData GetLootItemData();
    
};

