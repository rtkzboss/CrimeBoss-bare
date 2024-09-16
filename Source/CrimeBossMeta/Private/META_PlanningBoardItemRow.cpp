#include "META_PlanningBoardItemRow.h"

FMETA_PlanningBoardItemRow::FMETA_PlanningBoardItemRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).IsVisualOnly = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).AudioMessageTag, 0)) = NAME_None;
    (*this).Missions = {};
    (*this).StaticMesh = FSoftObjectPath();
    (*this).Connections = {};
    (*this).PositionX = 0.000000000e+00f;
    (*this).PositionY = 0.000000000e+00f;
    (*this).ZoomOffset = 0.000000000e+00f;
}
