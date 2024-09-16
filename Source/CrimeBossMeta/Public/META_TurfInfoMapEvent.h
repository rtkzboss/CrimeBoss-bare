#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "META_BaseMapEvent.h"
#include "META_TurfInfoMapEvent.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_TurfInfoMapEvent : public UMETA_BaseMapEvent {
    GENERATED_BODY()
public:
    UMETA_TurfInfoMapEvent();

    UFUNCTION(BlueprintCallable)
    void Init(FGameplayTag inTileTag, EMETA_Gang inNewGang, EMETA_Gang inPrevGang);

    UFUNCTION(BlueprintPure)
    FGameplayTag GetTileTag();

    UFUNCTION(BlueprintPure)
    EMETA_Gang GetPrevGang();

    UFUNCTION(BlueprintPure)
    EMETA_Gang GetNewGang();

};
