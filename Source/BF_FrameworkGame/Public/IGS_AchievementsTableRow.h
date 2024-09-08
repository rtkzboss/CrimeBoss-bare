#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_AchievementAward.h"
#include "EIGS_AchievementType.h"
#include "IGS_AchievementsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AchievementsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PlatformID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AchievementType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UnlockValue;
    
    UPROPERTY(VisibleAnywhere)
    int32 SetupUnlockValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ValuesDivisor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AchievementAward Award;
    
    UPROPERTY(VisibleAnywhere)
    int32 EpicXPs;
    
    UPROPERTY(VisibleAnywhere)
    int32 XboxGamerscore;
    
    UPROPERTY(VisibleAnywhere)
    int32 PS5Trophies;
    
    UPROPERTY(EditAnywhere)
    bool Hidden;
    
    UPROPERTY(EditAnywhere)
    FText LockedName;
    
    UPROPERTY(EditAnywhere)
    FText LockedDescription;
    
    UPROPERTY(EditAnywhere)
    FText UnlockedName;
    
    UPROPERTY(EditAnywhere)
    FText UnlockedDescription;
    
    BF_FRAMEWORKGAME_API FIGS_AchievementsTableRow();
};

