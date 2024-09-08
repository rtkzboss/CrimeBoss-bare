#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LocalTextMessageSentSignatureDelegate.h"
#include "IGS_TextChatStateChangedDelegate.h"
#include "IGS_TextMessageSentSignatureDelegate.h"
#include "IGS_TextChatManager.generated.h"

class UIGS_TextChatManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_TextChatManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bChatOpen;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_TextMessageSentSignature OnTextMessageSentEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LocalTextMessageSentSignature OnLocalTextMessageSentEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_TextChatStateChanged OnTextChatStateChanged;
    
    UIGS_TextChatManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendTextChatMessageTextOnly(const FText& inMessage);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendTextChatMessage(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList);
    
    UFUNCTION(BlueprintCallable)
    void SendLocalTextChatMessage(const FText& inMessage);
    
    UFUNCTION(BlueprintCallable)
    void OpenChat();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendTextChatMessageTextOnly(const FText& inMessage);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendTextChatMessage(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_TextChatManager* GetTextChatManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void CloseChat();
    
};

