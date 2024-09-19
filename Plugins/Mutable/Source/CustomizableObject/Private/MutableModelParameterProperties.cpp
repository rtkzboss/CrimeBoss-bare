#include "MutableModelParameterProperties.h"

class UObject;

FMutableModelParameterProperties::FMutableModelParameterProperties() {
    (*this).Name = TEXT("");
    (*this).Type = EMutableParameterType::None;
    (*this).ImageDescriptionCount = 0;
    (*this).PossibleValues = TArray<FMutableModelParameterValue>{};
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = TMap<FString, FString>{};
    (*this).ParamUIMetadata.ExtraAssets = TMap<FString, TSoftObjectPtr<UObject>>{};
}
