#include "IGS_ConnectionPointBase.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"

AIGS_ConnectionPointBase::AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Root = gen;
    (*this).RootComponent = gen;

#if WITH_EDITORONLY_DATA
	Sprite = CreateEditorOnlyDefaultSubobject<UBillboardComponent>("Sprite");
	if (Sprite)
	{
		Sprite->SpriteInfo.Category = "LevelBuilder";
		Sprite->SpriteInfo.DisplayName = NSLOCTEXT("Racketeer", "SpriteCategory_LevelBuilder", "Level Builder");
		Sprite->SetupAttachment(Root);
	}
	Arrow = CreateEditorOnlyDefaultSubobject<UArrowComponent>("Arrow");
	if (Arrow)
	{
		Arrow->SetupAttachment(Root);
	}
#endif
}

