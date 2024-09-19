#include "ProfileParameterDat.h"

FProfileParameterDat::FProfileParameterDat() {
    (*this).ProfileName = TEXT("");
    (*this).BoolParameters = TArray<FCustomizableObjectBoolParameterValue>{};
    (*this).IntParameters = TArray<FCustomizableObjectIntParameterValue>{};
    (*this).FloatParameters = TArray<FCustomizableObjectFloatParameterValue>{};
    (*this).TextureParameters = TArray<FCustomizableObjectTextureParameterValue>{};
    (*this).VectorParameters = TArray<FCustomizableObjectVectorParameterValue>{};
    (*this).ProjectorParameters = TArray<FCustomizableObjectProjectorParameterValue>{};
}
