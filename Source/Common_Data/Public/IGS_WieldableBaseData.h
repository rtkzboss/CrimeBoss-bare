#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_WieldableClass.h"
#include "IGS_CommonItemData.h"
#include "IGS_WieldableBaseData.generated.h"

class AWieldableAbstract;
class UIGS_WeaponSkinData;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WieldableBaseData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AWieldableAbstract> WieldableClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WieldableTortillaBaseFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WieldableTortillaAimFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HolsterTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WieldingMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_WieldableClass Class;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ClassTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag WieldingOffence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UIGS_WeaponSkinData> DefaultSkin;
    
    FIGS_WieldableBaseData();
};

