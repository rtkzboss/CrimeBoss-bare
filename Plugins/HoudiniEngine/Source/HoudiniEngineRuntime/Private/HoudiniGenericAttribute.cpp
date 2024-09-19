#include "HoudiniGenericAttribute.h"

FHoudiniGenericAttribute::FHoudiniGenericAttribute() {
    (*this).AttributeName = TEXT("");
    (*this).AttributeType = EAttribStorageType::Invalid;
    (*this).AttributeOwner = EAttribOwner::Invalid;
    (*this).AttributeCount = -1;
    (*this).AttributeTupleSize = -1;
    (*this).DoubleValues = TArray<double>{};
    (*this).IntValues = TArray<int64>{};
    (*this).StringValues = TArray<FString>{};
}
