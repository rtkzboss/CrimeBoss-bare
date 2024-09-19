#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerEffect.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerEffect : uint8 {
    PE_VisorEffect UMETA(DisplayName="Visor Effect"),
    PE_ArmorEffect UMETA(DisplayName="Armor Effect"),
    PE_DamageEffect UMETA(DisplayName="Damage Effect"),
    PE_HealthEffect UMETA(DisplayName="Health Effect"),
    PE_RainOnCameraEffect UMETA(DisplayName="Rain On Camera Effect"),
    PE_FlashbangEffect UMETA(DisplayName="Flashbang Effect"),
    PE_DownStateEffect UMETA(DisplayName="Down State Effect"),
    PE_FinalDeathEffect UMETA(DisplayName="Final Death Effect"),
    PE_FallingEffect UMETA(DisplayName="Falling Effect"),
    PE_OnFireEffect UMETA(DisplayName="On Fire Effect"),
    PE_StimshotEffect UMETA(DisplayName="Stimshot Effect"),
    PE_None = 255 UMETA(DisplayName=None),
};
