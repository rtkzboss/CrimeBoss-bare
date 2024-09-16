#include "META_BaseObject.h"

UMETA_BaseObject::UMETA_BaseObject() {
    (*this).Icon = FSoftObjectPath();
    (*this).RelativeItemPrice = 5.000000000e-01f;
}

void UMETA_BaseObject::SetTagID(FGameplayTag inTag) {
}

void UMETA_BaseObject::SetRelativeItemPrice(const float inRelativePrice) {
}

void UMETA_BaseObject::SetItemPrice(const int32 inItemCost) {
}

void UMETA_BaseObject::SetIcon(TSoftObjectPtr<UTexture2D> inIcon) {
}

void UMETA_BaseObject::SetEntitlementTagID(FGameplayTag inTag) {
}

FGameplayTag UMETA_BaseObject::GetTagID() const {
    return FGameplayTag{};
}

float UMETA_BaseObject::GetRelativeItemPrice() const {
    return 0.000000000e+00f;
}

EMETA_ItemQuality UMETA_BaseObject::GetItemQuality() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_BaseObject::GetItemPrice() const {
    return 0;
}

FText UMETA_BaseObject::GetItemName() const {
    return FText::GetEmpty();
}

FText UMETA_BaseObject::GetItemDescription() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_BaseObject::GetIcon() {
    return {};
}

FGameplayTag UMETA_BaseObject::GetEntitlementTagID() const {
    return FGameplayTag{};
}

