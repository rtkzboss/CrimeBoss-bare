#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_OnSlotReached.h"
#include "IGS_ThrowBagSlot.generated.h"

class AIGS_GameCharacterFramework;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class UIGS_ThrowBagSlot : public UObject {
    GENERATED_BODY()
public:
    UIGS_ThrowBagSlot();

    UFUNCTION(BlueprintCallable)
    void ReportSlotReached(AIGS_GameCharacterFramework* inCharacter);

    UPROPERTY(Instanced)
    USkeletalMeshComponent* SkeletalMeshComponent;

    UPROPERTY(Instanced)
    USceneComponent* SceneComponent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnSlotReached OnSlotReached;

};
