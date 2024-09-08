#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_CoverSettingsInterface.h"
#include "IGS_PlayerBotTableRow.h"
#include "IGS_ReactionsSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_AIPlayerBotSettingsComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIPlayerBotSettingsComponent : public UIGS_AISettingsComponent, public IIGS_WeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_CoverSettingsInterface, public IIGS_ReactionsSettingsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_PlayerBotTableRow CurrentSettings;
    
public:
    UIGS_AIPlayerBotSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

