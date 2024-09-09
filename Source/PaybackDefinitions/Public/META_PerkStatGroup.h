#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EMETA_PerkStatGroupUsage.h"
#include "META_PerkStatGroup.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PerkStatGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FGameplayAttribute> PerkAttributes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_PerkStatGroupUsage Type;
    
    PAYBACKDEFINITIONS_API FMETA_PerkStatGroup();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_PerkStatGroup) { return 0; }

