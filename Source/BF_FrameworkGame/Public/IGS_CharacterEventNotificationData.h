#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_CharacterEventNotificationData.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_CharacterEventNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_GameCharacterFramework*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> ObjectOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector VectorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 OptionalEnumData;
    
    FIGS_CharacterEventNotificationData();
};

