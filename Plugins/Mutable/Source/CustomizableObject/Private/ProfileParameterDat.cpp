#include "ProfileParameterDat.h"

FProfileParameterDat::FProfileParameterDat() {
    (*this).ProfileName = TEXT("");
    (*this).BoolParameters = {};
    (*this).IntParameters = {};
    (*this).FloatParameters = {};
    (*this).TextureParameters = {};
    (*this).VectorParameters = {};
    (*this).ProjectorParameters = {};
}
