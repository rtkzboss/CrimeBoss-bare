#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_HeavyShockSettingsInterface.h"
#include "IGS_HeavyWeakSpotSettingsInterface.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIHeavySettingsComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIHeavySettingsComponent : public UIGS_AISettingsComponent, public IIGS_MeleeWeaponActivationSettingsInterface, public IIGS_WeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_HeavyShockSettingsInterface, public IIGS_HeavyWeakSpotSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AIHeavySettingsComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> ShockGE;


    // Fix for true pure virtual functions not being implemented
};
