#pragma once
#include "CoreMinimal.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_AnimIntermediaryLinker.generated.h"

USTRUCT()
struct BF_ANIMATIONS_API FIGS_AnimIntermediaryLinker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FIGS_LinkedGraphDefinition> m_LinkedGraphs;
    
    UPROPERTY()
    TArray<UClass*> m_LoadedClasses;
    
public:
    FIGS_AnimIntermediaryLinker();
};

