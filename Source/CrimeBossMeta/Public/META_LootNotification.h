#pragma once
#include "CoreMinimal.h"
#include "EMETA_LootPurpose.h"
#include "META_BaseNotification.h"
#include "META_LootNotification.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_LootNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 LootValue;
    
    UPROPERTY()
    FText LootCategory;
    
    UPROPERTY()
    EMETA_LootPurpose LootPurpose;
    
public:
    UMETA_LootNotification();

    UFUNCTION(BlueprintCallable)
    void SetLootInfo(const FText& inLootCategory, const EMETA_LootPurpose inLootPurpose, const int32 inLootValue);
    
    UFUNCTION(BlueprintPure)
    int32 GetLootValue() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_LootPurpose GetLootPurpose() const;
    
    UFUNCTION(BlueprintPure)
    FText GetLootCategory() const;
    
};

