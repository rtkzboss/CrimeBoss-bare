#include "IGS_MenuItemCategoryWidget.h"

UIGS_MenuItemCategoryWidget::UIGS_MenuItemCategoryWidget() {
    (*this).TopFirstColumnItemMargin.Left = 3.000000000e+01f;
    (*this).BottomFirstColumnItemMargin.Right = 3.000000000e+01f;
    (*this).BottomItemMargin.Left = -3.000000000e+01f;
    (*this).BottomItemMargin.Right = 3.000000000e+01f;
}

void UIGS_MenuItemCategoryWidget::TrySetFocusToFirstWidget() {
}

void UIGS_MenuItemCategoryWidget::SetIsCategorySelected(bool inIsSelected) {
}

void UIGS_MenuItemCategoryWidget::SelectLastTopWidget() {
}

void UIGS_MenuItemCategoryWidget::OnItemSelected_Internal(UIGS_MenuTileWidget* Widget) {
}

void UIGS_MenuItemCategoryWidget::OnItemConfirmed_Internal(UIGS_MenuTileWidget* Widget) {
}




void UIGS_MenuItemCategoryWidget::InitCategory(FText Name, TArray<UIGS_MenuTileDataBase*> Items) {
}

void UIGS_MenuItemCategoryWidget::HandleOnNavigatedFromCategory(EUINavigation inNavigation) {
}

UIGS_MenuTileWidget* UIGS_MenuItemCategoryWidget::GetFirstWidget() const {
    return nullptr;
}

void UIGS_MenuItemCategoryWidget::DeselectOtherItems(UIGS_MenuTileWidget* inKeepSelected) {
}

void UIGS_MenuItemCategoryWidget::DeselectAllItems() {
}

