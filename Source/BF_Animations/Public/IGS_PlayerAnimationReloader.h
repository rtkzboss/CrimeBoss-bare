#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerAnimationReloader.generated.h"

class AIGS_WeaponBase;
class UIGS_ReloaderBase;

USTRUCT()
struct BF_ANIMATIONS_API FIGS_PlayerAnimationReloader {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UIGS_ReloaderBase* m_ReloadBase;

    UPROPERTY(Transient)
    AIGS_WeaponBase* m_WeaponBase;

public:
    FIGS_PlayerAnimationReloader();
};
