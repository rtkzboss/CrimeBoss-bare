#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_BaseCondition.h"
#include "META_BaseHeisterCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseHeisterCondition : public UMETA_BaseCondition {
    GENERATED_BODY()
public:
    UMETA_BaseHeisterCondition();

    UFUNCTION(BlueprintCallable)
    void SetConsideredHeister(FMETA_CharacterID inHeisterID);

    UFUNCTION(BlueprintPure)
    FMETA_CharacterID GetConsideredHeister();

private:
    UPROPERTY(Transient)
    FMETA_CharacterID ConsideredHeisterID;

};
