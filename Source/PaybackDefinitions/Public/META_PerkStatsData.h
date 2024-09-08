#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "META_PerkStatGroup.h"
#include "META_PerkStatsData.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_PerkStatsData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FString RichTextStyle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_PerkStatGroup> StatGroups;
    
public:
    UMETA_PerkStatsData();

    UFUNCTION(BlueprintPure)
    FString GetDefaultRichTextStyleTag() const;
    
    UFUNCTION(BlueprintPure)
    void GetCombinedStatGroupsFromAttributes(const TMap<FGameplayAttribute, float>& inAttributes, bool& outSuccess, TMap<FMETA_PerkStatGroup, int32>& outStatGroups) const;
    
};

