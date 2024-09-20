#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_RoundNumbersLibrary.generated.h"

UCLASS()
class BF_LEVELGENERATOR_API UIGS_RoundNumbersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_RoundNumbersLibrary();

	static inline float Round(float X)
	{
		return FMath::RoundHalfFromZero(X);
	}
	static inline FVector Round(FVector V)
	{
		return FVector(Round(V.X), Round(V.Y), Round(V.Z));
	}
	static inline FRotator Round(FRotator R)
	{
		return FRotator(Round(R.Pitch), Round(R.Yaw), Round(R.Roll));
	}
};
