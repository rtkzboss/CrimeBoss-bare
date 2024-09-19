#include "MutableParamUIMetadata.h"

FMutableParamUIMetadata::FMutableParamUIMetadata() {
    (*this).ObjectFriendlyName = TEXT("");
    (*this).UISectionName = TEXT("");
    (*this).UIOrder = 0;
    (*this).UIThumbnail = FSoftObjectPath();
    (*this).ExtraInformation = TMap<FString, FString>{};
    (*this).ExtraAssets = TMap<FString, TSoftObjectPtr<UObject>>{};
}
