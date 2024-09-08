#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 13830522;
    (*this).Guid.B = 1195075504;
    (*this).Guid.C = 1061128378;
    (*this).Guid.D = -328268091;
    (*this).bCanDeleteHoudiniNodes = true;
}


