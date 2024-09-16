#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_DebriefType.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_JobResult.h"
#include "EMETA_JobType.h"
#include "EMETA_LobbyVisibilityType.h"
#include "META_MissionID.h"
#include "META_MissionDatabase.h"
#include "META_MissionOnTileInfo.h"
#include "Templates/SubclassOf.h"
#include "META_BaseMission.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType)
class COMMON_DATA_API UMETA_BaseMission : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaMissionExpired, UMETA_BaseMission*, Mission);

    UMETA_BaseMission();

    UFUNCTION(BlueprintCallable)
    void SetUserDifficulty(EIGS_UserDifficulty inNewDifficulty);

    UFUNCTION(BlueprintCallable)
    void SetTilePlacementIndex(int32 inIndex);

    UFUNCTION(BlueprintCallable)
    void SetOwningTile(FGameplayTag inTileTag);

    UFUNCTION(BlueprintCallable)
    void SetMissionResult(EMETA_JobResult inNewMissionResult);

    UFUNCTION(BlueprintCallable)
    void SetLobbyVisibilityType(EMETA_LobbyVisibilityType inNewVisibilityType);

    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool inSelected);

    UFUNCTION(BlueprintCallable)
    void SetExpireDuration(float inDurationInSeconds);

    UFUNCTION(BlueprintCallable)
    void SetAmbushResult(EMETA_JobResult inNewAmbushResult);

    UFUNCTION(BlueprintCallable)
    void RemoveParameter(const FGameplayTag inParameterTag);

    UFUNCTION(BlueprintPure)
    bool IsTurfWar();

    UFUNCTION(BlueprintPure)
    EIGS_UserDifficulty GetUserDifficulty() const;

    UFUNCTION(BlueprintPure)
    EMETA_JobType GetType() const;

    UFUNCTION(BlueprintPure)
    int32 GetTilePlacementIndex();

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetRestrictedTiles() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPicture();

    UFUNCTION(BlueprintPure)
    void GetParameters(TMap<FGameplayTag, int32>& Parameters);

    UFUNCTION(BlueprintPure)
    void GetParameter(const FGameplayTag inParameterTag, int32& inParameterValue);

    UFUNCTION(BlueprintPure)
    FGameplayTag GetOwningTile();

    UFUNCTION(BlueprintPure)
    EMETA_JobResult GetMissionResult();

    UFUNCTION(BlueprintPure)
    FText GetMissionName();

    UFUNCTION(BlueprintPure)
    FText GetMissionDescription();

    UFUNCTION(BlueprintPure)
    int32 GetMaxCrewSize();

    UFUNCTION(BlueprintCallable)
    void GetMapSettings(EIGS_HubBackdropTypes& outHubBackdropType);

    UFUNCTION(BlueprintPure)
    EMETA_LobbyVisibilityType GetLobbyVisibilityType() const;

    UFUNCTION(BlueprintPure)
    bool GetIsSelected() const;

    UFUNCTION(BlueprintPure)
    int32 GetIntelLevelValue();

    UFUNCTION(BlueprintPure)
    TArray<EMETA_IntelUnlockLevel> GetIntelLevels();

    UFUNCTION(BlueprintPure)
    float GetInitTime() const;

    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetId() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon();

    UFUNCTION(BlueprintCallable)
    FMETA_MissionDatabase GetFullInfo();

    UFUNCTION(BlueprintPure)
    float GetExpireTime() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEntitlementTag() const;

    UFUNCTION(BlueprintPure)
    EMETA_DebriefType GetDebriefType();

    UFUNCTION(BlueprintPure)
    int32 GetDaysOnMap();

    UFUNCTION(BlueprintPure)
    bool GetCanExpire() const;

    UFUNCTION(BlueprintPure)
    EMETA_JobResult GetAmbushResult();

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllowedTiles() const;

    UFUNCTION(BlueprintCallable)
    void ExpireMission();

    UFUNCTION(BlueprintPure)
    bool DoesSupportIntel() const;

    UFUNCTION(BlueprintCallable)
    void AddParameters(const TMap<FGameplayTag, int32>& inParameters);

    UFUNCTION(BlueprintCallable)
    void AddParameter(const FGameplayTag inParameterTag, int32 inParameterValue);

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaMissionExpired OnMetaMissionExpired;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMETA_MissionOnTileInfo MissionOnTileInfo;

protected:
    UPROPERTY()
    EMETA_JobResult m_Result;

    UPROPERTY()
    EMETA_JobResult m_AmbushResult;

    UPROPERTY()
    EMETA_JobResult m_TotalResult;

    UPROPERTY()
    FGameplayTag EntitlementTag;

    UPROPERTY()
    bool bCanExpire;

    UPROPERTY()
    float InitTime;

    UPROPERTY()
    float EndTime;

    UPROPERTY()
    bool bIsSelected;

    UPROPERTY()
    EMETA_LobbyVisibilityType m_LobbyVisibilityType;

    UPROPERTY()
    EIGS_UserDifficulty m_UserDifficulty;

};
