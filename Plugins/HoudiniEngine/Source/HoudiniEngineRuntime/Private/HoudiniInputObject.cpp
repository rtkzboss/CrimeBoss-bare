#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 1132954012;
    (*this).Guid.B = 1101120498;
    (*this).Guid.C = -824436346;
    (*this).Guid.D = -1474391533;
    (*this).bCanDeleteHoudiniNodes = true;
}


