#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -1114578393;
    (*this).Guid.B = 1176290400;
    (*this).Guid.C = 1098753430;
    (*this).Guid.D = -1922607404;
    (*this).bCanDeleteHoudiniNodes = true;
}


