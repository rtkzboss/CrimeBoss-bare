#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "IGS_PlayerStatusWidgetManager.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_OutlineComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_PlayerStatusWidgetManager : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
    UIGS_PlayerStatusWidgetManager(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY()
    AIGS_GameCharacterFramework* CharacterOwner;

    UPROPERTY(Instanced)
    UIGS_OutlineComponent* OwnerOutlineComponent;

    UPROPERTY()
    AIGS_GameCharacterFramework* LocalPlayerCharacter;

};
