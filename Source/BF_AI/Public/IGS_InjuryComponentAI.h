#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_InjuryComponentAI.generated.h"

class AIGS_AIControllerBase;
class AIGS_IntelligentGameCharacter;
class UIGS_BleedingHandlerComponent;
class UIGS_CharacterData;
class UIGS_ObjectStatus;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_InjuryComponentAI : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionTresholdMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionTresholdMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionTresholdInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionMinSingleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeavyReactionCooldownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionTresholdMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionTresholdMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionTresholdInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionMinSingleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumReactionCooldownMax;
    
    UPROPERTY()
    AIGS_AIControllerBase* m_Controller;
    
    UPROPERTY()
    AIGS_IntelligentGameCharacter* m_Pawn;
    
    UPROPERTY(Instanced)
    UIGS_ObjectStatus* m_ObjectStatus;
    
    UPROPERTY(Instanced)
    UIGS_CharacterData* m_CharacterData;
    
    UPROPERTY(Instanced)
    UIGS_BleedingHandlerComponent* m_BleedingHandler;
    
    UPROPERTY()
    TArray<UObject*> m_Locks;
    
public:
    UIGS_InjuryComponentAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestReaction(bool inIsHeavy, FVector inHitDirection);
    
};

