#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_EquipAnimationData.h"
#include "IGS_TPP_Holster_MontageHolder.h"
#include "IGS_ThirdpersonHolsterAnimation.generated.h"

USTRUCT()
struct BF_ANIMATIONS_API FIGS_ThirdpersonHolsterAnimation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIGS_TPP_EquipAnimationData EqipAnimationData;

protected:
    UPROPERTY()
    FIGS_TPP_Holster_MontageHolder m_ThirdpersonHolsterMontageHolder;

public:
    FIGS_ThirdpersonHolsterAnimation();
};
