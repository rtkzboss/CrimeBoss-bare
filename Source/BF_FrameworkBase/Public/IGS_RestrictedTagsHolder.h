#pragma once
#include "CoreMinimal.h"
#include "IGS_RestrictedTagsHolder.generated.h"

USTRUCT()
struct FIGS_RestrictedTagsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> RestrictedTags;
    
    BF_FRAMEWORKBASE_API FIGS_RestrictedTagsHolder();
};

