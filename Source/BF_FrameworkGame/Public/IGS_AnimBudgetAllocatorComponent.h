#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_Mesh_BudgetAllocator_Settings.h"
#include "IGS_AnimBudgetAllocatorComponent.generated.h"

class USkeletalMeshComponentBudgeted;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimBudgetAllocatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SignificanceUpdateInterval;
    
protected:
    UPROPERTY()
    TMap<USkeletalMeshComponentBudgeted*, FIGS_Mesh_BudgetAllocator_Settings> m_ChildMeshesDefaultSettings;
    
    UPROPERTY()
    TMap<USkeletalMeshComponentBudgeted*, FIGS_Mesh_BudgetAllocator_Settings> m_ChildMeshesOptimizedSettings;
    
public:
    UIGS_AnimBudgetAllocatorComponent(const FObjectInitializer& ObjectInitializer);

};

