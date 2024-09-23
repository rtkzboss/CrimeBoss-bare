#pragma once
#include "CoreMinimal.h"
#include "IGS_VariantDefinition.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_VariantDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;

    FIGS_VariantDefinition();

	inline bool operator==(FName OtherName) const
	{
		return Name == OtherName;
	}
};
