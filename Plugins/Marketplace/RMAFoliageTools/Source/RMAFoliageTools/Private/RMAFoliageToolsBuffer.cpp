#include "RMAFoliageToolsBuffer.h"

FRMAFoliageToolsBuffer::FRMAFoliageToolsBuffer() {
    (*this).Transform = TArray<FTransform>{};
    (*this).Mesh = TArray<UStaticMesh*>{};
    (*this).Class = TArray<UClass*>{};
}
