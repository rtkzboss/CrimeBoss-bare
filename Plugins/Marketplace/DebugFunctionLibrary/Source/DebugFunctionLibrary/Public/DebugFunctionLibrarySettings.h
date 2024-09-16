#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EPrintLogPrefix.h"
#include "DebugFunctionLibrarySettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class DEBUGFUNCTIONLIBRARY_API UDebugFunctionLibrarySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDebugFunctionLibrarySettings();

    UPROPERTY(Config, EditAnywhere)
    bool bGlobalDebug;

    UPROPERTY(Config, EditAnywhere)
    bool bGlobalPrintDebug;

    UPROPERTY(Config, EditAnywhere)
    bool bGlobalLogDebug;

    UPROPERTY(Config, EditAnywhere)
    bool bGlobalDrawDebug;

    UPROPERTY(Config, EditAnywhere)
    int32 MaxPrintNodeFunctionDiscoveryIterations;

    UPROPERTY(Config, EditAnywhere)
    float DrawDebugTickDuration;

    UPROPERTY(Config, EditAnywhere)
    float PrintDebugTickDuration;

    UPROPERTY(Config, EditAnywhere)
    EPrintLogPrefix StaticPrintLogPrefix;

    UPROPERTY(Config, EditAnywhere)
    EPrintLogPrefix QuickPrintLogPrefix;

    UPROPERTY(Config, EditAnywhere)
    bool bDebug;

    UPROPERTY(Config, EditAnywhere)
    bool bPrintDebug;

    UPROPERTY(Config, EditAnywhere)
    float PrintDuration;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor PrintColour;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor PrintWarningColour;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor PrintErrorColour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintFunction;

    UPROPERTY(Config, EditAnywhere)
    bool bLogDebug;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLogClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLogFunction;

    UPROPERTY(Config, EditAnywhere)
    bool bDrawDebug;

    UPROPERTY(Config, EditAnywhere)
    float DrawDuration;

    UPROPERTY(Config, EditAnywhere)
    float LineThickness;

    UPROPERTY(Config, EditAnywhere)
    float LineLength;

    UPROPERTY(Config, EditAnywhere)
    float Radius;

    UPROPERTY(Config, EditAnywhere)
    int32 Segments;

    UPROPERTY(Config, EditAnywhere)
    float ArrowSize;

    UPROPERTY(Config, EditAnywhere)
    float HalfHeight;

    UPROPERTY(Config, EditAnywhere)
    float Size;

    UPROPERTY(Config, EditAnywhere)
    float Scale;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor PrimaryColour;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor SecondaryColour;

    UPROPERTY(Config, EditAnywhere)
    FLinearColor TertiaryColour;

};
