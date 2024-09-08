#pragma once
#include "CoreMinimal.h"
#include "UGCBaseGameInstance.h"
#include "FindSessionsCallbackProxy.h"
#include "BPUniqueNetId.h"
#include "EBPLoginStatus.h"
#include "AdvancedFriendsGameInstance.generated.h"

UCLASS(NonTransient)
class ADVANCEDSESSIONS_API UAdvancedFriendsGameInstance : public UIGS_UGCBaseGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCallFriendInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCallIdentityInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCallVoiceInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTalkingStatusDelegate;
    
    UAdvancedFriendsGameInstance();

    UFUNCTION(BlueprintPure)
    bool UserPrivilegeCheckInProgress() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, const FString& AppId, const FBlueprintSessionResult& SessionToJoin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
};

