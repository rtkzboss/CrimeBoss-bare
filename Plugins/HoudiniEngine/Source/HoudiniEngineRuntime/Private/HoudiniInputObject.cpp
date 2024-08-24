#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -540612689;
    (*this).Guid.B = 1198031737;
    (*this).Guid.C = 1950427316;
    (*this).Guid.D = -88843520;
    (*this).bCanDeleteHoudiniNodes = true;
}


