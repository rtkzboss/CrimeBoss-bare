#include "IGS_ConnectionPointExternal.h"

AIGS_ConnectionPointExternal::AIGS_ConnectionPointExternal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
#if WITH_EDITORONLY_DATA
	if (Arrow) Arrow->ArrowColor = FColor(0xff, 0, 0xff);
#endif
}

