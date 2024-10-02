#include "IGS_GameUISettings.h"

UIGS_GameUISettings::UIGS_GameUISettings() {
    (*this).AllowedMenuInputActions = TArray<EIGS_InputAction>{EIGS_InputAction::IA_MenuLeft, EIGS_InputAction::IA_MenuRight, EIGS_InputAction::IA_MenuBack, EIGS_InputAction::IA_MenuAccept, EIGS_InputAction::IA_MenuMiscAction1, EIGS_InputAction::IA_MenuMiscAction2, EIGS_InputAction::IA_MenuCategoryLeft, EIGS_InputAction::IA_MenuCategoryRight, EIGS_InputAction::IA_MenuSubcategoryLeft, EIGS_InputAction::IA_MenuSubcategoryRight, EIGS_InputAction::IA_MenuPause, EIGS_InputAction::IA_Skip, EIGS_InputAction::IA_MenuUp, EIGS_InputAction::IA_MenuDown, EIGS_InputAction::IA_Bash, EIGS_InputAction::IA_Sprint, EIGS_InputAction::IA_PartyInvite, EIGS_InputAction::IA_EnterChat, EIGS_InputAction::IA_WheelMenu, EIGS_InputAction::IA_Use, EIGS_InputAction::IA_BotMenuFollow, EIGS_InputAction::IA_BotMenuStandBy, EIGS_InputAction::IA_DropCarryable, EIGS_InputAction::IA_Aim, EIGS_InputAction::IA_PushToTalk};
    (*this).LeftThumbstickMenuThreshold = 5.000000000e-01f;
    (*this).UITileQualityColors = TMap<EMETA_ItemQuality, FIGS_UITileQualityColors>{};
    (*this).ChatWheelDataTable = FSoftObjectPath(TEXT("/Game/00_Main/UI/HUD/DT_ChatWheelDefinitions.DT_ChatWheelDefinitions"), TEXT(""));
    (*this).DebriefRewardsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/Menu/DT_DebriefRewardData.DT_DebriefRewardData"), TEXT(""));
    (*this).ChatWheelActionLimit = 3;
    (*this).ChatWheelActionLimitTime = 5.000000000e+00f;
    (*this).ChatWheelCooldownTime = 5.000000000e+00f;
    (*this).IconVisibilityDuration = 5.000000000e+00f;
}

