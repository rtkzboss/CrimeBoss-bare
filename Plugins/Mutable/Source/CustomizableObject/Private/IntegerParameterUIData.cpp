#include "IntegerParameterUIData.h"

FIntegerParameterUIData::FIntegerParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = {};
    (*this).ParamUIMetadata.ExtraAssets = {};
}
