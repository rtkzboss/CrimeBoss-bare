#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemTool.h"
#include "ConstructionSystemBuildTool.generated.h"

class UConstructionSystemCursor;
class UPrefabricatorAssetInterface;

UCLASS(BlueprintType)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemBuildTool : public UConstructionSystemTool {
    GENERATED_BODY()
public:
    UConstructionSystemBuildTool();

    UFUNCTION(BlueprintCallable)
    void SetActivePrefab(UPrefabricatorAssetInterface* InActivePrefabAsset);
    
private:
    UFUNCTION()
    void HandleInput_RotateCursorStep(float NumSteps);
    
    UFUNCTION()
    void HandleInput_CursorMovePrev();
    
    UFUNCTION()
    void HandleInput_CursorMoveNext();
    
    UFUNCTION()
    void HandleInput_ConstructAtCursor();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CursorRotationStepAngle;
    
private:
    UPROPERTY(Transient)
    UConstructionSystemCursor* Cursor;
    
    UPROPERTY(Transient)
    UPrefabricatorAssetInterface* ActivePrefabAsset;
    
};

