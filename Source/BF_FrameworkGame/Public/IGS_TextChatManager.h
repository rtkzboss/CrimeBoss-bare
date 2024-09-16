#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LocalTextMessageSentSignature.h"
#include "IGS_TextChatStateChanged.h"
#include "IGS_TextMessageSentSignature.h"
#include "IGS_TextChatManager.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_TextChatManager : public UActorComponent {
    GENERATED_BODY()
public:
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

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bChatOpen;

    UPROPERTY(BlueprintAssignable)
    FIGS_TextMessageSentSignature OnTextMessageSentEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_LocalTextMessageSentSignature OnLocalTextMessageSentEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_TextChatStateChanged OnTextChatStateChanged;

};
