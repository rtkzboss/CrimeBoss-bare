#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_ConnectionPointData.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_ConnectionPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rotation;

    FIGS_ConnectionPointData();

	inline bool operator==(FName OtherName) const
	{
		return Name == OtherName;
	}
};
