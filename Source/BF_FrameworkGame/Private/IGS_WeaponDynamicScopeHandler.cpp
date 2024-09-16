#include "IGS_WeaponDynamicScopeHandler.h"
#include "Materials/MaterialInstanceConstant.h"

UIGS_WeaponDynamicScopeHandler::UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope.MI_PP_Scope"));
    (*this).ScopePostprocessMaterial = gen.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen2(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope_Vertical.MI_PP_Scope_Vertical"));
    (*this).ScopePostprocessVerticalMaterial = gen2.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen3(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope.MI_PP_SniperScope"));
    (*this).SniperScopePostprocessMaterial = gen3.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen4(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope_Vertical.MI_PP_SniperScope_Vertical"));
    (*this).SniperScopePostprocessVerticalMaterial = gen4.Object;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_WeaponDynamicScopeHandler::OnWeaponDestroyed(AActor* inDestroyed) {
}

void UIGS_WeaponDynamicScopeHandler::OnAimChanged_Implementation(bool inAim) {
}

void UIGS_WeaponDynamicScopeHandler::DisableAimPostprocess() const {
}

