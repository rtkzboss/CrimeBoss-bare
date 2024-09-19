#include "META_PlanningBoardItemRow.h"

FMETA_PlanningBoardItemRow::FMETA_PlanningBoardItemRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).IsVisualOnly = false;
    (*this).AudioMessageTag = FGameplayTag();
    (*this).Missions = TArray<FMETA_PlanningBoardMission>{};
    (*this).StaticMesh = FSoftObjectPath();
    (*this).Connections = TArray<FMETA_PlanningBoardItemConnectionData>{};
    (*this).PositionX = 0.000000000e+00f;
    (*this).PositionY = 0.000000000e+00f;
    (*this).ZoomOffset = 0.000000000e+00f;
}
