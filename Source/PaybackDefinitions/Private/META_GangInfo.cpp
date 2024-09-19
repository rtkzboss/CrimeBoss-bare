#include "META_GangInfo.h"

FMETA_GangInfo::FMETA_GangInfo() {
    (*this).Cash = 0;
    (*this).Priority = 0;
    (*this).BaseStrength = 0;
    (*this).StrengthChangeFromTerritory = 0;
    (*this).TopEnemies = TMap<EMETA_Gang, int32>{};
    (*this).Friends = TMap<EMETA_Gang, int32>{};
    (*this).Enemies = TMap<EMETA_Gang, int32>{};
    (*this).LostTerritory = TMap<FGameplayTag, int32>{};
    (*this).EffectsOnAIBossStrength = TArray<FMETA_EffectOnAIBossStrength>{};
    (*this).GangModifiers = TMap<FGameplayTag, int32>{};
    (*this).Strategy = EMETA_GangStrategy::Normal;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
    (*this).ConditionsForAiArmyTierChange = TArray<FMETA_ConditionForArmyTierChangingRuntime>{};
}
