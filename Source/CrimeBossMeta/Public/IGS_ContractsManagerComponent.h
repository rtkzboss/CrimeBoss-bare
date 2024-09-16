#pragma once
#include "CoreMinimal.h"
#include "IGS_Contract.h"
#include "IGS_ContractID.h"
#include "META_MissionID.h"
#include "IGS_ContractManagerBaseComponent.h"
#include "IGS_OnActiveContractRemoved.h"
#include "IGS_OnAvailableContractAdded.h"
#include "IGS_OnContractActivated.h"
#include "Templates/SubclassOf.h"
#include "IGS_ContractsManagerComponent.generated.h"

class UMETA_BaseFPSMission;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ContractsManagerComponent : public UIGS_ContractManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_ContractsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WipeSave();

    UFUNCTION(BlueprintCallable)
    void RemoveActiveContractMission(TSubclassOf<UMETA_MissionID> inMissionID);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseContract(TSubclassOf<UIGS_ContractID> inID);

    UFUNCTION(BlueprintCallable)
    bool IsContractActivated(TSubclassOf<UIGS_ContractID> inID);

    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<UMETA_MissionID> GetRandomMissionIDFromContract(TSubclassOf<UIGS_ContractID> inContractID);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FIGS_Contract GetContractByID(TSubclassOf<UIGS_ContractID> inContractID);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsumeActiveContract();

    UFUNCTION(BlueprintCallable)
    void AddAvailableContract(TSubclassOf<UIGS_ContractID> inID);

    UFUNCTION(BlueprintCallable)
    void AddActiveContract(TSubclassOf<UIGS_ContractID> inID);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UIGS_ContractID>, UMETA_BaseFPSMission*> ActiveContracts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_ContractID>> AvailableContracts;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnContractActivated OnActiveContractAdded;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnActiveContractRemoved OnActiveContractRemoved;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnAvailableContractAdded OnAvailableContractAdded;

};
