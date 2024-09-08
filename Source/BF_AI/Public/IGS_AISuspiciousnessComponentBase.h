#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OffenceChangedEventSignatureDelegate.h"
#include "SusPlayerInfo.h"
#include "IGS_AISuspiciousnessComponentBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UIGS_OffenceData;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISuspiciousnessComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OffenceChangedEventSignature OnOffenceChangedEvent;
    
protected:
    UPROPERTY()
    TMap<AIGS_PlayerCharacter*, FSusPlayerInfo> m_PlayerSusInfo;
    
    UPROPERTY()
    TArray<AActor*> m_SusActors;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_GameCharacterFramework* AlertedByCharacter;
    
    UPROPERTY()
    UObject* AlertedByCharacterSusObject;
    
    UPROPERTY()
    UIGS_OffenceData* m_Offence;
    
public:
    UIGS_AISuspiciousnessComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsReacting();
    
    UFUNCTION(BlueprintPure)
    bool IsAlerted() const;
    
    UFUNCTION(BlueprintCallable)
    AIGS_GameCharacterFramework* GetAlertedByCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ClearOffence();
    
};

