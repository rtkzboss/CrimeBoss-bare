#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_PerkGroup.h"
#include "IGS_PerksCustomizationScreen.generated.h"

class UIGS_Quickplay_BlackMarketManagerComponent;
class UIGS_Quickplay_CrewManagerComponent;
class UIGS_Quickplay_FinanceManagerComponent;
class UIGS_Quickplay_StashManagerComponent;
class UIGS_UnlockManager;
class UMETA_BossCharacter;
class UMETA_Perk;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_PerksCustomizationScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_PerksCustomizationScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SetGrouppedPerks();
    
    UFUNCTION(BlueprintPure)
    FIGS_PerkGroup GetPerkGroupByPerkTag(FGameplayTag inTag, UPARAM(Ref) TArray<FIGS_PerkGroup>& inPerkGroups) const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Perk* GetOwnedPerkMaxTier(UPARAM(Ref) FIGS_PerkGroup& InGroup) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FIGS_PerkGroup> GetGroupedPerks(TArray<UMETA_Perk*> inPerks) const;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_Quickplay_StashManagerComponent* MultiplayerStashManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_Quickplay_BlackMarketManagerComponent* MultiplayerBlackMarketManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_Quickplay_CrewManagerComponent* MultiplayerCrewManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_Quickplay_FinanceManagerComponent* MultiplayerFinanceManagerComopnent;
    
    UPROPERTY(BlueprintReadOnly)
    UIGS_UnlockManager* UnlockManager;
    
    UPROPERTY(BlueprintReadOnly)
    UMETA_BossCharacter* BossCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PerkGroup> GroupedAllPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PerkGroup> GroupedOwnedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PerkGroup> GroupedPurchasablePerks;
    
};

