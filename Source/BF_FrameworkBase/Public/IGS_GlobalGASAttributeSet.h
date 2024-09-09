#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "IGS_GlobalGASAttributeSet.generated.h"

UCLASS(Abstract, BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_GlobalGASAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UIGS_GlobalGASAttributeSet();

protected:
    UFUNCTION()
    void OnRep_EnemyAIReceiveDamage(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION()
    void OnRep_EnemyAIDamage(const FGameplayAttributeData& inOldValue);
    
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_EnemyAIDamage)
    FGameplayAttributeData EnemyAIDamage;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_EnemyAIDamage)
    FGameplayAttributeData EnemyAIReceiveDamage;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

