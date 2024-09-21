#pragma once
#include "CoreMinimal.h"
#include "EIGS_ConnectionPointTag.h"
#include "GameFramework/Actor.h"
#include "IGS_ConnectionPointBase.generated.h"

class USceneComponent;
class UArrowComponent;
class UBillboardComponent;

UCLASS(Abstract)
class BF_LEVELGENERATOR_API AIGS_ConnectionPointBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ConnectionPointBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_ConnectionPointTag> PopulatorTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ConnectionPointTag;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* Root;

protected:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleDefaultsOnly)
	UBillboardComponent* Sprite;
	UPROPERTY(VisibleDefaultsOnly)
	UArrowComponent* Arrow;
#endif
};
