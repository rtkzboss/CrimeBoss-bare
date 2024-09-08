#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModAnimationDefinition.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UIGS_ModInventoryObject;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ModAnimationDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_ModInventoryObject> ID;
    
    UPROPERTY(EditAnywhere)
    EIGS_ModType ModTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* GripAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Inspect;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* InspectWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CheckMagazine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalSilent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponCheckMagazine;
    
    UPROPERTY(EditAnywhere)
    FVector LeftHandIKLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator LeftHandIKRotationOffset;
    
    UPROPERTY(BlueprintReadOnly)
    bool GripMod;
    
    UPROPERTY(BlueprintReadOnly)
    bool MagazineMod;
    
    FIGS_ModAnimationDefinition();
};

