#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -1844585679;
    (*this).Guid.B = 1117550033;
    (*this).Guid.C = 79837585;
    (*this).Guid.D = -1326753564;
    (*this).bCanDeleteHoudiniNodes = true;
}


