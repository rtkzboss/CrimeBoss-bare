#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AITransitionObjectBase.h"
#include "IGS_Ladder.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_LadderInteractiveComponent;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_Ladder : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* PlayerSnappingPoint;
    
    UPROPERTY(EditAnywhere)
    float HandAlignLocationOffset;
    
    UPROPERTY(EditAnywhere)
    float FirstTopStepOffset;
    
    UPROPERTY(EditAnywhere)
    float StepsSpacing;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float BottomRungLocalZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AIGetOutUpOffset;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_LadderInteractiveComponent* LadderTopInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_LadderInteractiveComponent* LadderBottomInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> User;
    
    AIGS_Ladder(const FObjectInitializer& ObjectInitializer);

};

