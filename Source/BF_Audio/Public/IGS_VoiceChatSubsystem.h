#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_VoiceChatSubsystem.generated.h"

class APlayerState;
class UObject;

UCLASS(BlueprintType)
class BF_AUDIO_API UIGS_VoiceChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_VoiceChatSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static void SetOutput(UObject* WCO, int32 LocalPlayerIndex, const FString& OutputName);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static void SetInput(UObject* WCO, int32 LocalPlayerIndex, const FString& InputName);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static void MuteRemotePlayer(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState, bool Mute);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static void MuteLocalPlayer(UObject* WCO, int32 LocalPlayerIndex, bool Mute);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsVoiceChatSupported(UObject* WCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsVoiceChatEnabled(UObject* WCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsRemotePlayerTalking(UObject* WCO, APlayerState* RemotePlayerState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsRemotePlayerMuted(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsLocalPlayerTalking(UObject* WCO, int32 LocalPlayerIndex);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool IsLocalPlayerMuted(UObject* WCO, int32 LocalPlayerIndex);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static TArray<FString> GetAvailableOutputs(UObject* WCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static TArray<FString> GetAvailableInputs(UObject* WCO);

};
