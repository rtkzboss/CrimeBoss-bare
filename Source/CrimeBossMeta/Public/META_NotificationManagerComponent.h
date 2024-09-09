#pragma once
#include "CoreMinimal.h"
#include "IGS_NotificationManagerBaseComponent.h"
#include "META_NotificationManagerComponent.generated.h"

class UMETA_BaseNotification;
class UMETA_NotificationID;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_NotificationManagerComponent : public UIGS_NotificationManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_NotificationManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    bool IsNotificationInQueue(TSoftObjectPtr<UMETA_NotificationID> inID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddNotification(UMETA_BaseNotification* inNotification);
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UMETA_BaseNotification*> NotificationQueue;
    
};

