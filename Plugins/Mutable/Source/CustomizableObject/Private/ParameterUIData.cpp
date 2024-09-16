#include "ParameterUIData.h"

FParameterUIData::FParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = {};
    (*this).ParamUIMetadata.ExtraAssets = {};
    (*this).Type = EMutableParameterType::None;
    (*this).ArrayIntegerParameterOption = {};
    (*this).IntegerParameterGroupType = ECustomizableObjectGroupType::COGT_ONE_OR_NONE;
    (*this).bDontCompressRuntimeTextures = false;
    (*this).ForcedParameterValues = {};
}
