#include "HoudiniInstancedOutput.h"

FHoudiniInstancedOutput::FHoudiniInstancedOutput() {
    (*this).OriginalObject = FSoftObjectPath();
    (*this).OriginalObjectIndex = -1;
    (*this).OriginalTransforms = TArray<FTransform>{};
    (*this).VariationObjects = TArray<TSoftObjectPtr<UObject>>{};
    (*this).VariationTransformOffsets = TArray<FTransform>{};
    (*this).TransformVariationIndices = TArray<int32>{};
    (*this).OriginalInstanceIndices = TArray<int32>{};
    (*this).bChanged = false;
    (*this).bStale = false;
}
