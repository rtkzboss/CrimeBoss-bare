#pragma once
#include "CoreMinimal.h"
#include "IGS_Common_DataDevSettings_Base.h"
#include "IGS_Common_DataDevSettings_Items.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_Common_DataDevSettings_Items : public UIGS_Common_DataDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_Common_DataDevSettings_Items();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> GenericItemsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> KeyItemsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LootItemsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> GlobalItemsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LootCollectionDataTable;
    
};

