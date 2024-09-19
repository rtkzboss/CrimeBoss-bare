#include "ParameterUIData.h"

class UObject;

FParameterUIData::FParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = TMap<FString, FString>{};
    (*this).ParamUIMetadata.ExtraAssets = TMap<FString, TSoftObjectPtr<UObject>>{};
    (*this).Type = EMutableParameterType::None;
    (*this).ArrayIntegerParameterOption = TArray<FIntegerParameterUIData>{};
    (*this).IntegerParameterGroupType = ECustomizableObjectGroupType::COGT_ONE_OR_NONE;
    (*this).bDontCompressRuntimeTextures = false;
    (*this).ForcedParameterValues = TMap<FString, FString>{};
}
