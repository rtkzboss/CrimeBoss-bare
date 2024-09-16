#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FindSessionsCallbackProxy.h"
#include "BPUniqueNetId.h"
#include "EBPOnlineSessionState.h"
#include "EBlueprintResultSwitch.h"
#include "EOnlineComparisonOpRedux.h"
#include "ESessionSettingSearchResult.h"
#include "SessionPropertyKeyPair.h"
#include "SessionsSearchSetting.h"
#include "AdvancedSessionsLibrary.generated.h"

class APlayerController;
class APlayerState;
class UObject;

UCLASS(BlueprintType)
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedSessionsLibrary();

    UFUNCTION(BlueprintPure)
    static void UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String);

    UFUNCTION(BlueprintCallable)
    static void SetPlayerName(APlayerController* PlayerController, const FString& PlayerName);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool ServerTravel(UObject* WorldContextObject, const FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify);

    UFUNCTION(BlueprintPure)
    static FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);

    UFUNCTION(BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, const FString& Value);

    UFUNCTION(BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32 Value);

    UFUNCTION(BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value);

    UFUNCTION(BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, uint8 Value);

    UFUNCTION(BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool KickPlayer(UObject* WorldContextObject, APlayerController* PlayerToKick, FText KickReason);

    UFUNCTION(BlueprintPure)
    static bool IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId);

    UFUNCTION(BlueprintPure)
    static bool IsValidSession(const FBlueprintSessionResult& SessionResult);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void IsPlayerInSession(UObject* WorldContextObject, const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);

    UFUNCTION(BlueprintPure)
    static bool HasOnlineSubsystem(FName SubSystemName);

    UFUNCTION(BlueprintPure)
    static void GetUniqueNetIDFromPlayerState(APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);

    UFUNCTION(BlueprintPure)
    static void GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);

    UFUNCTION(BlueprintPure)
    static void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void GetSessionState(UObject* WorldContextObject, EBPOnlineSessionState& SessionState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void GetSessionSettings(UObject* WorldContextObject, int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinViaPresence, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result);

    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue);

    UFUNCTION(BlueprintCallable)
    static FName GetSessionPropertyKey(const FSessionPropertyKeyPair& SessionProperty);

    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue);

    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue);

    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue);

    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue);

    UFUNCTION(BlueprintPure)
    static void GetSessionID_AsString(const FBlueprintSessionResult& SessionResult, FString& SessionId);

    UFUNCTION(BlueprintPure)
    static void GetPlayerName(APlayerController* PlayerController, FString& PlayerName);

    UFUNCTION(BlueprintPure, meta=(WorldContext=WorldContextObject))
    static void GetNumberOfNetworkPlayers(UObject* WorldContextObject, int32& NumNetPlayers);

    UFUNCTION(BlueprintPure)
    static void GetNetPlayerIndex(APlayerController* PlayerController, int32& NetPlayerIndex);

    UFUNCTION(BlueprintCallable)
    static void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);

    UFUNCTION(BlueprintPure)
    static void GetCurrentUniqueBuildID(int32& UniqueBuildId);

    UFUNCTION(BlueprintPure, meta=(WorldContext=WorldContextObject))
    static void GetCurrentSessionID_AsString(UObject* WorldContextObject, FString& SessionId);

    UFUNCTION(BlueprintCallable)
    static void FindSessionPropertyIndexByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32& OutIndex);

    UFUNCTION(BlueprintCallable)
    static void FindSessionPropertyByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty);

    UFUNCTION(BlueprintPure)
    static bool EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool BanPlayer(UObject* WorldContextObject, APlayerController* PlayerToBan, FText BanReason);

    UFUNCTION(BlueprintCallable)
    static void AddOrModifyExtraSettings(UPARAM(Ref) TArray<FSessionPropertyKeyPair>& SettingsArray, UPARAM(Ref) TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray);

};
