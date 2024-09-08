#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_GlobalDialoguePlayer.generated.h"

class UAkComponent;
class UIGS_NetworkComponentDialogue;

UCLASS()
class PAYBACK_API AIGS_GlobalDialoguePlayer : public AActor, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NetworkComponentDialogue* NetworkDialogue;
    
    UPROPERTY(Instanced)
    UAkComponent* AkComponent;
    
    AIGS_GlobalDialoguePlayer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

