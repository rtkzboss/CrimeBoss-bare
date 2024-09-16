#include "IGS_AICommandThrowThrowable.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandThrowThrowable::UIGS_AICommandThrowThrowable() {
    (*this).Throwable = FSoftObjectPath();
    (*this).bIsScripted = true;
    (*this).Type = EIGS_AICommandType::AICT_ThrowThrowable;
}

