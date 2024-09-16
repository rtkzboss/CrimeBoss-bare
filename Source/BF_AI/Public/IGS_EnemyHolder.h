#pragma once
#include "CoreMinimal.h"
#include "IGS_AggroHolder.h"
#include "IGS_SenseHolder.h"
#include "IGS_EnemyHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_EnemyHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> Enemy;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_SenseHolder SenseHolder;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_AggroHolder AggroHolder;

    BF_AI_API FIGS_EnemyHolder();
};
