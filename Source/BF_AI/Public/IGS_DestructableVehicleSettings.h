#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "IGS_DestructableVehicleSettings.generated.h"

class UAkAudioEvent;
class UCurveFloat;
class UDamageType;
class UMaterialInstance;
class UNiagaraSystem;

UCLASS(BlueprintType)
class BF_AI_API UIGS_DestructableVehicleSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_DestructableVehicleSettings();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> ExplosionDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> FireDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionBaseDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionEnemyRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FireRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionFireDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ExplosionPositionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplodingDamageToInstaExplode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OvertimeSelfDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FireDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDoorHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AiDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* GraySmokeParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* BlackSmokeParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor BlackSmokeColor1;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor BlackSmokeColor2;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* ExplosionDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PreExplosionAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PostExplosionAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ExplosionBounceCurve;
    
};

