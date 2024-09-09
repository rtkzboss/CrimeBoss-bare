#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -1693302160;
    (*this).Guid.B = 1282127819;
    (*this).Guid.C = -715516023;
    (*this).Guid.D = -170783454;
    (*this).bCanDeleteHoudiniNodes = true;
}


