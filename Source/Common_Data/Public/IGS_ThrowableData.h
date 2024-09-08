#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_GrenadeData.h"
#include "IGS_WieldableBaseData.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableData.generated.h"

class AActor;
class UIGS_EquipmentInventoryObject;
class UIGS_ImpactTypeObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ThrowableData : public FIGS_WieldableBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Projectile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UIGS_EquipmentInventoryObject> Equipment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_GrenadeData GrenadeData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UIGS_ImpactTypeObject> HitImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitImpactCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitImpactCustomMass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool HitImpactUseDefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ExplodeOnEnemyImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Bounciness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinFrictionFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HighThrowVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LowThrowVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HighThrowSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowThrowSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HighThrowHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowThrowHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ThrowRotationRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ThrowRotationAxis;
    
    FIGS_ThrowableData();
};

