#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CharacterThrowRequest.h"
#include "IGS_ThrowBagDefinitionComponent.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ThrowBagSlot;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ThrowBagDefinitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ThrowBagDefinitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestThrowStart(AIGS_GameCharacterFramework* inCharacter, bool inPlayerThrown);
    
    UFUNCTION(BlueprintCallable)
    void RequestThrowEnd(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AllowThrowingBags(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    UIGS_ThrowBagSlot* AddSlotFromSocket(USkeletalMeshComponent* inSkeletalMeshComponent, FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    UIGS_ThrowBagSlot* AddSlotFromSceneComponent(USceneComponent* inSceneComponent);
    
protected:
    UPROPERTY()
    TArray<UIGS_ThrowBagSlot*> m_Slots;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_CloseCharacters;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_PlayerFollowCharacters;
    
    UPROPERTY()
    TArray<FIGS_CharacterThrowRequest> m_TmpCharacterRequests;
    
    UPROPERTY()
    bool m_IsThrowingAllowed;
    
};

