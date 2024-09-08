#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 1065733076;
    (*this).Guid.B = 1279777388;
    (*this).Guid.C = 1491739583;
    (*this).Guid.D = -1640759426;
    (*this).bCanDeleteHoudiniNodes = true;
}


