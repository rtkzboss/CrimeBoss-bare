#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.h"
#include "PaybackAICharacter.h"
#include "PaybackSniperCharacter.generated.h"

UCLASS()
class PAYBACK_API APaybackSniperCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackSniperCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnRep_WeaponVisibilityType() const;
    
    UPROPERTY(ReplicatedUsing=OnRep_WeaponVisibilityType)
    EIGS_WeaponVisibilityType WeaponVisibilityType;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

