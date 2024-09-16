#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "IGS_AISense_Danger.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISenseConfig_Danger.generated.h"

UCLASS(EditInlineNew, Config=Game)
class BF_AI_API UIGS_AISenseConfig_Danger : public UAISenseConfig {
    GENERATED_BODY()
public:
    UIGS_AISenseConfig_Danger();

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UIGS_AISense_Danger> Implementation;

};
