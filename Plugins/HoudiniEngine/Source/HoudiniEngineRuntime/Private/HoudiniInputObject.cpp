#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -895959875;
    (*this).Guid.B = 1174050785;
    (*this).Guid.C = 690695088;
    (*this).Guid.D = 662249827;
    (*this).bCanDeleteHoudiniNodes = true;
}


