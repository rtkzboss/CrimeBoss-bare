#include "MutableModelParameterProperties.h"

FMutableModelParameterProperties::FMutableModelParameterProperties() {
    (*this).Name = TEXT("");
    (*this).Type = EMutableParameterType::None;
    (*this).ImageDescriptionCount = 0;
    (*this).PossibleValues = {};
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = FSoftObjectPath();
    (*this).ParamUIMetadata.ExtraInformation = {};
    (*this).ParamUIMetadata.ExtraAssets = {};
}
