#pragma once
#include "CoreMinimal.h"
#include "META_DetectiveID.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIControllerGame.h"
#include "IGS_OnDownstateHealthChangedEventSignature.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIControllerDetective.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS()
class BF_AI_API AIGS_AIControllerDetective : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerDetective(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_DetectiveID> GetDetectiveID() const;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentDownstateHealth;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentRevivesLeft;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDownstateHealth;

    UPROPERTY(EditDefaultsOnly)
    FFloatInterval GetUpTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RevivesToRetreat;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HideDownstateHealthBar;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDownstateHealthChangedEventSignature OnDownstateHealthChangedEvent;

private:
    UPROPERTY()
    TSubclassOf<UMETA_DetectiveID> m_MyMetaID;

    UPROPERTY()
    AIGS_IntelligentGameCharacter* m_IntelligentOwner;

};
