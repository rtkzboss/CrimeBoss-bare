#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnPlayerSwapPreventedEventSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PaybackPlayerSwapper.generated.h"

class AController;
class AIGS_PlayerSwapActor;
class APawn;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackPlayerSwapper : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIGS_PlayerSwapActor> PlayerSwapActorTemplate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ActivePlayerIndex;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPlayerSwapPreventedEventSignature OnPlayerSwapPreventedEvent;
    
    UPaybackPlayerSwapper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    int32 GetNextViableBotNumber(UObject* inWCO, int32 inCurrentHeisterNumber, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    AController* GetAliveBotByNumber(int32 inNumber, bool& outSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceSwapToPawn(AController* InPlayerController, APawn* inPawnToSwapTo);
    
};

