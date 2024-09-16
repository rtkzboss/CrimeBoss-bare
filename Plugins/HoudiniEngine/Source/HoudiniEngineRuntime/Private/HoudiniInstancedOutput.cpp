#include "HoudiniInstancedOutput.h"

FHoudiniInstancedOutput::FHoudiniInstancedOutput() {
    (*this).OriginalObject = FSoftObjectPath();
    (*this).OriginalObjectIndex = -1;
    (*this).OriginalTransforms = {};
    (*this).VariationObjects = {};
    (*this).VariationTransformOffsets = {};
    (*this).TransformVariationIndices = {};
    (*this).OriginalInstanceIndices = {};
    (*this).bChanged = false;
    (*this).bStale = false;
}
