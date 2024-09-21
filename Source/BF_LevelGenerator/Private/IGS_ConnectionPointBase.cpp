#include "IGS_ConnectionPointBase.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"

AIGS_ConnectionPointBase::AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Root = gen;
    (*this).RootComponent = gen;

#if WITH_EDITORONLY_DATA
	static struct {
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> SpriteTexture{ TEXT("/Racketeer/00_Main/UI/EditorIcons/T_GUI_Icon_ConnectionPoint_Gray") };
		FName NAME_LevelBuilder = "LevelBuilder";
		FText TEXT_LevelBuilder = NSLOCTEXT("Racketeer", "SpriteCategory_LevelBuilder", "Level Builder");
	} ConstructorStatics;

	Sprite = CreateEditorOnlyDefaultSubobject<UBillboardComponent>("Sprite");
	if (Sprite)
	{
		Sprite->SetSprite(ConstructorStatics.SpriteTexture.Get());
		Sprite->SpriteInfo.Category = ConstructorStatics.NAME_LevelBuilder;
		Sprite->SpriteInfo.DisplayName = ConstructorStatics.TEXT_LevelBuilder;

		Sprite->SetRelativeScale3D(FVector(0.25f));
		Sprite->SetUsingAbsoluteScale(true);
		Sprite->SetupAttachment(Root);
		Sprite->bHiddenInGame = true;
		Sprite->bIsScreenSizeScaled = true;
	}
	Arrow = CreateEditorOnlyDefaultSubobject<UArrowComponent>("Arrow");
	if (Arrow)
	{
		Arrow->bTreatAsASprite = true;
		Arrow->SpriteInfo.Category = ConstructorStatics.NAME_LevelBuilder;
		Arrow->SpriteInfo.DisplayName = ConstructorStatics.TEXT_LevelBuilder;
		Arrow->SetupAttachment(Root);
		Arrow->bIsScreenSizeScaled = true;
	}
#endif
}

#if WITH_EDITOR
void AIGS_ConnectionPointBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == USceneComponent::GetRelativeRotationPropertyName())
	{
		ConstrainRotation();
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
void AIGS_ConnectionPointBase::PostEditMove(bool bFinished)
{
	ConstrainRotation();
	Super::PostEditMove(bFinished);
}
void AIGS_ConnectionPointBase::ConstrainRotation()
{
	// TODO: maybe not the best way of doing this...
	FRotator Rot = Root->GetRelativeRotation();
	if (FMath::IsNearlyZero(Rot.Pitch) && FMath::IsNearlyZero(Rot.Roll)) return;
	Root->SetRelativeRotation(FRotator(0, Rot.Yaw, 0), false, false, ETeleportType::ResetPhysics);
}
#endif
