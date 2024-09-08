#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "IGS_PlayerStateFramework.h"
#include "CommonHeisterData.h"
#include "CommonHeisterLoadout.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_StorePlatform.h"
#include "IGS_IsLevelLoadedDelegateDelegate.h"
#include "IGS_PlayerStateData.h"
#include "IGS_PlayerStatePlayerDataUpdateReceivedDelegateDelegate.h"
#include "IGS_PlayerStateGame.generated.h"

class AController;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PlayerStateGame : public AIGS_PlayerStateFramework, public IIGS_HeisterDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_IsLevelLoadedDelegate OnIsJustLevelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_IsLevelLoadedDelegate OnIsLevelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerStatePlayerDataUpdateReceivedDelegate OnPlayerStateDataUpdateReceived;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsJustLevelLoaded)
    bool IsJustLevelLoaded;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsLevelLoaded)
    bool IsLevelLoaded;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_bIsReady)
    bool bIsReady;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FIGS_PlayerStateData PlayerStateData;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 HeisterNumber;
    
private:
    UPROPERTY()
    AController* m_OwningController;
    
public:
    AIGS_PlayerStateGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ShouldUsePlayerStateLoadout();
    
    UFUNCTION(BlueprintCallable)
    void SetHordeModeTokens(int32 inTokens);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterLoadout(FCommonHeisterLoadout inLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedPlayerName(FText InName);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsReady();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsLevelLoaded();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsJustLevelLoaded();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void SendTextChatMessageTextOnly(const FText& inMessage);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SendTextChatMessage(const FText& InText, const FString& inUserId, const TArray<FString>& inBlockedUsersList);
    
protected:
    UFUNCTION()
    void OnRep_IsLevelLoaded() const;
    
    UFUNCTION()
    void OnRep_IsJustLevelLoaded() const;
    
    UFUNCTION()
    void OnRep_bIsReady() const;
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HandleChatWheelReaction(FGameplayTag inTag);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SendPlayerData(FIGS_PlayerStateData inPlayerData);
    
protected:
    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetUniquePlayerID();
    
public:
    UFUNCTION(BlueprintPure)
    void GetTeammateStatus(float& outCurrentHP, float& outMaxHP, float& outRelativeHP, float& outRelativeShield, float& outRelativeArmor) const;
    
    UFUNCTION(BlueprintPure)
    EIGS_StorePlatform GetStorePlatform() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHordeModeTokens() const;
    
    UFUNCTION(BlueprintPure)
    FCommonHeisterData GetHeisterData() const;
    

    // Fix for true pure virtual functions not being implemented
};

