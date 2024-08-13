#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_ImpactTypeObject.h"
#include "EIGS_ItemType.h"
#include "IGS_GameplayAbilityGrantDataHolder.h"
#include "IGS_GameplayEffectApplyDataHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_CommonItemData.generated.h"

class UAkAudioEvent;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ItemType ItemType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldMove;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> PickupMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> PickupMeshSkeletal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ItemPickUpAudioEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ItemThrowAudioEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> HitImpactID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitImpactMass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ItemOffence;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GrantedTags;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_GameplayAbilityGrantDataHolder> GrantedAbilities;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_GameplayEffectApplyDataHolder> AppliedEffects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Bitmask, BitmaskEnum = "/Script/Common_Data.EIGS_ItemPropertyFlags"))
    int32 ItemPropertyFlags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonetaryValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ModelScaleFPV;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ModelScale3PV;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UObject>> AdditionalPreloadClasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> AdditionalPreloadObjects;

    COMMON_DATA_API FIGS_CommonItemData();
};
