#pragma once
#include "CoreMinimal.h"
#include "IGS_SenseHolder.h"
#include "IGS_SuspicionComponentHolder.generated.h"

class AActor;
class UIGS_SuspicionComponent;

USTRUCT(BlueprintType)
struct FIGS_SuspicionComponentHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_SuspicionComponent> SuspicionComponent;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> SuspicionComponentActor;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_SenseHolder SenseHolder;

    BF_AI_API FIGS_SuspicionComponentHolder();
};
