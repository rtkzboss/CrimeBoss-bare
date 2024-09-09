#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMETA_NotificationEffect.h"
#include "EMETA_NotificationType.h"
#include "META_BaseNotification.generated.h"

class UMETA_NotificationID;
class UTexture2D;

UCLASS(Abstract, BlueprintType)
class CRIMEBOSSMETA_API UMETA_BaseNotification : public UObject {
    GENERATED_BODY()
public:
    UMETA_BaseNotification();

    UFUNCTION(BlueprintCallable)
    void SetInfo(TSoftObjectPtr<UMETA_NotificationID> inID, EMETA_NotificationType inType, FText InTitle, FText inDescription, EMETA_NotificationEffect inEffect, TSoftObjectPtr<UTexture2D> inImage, TSoftObjectPtr<UMETA_NotificationID> inAggregationID, bool inHideInIntro);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(TSoftObjectPtr<UTexture2D> inImage);
    
    UFUNCTION(BlueprintPure)
    EMETA_NotificationType GetType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_NotificationID> GetId() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHideInIntro() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_NotificationEffect GetEffect() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION()
    TSoftObjectPtr<UMETA_NotificationID> GetAggregateID() const;
    
protected:
    UPROPERTY()
    TSoftObjectPtr<UMETA_NotificationID> ID;
    
    UPROPERTY()
    FText Title;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY()
    EMETA_NotificationEffect Effect;
    
    UPROPERTY()
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY()
    EMETA_NotificationType Type;
    
    UPROPERTY()
    TSoftObjectPtr<UMETA_NotificationID> AggregationNotificationID;
    
    UPROPERTY()
    bool HideInIntro;
    
};

