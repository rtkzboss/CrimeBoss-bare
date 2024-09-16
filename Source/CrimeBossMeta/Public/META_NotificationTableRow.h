#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_NotificationEffect.h"
#include "EMETA_NotificationType.h"
#include "META_NotificationTableRow.generated.h"

class UMETA_NotificationID;
class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_NotificationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMETA_NotificationID> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_NotificationType Type;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_NotificationEffect Effect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMETA_NotificationID> AggregationNotificationID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HideInIntro;

    FMETA_NotificationTableRow();
};
