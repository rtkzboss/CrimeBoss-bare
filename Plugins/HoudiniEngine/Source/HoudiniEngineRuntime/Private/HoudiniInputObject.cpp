#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -910463413;
    (*this).Guid.B = 1116514686;
    (*this).Guid.C = -1629316682;
    (*this).Guid.D = -2016395100;
    (*this).bCanDeleteHoudiniNodes = true;
}


