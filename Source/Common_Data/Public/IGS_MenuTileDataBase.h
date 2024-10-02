#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_MenuTileSize.h"
#include "IGS_MenuTileDataBase.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType)
class COMMON_DATA_API UIGS_MenuTileDataBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_MenuTileDataBase();

    UFUNCTION(BlueprintCallable)
    void SetIsOwned(bool inIsOwned);

    UFUNCTION(BlueprintCallable)
    void SetIsDLC(bool inIsDLC);

    UFUNCTION(BlueprintPure)
    EIGS_MenuTileSize GetTileSize();

    UFUNCTION(BlueprintPure)
    FText GetName();

    UFUNCTION(BlueprintPure)
    bool GetIsOwned();

    UFUNCTION(BlueprintPure)
    bool GetIsDLC();

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetIdTag();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEntitlementTag();

    UFUNCTION(BlueprintPure)
    FText GetDescription();

};
