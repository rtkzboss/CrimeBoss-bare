#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_LogCategory.h"
#include "EMETA_MetaLogVerbosity.h"
#include "META_LogEditorSubsystem.generated.h"

class UObject;

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_LogEditorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_LogEditorSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void PrintMetaLog(const UObject* inWCO, EMETA_LogCategory inCategory, const FText& inMessage, EMETA_MetaLogVerbosity inVerbosity);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTimeString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDateString();
    
    UFUNCTION(BlueprintCallable)
    void CreateMetaLogFile(bool inNewCompaing, bool inIsDebug, const FString& inSaveFileName);
    
};

