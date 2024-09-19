#include "IntegerParameterUIData.h"

class UObject;

FIntegerParameterUIData::FIntegerParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = TMap<FString, FString>{};
    (*this).ParamUIMetadata.ExtraAssets = TMap<FString, TSoftObjectPtr<UObject>>{};
}
