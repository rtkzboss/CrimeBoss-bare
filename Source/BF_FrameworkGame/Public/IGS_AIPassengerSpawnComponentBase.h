#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "IGS_OnCharacterDeathSignatureDelegate.h"
#include "IGS_OnCharactersSpawnedSignatureDelegate.h"
#include "IGS_OnPassengerGettingOutDynamicSignatureDelegate.h"
#include "IGS_PassangerDefinition.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIPassengerSpawnComponentBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_SettingsID;
class USkeletalMeshComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIPassengerSpawnComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIPassengerSpawnComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGroup(int32 inPassengersCount);
    
    UFUNCTION()
    void SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAIStateInCar(AIGS_GameCharacterFramework* inPassenger) const;
    
    UFUNCTION(BlueprintCallable)
    void MakeSpecificPassengerGetOut(int32 inPassengerIndex, int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakePassengersGetOut();
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomPassengerAmountInRange();
    
    UFUNCTION(BlueprintCallable)
    void AddPassengerManually(AIGS_GameCharacterFramework* inPassenger, EIGS_CarSeatVariant inSeatVariant);
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CarType CarType;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval PassangersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PassangerDefinition> PassengersDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlaySpawnVoiceovers;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterDeathSignature OnCharacterDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharactersSpawnedSignature OnCharactersSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPassengerGettingOutDynamicSignature OnPassengerGettingOut;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_GameCharacterFramework*> Passengers;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* SocketParentMesh;
    
    UPROPERTY()
    FIGS_NoSpawnPointDefinition CustomPassengerDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableDebugSpheres;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AmountOfPassengersToSpawn;
    
};

