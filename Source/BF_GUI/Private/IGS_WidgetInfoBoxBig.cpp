#include "IGS_WidgetInfoBoxBig.h"

UIGS_WidgetInfoBoxBig::UIGS_WidgetInfoBoxBig() : Super(FObjectInitializer::Get()) {
    (*this).Name = FText::FromString(TEXT("UNKNOWN"));
    (*this).Info = FText::FromString(TEXT("UNKNOWN"));
    (*this).Type = FText::FromString(TEXT("UNKNOWN"));
    (*this).LeftSubType = FText::FromString(TEXT("UNKNOWN"));
    (*this).RightSubType = FText::FromString(TEXT("UNKNOWN"));
    (*this).HeaderColor = FLinearColor(5.649999976e-01f, 8.880000114e-01f, 5.329999924e-01f, 1.000000000e+00f);
}

void UIGS_WidgetInfoBoxBig::Setup(FText InName, FText inInfo, FText inType, FText inLeftSubType, FText inRightSubType) {
}

void UIGS_WidgetInfoBoxBig::SetType(FText inType) {
}

void UIGS_WidgetInfoBoxBig::SetRightSubType(FText inRightSubType) {
}

void UIGS_WidgetInfoBoxBig::SetName(FText InName) {
}

void UIGS_WidgetInfoBoxBig::SetLeftSubType(FText inLeftSubType) {
}

void UIGS_WidgetInfoBoxBig::SetInfo(FText inInfo) {
}

void UIGS_WidgetInfoBoxBig::SetIconImage(TSoftObjectPtr<UTexture> inImageTexture) {
}

void UIGS_WidgetInfoBoxBig::SetBigItemImage(TSoftObjectPtr<UTexture> inImageTexture) {
}

void UIGS_WidgetInfoBoxBig::Refresh() const {
}

