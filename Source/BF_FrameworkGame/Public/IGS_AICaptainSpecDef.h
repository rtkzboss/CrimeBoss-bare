#pragma once
#include "CoreMinimal.h"
#include "IGS_AICaptainSpecHolder.h"
#include "IGS_AICaptainSpecDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICaptainSpecDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder DollarDragon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder Hielo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder KarolKhan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder Cagnali;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder LawEnforcement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICaptainSpecHolder Friendlies;
    
    FIGS_AICaptainSpecDef();
};

