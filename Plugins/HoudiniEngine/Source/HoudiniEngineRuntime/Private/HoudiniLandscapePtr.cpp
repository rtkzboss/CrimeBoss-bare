#include "HoudiniLandscapePtr.h"

UHoudiniLandscapePtr::UHoudiniLandscapePtr() {
    (*this).LandscapeSoftPtr = FSoftObjectPath();
}

