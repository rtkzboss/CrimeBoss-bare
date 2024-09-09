#pragma once
#include "CoreMinimal.h"
#include "IGS_BoxSphere.h"
#include "GameplayTagContainer.h"
#include "IGS_PatrolEQSFilterBox.generated.h"

UCLASS()
class BF_AI_API AIGS_PatrolEQSFilterBox : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    AIGS_PatrolEQSFilterBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateDebugSubsystemSettings();
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FiltersByTeamSide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ValidTeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer EQSFilteringTags;
    
};

