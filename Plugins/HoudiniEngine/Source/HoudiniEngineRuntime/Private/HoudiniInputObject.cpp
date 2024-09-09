#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 473513502;
    (*this).Guid.B = 1092411497;
    (*this).Guid.C = -706857589;
    (*this).Guid.D = -883252708;
    (*this).bCanDeleteHoudiniNodes = true;
}


