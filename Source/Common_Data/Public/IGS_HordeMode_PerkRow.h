#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayEffect.h"
#include "Styling/SlateColor.h"
#include "Templates/SubclassOf.h"
#include "IGS_HordeMode_PerkRow.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;
class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_HordeMode_PerkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> UpgradePerk;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText PickupText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* PerkStaticMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* PerkOnScreenEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PickupSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText IconGlyph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor IconColor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GenerateInRewardStation;

    FIGS_HordeMode_PerkRow();
};
