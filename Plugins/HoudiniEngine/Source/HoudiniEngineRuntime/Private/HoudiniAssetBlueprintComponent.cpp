#include "HoudiniAssetBlueprintComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "EHoudiniAssetState.h"
#include "EHoudiniAssetStateResult.h"
#include "EHoudiniStaticMeshMethod.h"

UHoudiniAssetBlueprintComponent::UHoudiniAssetBlueprintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bOverrideGlobalProxyStaticMeshSettings = true;
    (*this).bEnableProxyStaticMeshOverride = false;
    (*this).bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = false;
    (*this).bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = false;
    (*this).ComponentGUID.A = 527602142;
    (*this).ComponentGUID.B = 1312347157;
    (*this).ComponentGUID.C = -292152396;
    (*this).ComponentGUID.D = 60243720;
    (*this).AssetState = EHoudiniAssetState::None;
    (*this).Mobility = EComponentMobility::Movable;
}

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const FString& Name, bool Value, int32 Index) {
}

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const FString& Name, float Value, int32 Index) {
}

bool UHoudiniAssetBlueprintComponent::HasParameter(const FString& Name) {
    return false;
}


