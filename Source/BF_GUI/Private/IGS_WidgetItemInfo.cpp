#include "IGS_WidgetItemInfo.h"

UIGS_WidgetItemInfo::UIGS_WidgetItemInfo() : Super(FObjectInitializer::Get()) {
    (*this).ItemName = FText::FromString(TEXT("Kalashnikov AK-47"));
    (*this).ItemType = FText::FromString(TEXT("PRIMARY Weapon"));
    (*this).ItemSubType = FText::FromString(TEXT("Assault Rifle"));
    (*this).ItemLevel = 99;
    (*this).ItemDescription = FText::FromString(TEXT("Description"));
}

