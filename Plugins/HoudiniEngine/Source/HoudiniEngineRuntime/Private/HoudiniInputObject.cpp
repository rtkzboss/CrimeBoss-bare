#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -389665274;
    (*this).Guid.B = 1246272538;
    (*this).Guid.C = -1080189040;
    (*this).Guid.D = -1577013991;
    (*this).bCanDeleteHoudiniNodes = true;
}


