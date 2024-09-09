#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageHandlerComponentFramework.h"
#include "ScalableFloat.h"
#include "IGS_DamageHandlerComponent.generated.h"

class UPhysicalMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DamageHandlerComponent : public UIGS_DamageHandlerComponentFramework {
    GENERATED_BODY()
public:
    UIGS_DamageHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UPhysicalMaterial*, FScalableFloat> BodyPartMaterialMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bCanSkipDownstate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkipDownStateOverdamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShieldPenetrationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnknownBodyPartMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyPlayerFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyAIFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyPlayerNeutralFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AINeutralFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FriendlyFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FriendlyFireMinHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelfDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelfDamageMinHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplySelfDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StealthDamageAllowedTeamSides;
    
    UPROPERTY(VisibleAnywhere)
    float DamageReceivedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float BulletDamageReceivedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float ExplosiveDamageReceivedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float FireDamageReceivedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float MeleeDamageReceivedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float GlobalEnemyAIDamageReceivedAttribute;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

