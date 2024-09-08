#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_CoverSettingsInterface.h"
#include "IGS_DetectiveSettingsInterface.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.h"
#include "IGS_ReactionsSettingsInterface.h"
#include "IGS_ThrowableWeaponSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_AIDetectiveSettingsComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIDetectiveSettingsComponent : public UIGS_AISettingsComponent, public IIGS_MeleeWeaponActivationSettingsInterface, public IIGS_WeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_CoverSettingsInterface, public IIGS_ReactionsSettingsInterface, public IIGS_DetectiveSettingsInterface, public IIGS_ThrowableWeaponSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AIDetectiveSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

