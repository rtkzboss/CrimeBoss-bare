#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DFLDebugProperties.generated.h"

USTRUCT(BlueprintType)
struct FDFLDebugProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrintDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PrintColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PrintWarningColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PrintErrorColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintFunction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLogDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLogClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLogFunction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineThickness;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Segments;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArrowSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfHeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PrimaryColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SecondaryColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TertiaryColour;

    DEBUGFUNCTIONLIBRARY_API FDFLDebugProperties();
};
