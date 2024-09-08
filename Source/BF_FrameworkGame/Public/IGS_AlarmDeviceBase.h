#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_AnimTypeVariantHolder.h"
#include "IGS_SmartObjectInterface.h"
#include "IGS_AlarmDeviceBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDirector;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AlarmDeviceBase : public AActor, public IIGS_SmartObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bDisarmed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector AIMovetoPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AnimationRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AnimTypeVariantHolder AnimationToPlay;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SquadID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnlockAfterTime;
    
public:
    AIGS_AlarmDeviceBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisarmed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Disarm(AIGS_GameCharacterFramework* inUsingCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

