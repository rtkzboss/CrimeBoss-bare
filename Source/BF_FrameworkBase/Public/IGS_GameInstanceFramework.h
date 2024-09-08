#pragma once
#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "ECommonMissionResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_PlatformServerConnectionStatus.h"
#include "EIGS_SessionJoinFailureReason.h"
#include "IGS_OnConnectionStatusChangedDelegate.h"
#include "PaybackFPS2MetaDataRequestedDynamicSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameInstanceFramework.generated.h"

class UIGS_BaseMissionObject;
class UObject;

UCLASS(NonTransient)
class BF_FRAMEWORKBASE_API UIGS_GameInstanceFramework : public UAdvancedFriendsGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPaybackFPS2MetaDataRequestedDynamicSignature OnFPS2MetaDataRequested;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnConnectionStatusChanged OnConnectionStatusChanged;
    
    UPROPERTY(BlueprintReadWrite)
    bool bComesFromMission;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer TurfWarMissionTags;
    
public:
    UIGS_GameInstanceFramework();

protected:
    UFUNCTION(BlueprintNativeEvent, meta=(WorldContext=inWCO))
    void StartMissionInternal(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartMission(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void ServerTravel(const UObject* inWCO, const FString& inLevelName, bool inAbsolute);
    
protected:
    UFUNCTION(BlueprintNativeEvent, meta=(WorldContext=inWCO))
    void QuitToMeta(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintNativeEvent, meta=(WorldContext=inWCO))
    void QuitToLobby(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWindowStateChanged(bool inState);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnWindowCloseRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnConnectionStatusChangedEvent(EIGS_PlatformServerConnectionStatus InStatus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationWillEnterBackground();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationHasReactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationHasEnteredForeground();
    
    UFUNCTION(BlueprintImplementableEvent)
    void JoinSessionFailed(EIGS_SessionJoinFailureReason Reason);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsTextChatAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionTagTurfWar(FGameplayTag inMissionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsMissionEndIgnored(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void IgnoreMissionEnd(const UObject* inWCO, bool inIgnoreMissionEnd);
    
    UFUNCTION(BlueprintPure)
    EIGS_PlatformServerConnectionStatus GetPlatformServerConnectionStatus() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, meta=(WorldContext=inWCO))
    void FinishMissionInternal(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void FinishMission(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CreateLoadingFaderInternal();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateLoadingFader(const UObject* inWCO);
    
};

