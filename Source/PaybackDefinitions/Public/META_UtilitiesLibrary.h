#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_WeaponSubtype.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_Gang.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_TradeVendor.h"
#include "META_CharacterID.h"
#include "META_ConditionForArmyTierChanging.h"
#include "META_FloatInterval.h"
#include "META_Int64Interval.h"
#include "META_Interval.h"
#include "META_UtilitiesLibrary.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_UtilitiesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_UtilitiesLibrary();

    UFUNCTION(BlueprintPure)
    static int32 RoundNextDigitsOfNumberToZero(int32 inNumber, int32 inAmountOfFirstDigits);

    UFUNCTION(BlueprintPure)
    static int32 RandomIntegerInRange(const FMETA_Interval InRange);

    UFUNCTION(BlueprintPure)
    static int64 RandomInteger64InRange(const FMETA_Int64Interval InRange);

    UFUNCTION(BlueprintPure)
    static float RandomFloatInRange(const FMETA_FloatInterval InRange);

    UFUNCTION(BlueprintCallable)
    static bool IsWeaponSlot(const EIGS_InventorySlot inSlot);

    UFUNCTION(BlueprintPure)
    static bool IsUniqueCharacter(EIGS_CharacterID ID);

    UFUNCTION(BlueprintCallable)
    static bool IsQualityInBitmask(EMETA_ItemQuality inItemQuantity, int32 inBitmask);

    UFUNCTION(BlueprintPure)
    static bool IsIntegerWithinRange(const int32 InValue, const FMETA_Interval InRange);

    UFUNCTION(BlueprintPure)
    static bool IsInteger64WithinRange(const int64 InValue, const FMETA_Int64Interval InRange);

    UFUNCTION(BlueprintPure)
    static bool IsGenericCharacter(EIGS_CharacterID ID);

    UFUNCTION(BlueprintPure)
    static bool IsFloatWithinRange(const float InValue, const FMETA_FloatInterval InRange);

    UFUNCTION(BlueprintPure)
    static bool IsBoss(EIGS_CharacterID ID);

    UFUNCTION(BlueprintPure)
    static FGameplayTag GetRandomTag(const FGameplayTagContainer& inContainer);

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetRandomizedLootItemAvailableOnMeta();

    UFUNCTION(BlueprintCallable)
    static TArray<EMETA_ItemQuality> GetQualitiesFromBitmask(int32 inBitmask);

    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfDigits(const int32 inNumber);

    UFUNCTION(BlueprintCallable)
    static bool GetLootLevel(FGameplayTag inLootTag, int32& Level, FGameplayTag& outMainLootTag);

    UFUNCTION(BlueprintPure)
    static FString GetDebugTagContainerString(const FGameplayTagContainer& inContainer);

    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllLootItemsAvailableOnMeta();

    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllChildTagsIncludingNested(FGameplayTag ParentTag);

    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllChildTag(FGameplayTag ParentTag);

    UFUNCTION(BlueprintCallable)
    static TArray<EMETA_IntelUnlockLevel> GetAllAvailableIntelUnlockLevelByUpperLevel(EMETA_IntelUnlockLevel inUpperLevel);

    UFUNCTION(BlueprintPure)
    static EMETA_Gang ConvertVendorToGang(EMETA_TradeVendor inVendor);

    UFUNCTION(BlueprintPure)
    static EMETA_TradeVendor ConvertGangToVendor(EMETA_Gang inGang);

    UFUNCTION(BlueprintCallable)
    static EIGS_WeaponSubtype ConvertClassTagToWeaponSubtype(FGameplayTag inClassTag);

    UFUNCTION(BlueprintCallable)
    static EIGS_InventorySlot ConvertClassTagToEnumSlot(FGameplayTag inClassTag);

    UFUNCTION(BlueprintCallable)
    static bool CompareInt(int32 InValue, int32 inCompareWith, EMETA_ConditionOperator inOperator);

    UFUNCTION(BlueprintCallable)
    static bool CompareFloat(float InValue, float inCompareWith, EMETA_ConditionOperator inOperator);

    UFUNCTION(BlueprintPure)
    static int32 ClampIntegerWithinRange(const int32 InValue, const FMETA_Interval InRange);

    UFUNCTION(BlueprintPure)
    static int64 ClampInteger64WithinRange(const int64 InValue, const FMETA_Int64Interval InRange);

    UFUNCTION(BlueprintPure)
    static float ClampFloatWithinRange(const float InValue, const FMETA_FloatInterval InRange);

    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> CalculateParentLootTagsForArray(TArray<FGameplayTag> inGameplayTagArray);

    UFUNCTION(BlueprintCallable)
    static int32 CalculateIndexForArrayOfChances(const TArray<int32>& inChances);

    UFUNCTION(BlueprintPure)
    static bool AreGraphCharactersIDsEqual(const FMETA_CharacterID& First, const FMETA_CharacterID& Second);

    UFUNCTION(BlueprintPure)
    static bool AreConditionsForArmyTierChangingEqual(const FMETA_ConditionForArmyTierChanging& inFirst, const FMETA_ConditionForArmyTierChanging& inSecond);

};
