#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 2039276402;
    (*this).Guid.B = 1078216237;
    (*this).Guid.C = -1515491938;
    (*this).Guid.D = -1026592865;
    (*this).bCanDeleteHoudiniNodes = true;
}


