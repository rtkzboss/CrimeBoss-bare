#pragma once
#include "CoreMinimal.h"
#include "META_ComparableItemData.h"
#include "GameplayTagContainer.h"
#include "IGS_TileItemWeaponFamilyData.generated.h"

class UTexture2D;

UCLASS()
class BF_GUI_API UIGS_TileItemWeaponFamilyData : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UIGS_TileItemWeaponFamilyData();

    UPROPERTY(BlueprintReadWrite)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite)
    FText Name;

    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite)
    int32 UnlockedCount;

    UPROPERTY(BlueprintReadWrite)
    int32 UnlockableCount;

    UPROPERTY(BlueprintReadWrite)
    bool HasDlcItem;

};
