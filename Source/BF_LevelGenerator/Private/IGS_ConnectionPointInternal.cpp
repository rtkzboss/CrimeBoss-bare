#include "IGS_ConnectionPointInternal.h"

AIGS_ConnectionPointInternal::AIGS_ConnectionPointInternal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
#if WITH_EDITORONLY_DATA
	if (Arrow) Arrow->SetArrowColor(FColor(0, 0xff, 0xff));
#endif
}

