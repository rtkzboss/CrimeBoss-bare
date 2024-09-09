#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "IGS_CharacterStatusWidgetManager.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_CharacterData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_CharacterStatusWidgetManager : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
    UIGS_CharacterStatusWidgetManager(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY()
    AIGS_IntelligentGameCharacter* CharacterOwner;
    
    UPROPERTY(Instanced)
    UIGS_CharacterData* CharacterData;
    
};

