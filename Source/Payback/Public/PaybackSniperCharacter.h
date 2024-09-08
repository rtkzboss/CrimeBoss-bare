#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.h"
#include "PaybackAICharacter.h"
#include "PaybackSniperCharacter.generated.h"

UCLASS()
class PAYBACK_API APaybackSniperCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_WeaponVisibilityType)
    EIGS_WeaponVisibilityType WeaponVisibilityType;
    
    APaybackSniperCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_WeaponVisibilityType() const;
    
};

