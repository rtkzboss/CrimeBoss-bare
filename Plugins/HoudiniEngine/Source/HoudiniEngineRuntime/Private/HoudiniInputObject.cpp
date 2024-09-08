#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -21320119;
    (*this).Guid.B = 1312476667;
    (*this).Guid.C = 523187370;
    (*this).Guid.D = 901254197;
    (*this).bCanDeleteHoudiniNodes = true;
}


