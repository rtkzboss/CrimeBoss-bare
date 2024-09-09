#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EConstructionSystemToolType.h"
#include "Templates/SubclassOf.h"
#include "ConstructionSystemComponent.generated.h"

class AActor;
class UConstructionSystemTool;
class UConstructionSystemUIAsset;
class UMaterialInterface;
class UUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UConstructionSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleConstructionSystem();
    
    UFUNCTION(BlueprintCallable)
    void ShowBuildMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTool(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintCallable)
    void HideBuildMenu();
    
    UFUNCTION(BlueprintPure)
    UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintPure)
    EConstructionSystemToolType GetActiveToolType() const;
    
    UFUNCTION(BlueprintPure)
    UConstructionSystemTool* GetActiveTool();
    
    UFUNCTION(BlueprintCallable)
    void EnableConstructionSystem(EConstructionSystemToolType InToolType);
    
    UFUNCTION(BlueprintCallable)
    void DisableConstructionSystem();
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* CursorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* CursorInvalidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ConstructionCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstructionCameraTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstructionCameraTransitionExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> BuildMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UConstructionSystemUIAsset* BuildMenuData;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* BuildMenuUIInstance;
    
    UPROPERTY(Transient)
    EConstructionSystemToolType ActiveToolType;
    
    UPROPERTY(Transient)
    TMap<EConstructionSystemToolType, UConstructionSystemTool*> Tools;
    
};

