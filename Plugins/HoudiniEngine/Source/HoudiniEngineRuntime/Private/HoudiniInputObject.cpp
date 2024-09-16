#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = FSoftObjectPath();
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).bCanDeleteHoudiniNodes = true;
}

