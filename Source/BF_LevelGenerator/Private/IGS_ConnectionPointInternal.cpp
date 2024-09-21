#include "IGS_ConnectionPointInternal.h"

AIGS_ConnectionPointInternal::AIGS_ConnectionPointInternal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
#if WITH_EDITORONLY_DATA

	static ConstructorHelpers::FObjectFinder<UTexture2D> SpriteTexture{ TEXT("/Engine/EditorResources/S_Actor") };
	if (Sprite) Sprite->SetSprite(SpriteTexture.Object);
	if (Arrow) Arrow->SetArrowColor(FColor(0, 0xff, 0xff));
#endif
}

