#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_ItemDialoguePlayer.generated.h"

class UAkComponent;
class UAkSwitchValue;
class UIGS_NetworkComponentDialogue;

UCLASS(Abstract)
class PAYBACK_API AIGS_ItemDialoguePlayer : public AActor, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_DialogueGroupCharacterHolder DialogueCharacterHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFPP;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_NetworkComponentDialogue* NetworkDialogue;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FPPAkSwitch;
    
    UPROPERTY(Instanced)
    UAkComponent* AkComponent;
    
public:
    AIGS_ItemDialoguePlayer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

