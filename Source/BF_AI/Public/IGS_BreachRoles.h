#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_BreachRoles.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_BreachPointComponent;

UCLASS()
class BF_AI_API UIGS_BreachRoles : public UObject {
    GENERATED_BODY()
public:
    UIGS_BreachRoles();

    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* Leader;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeaderEntryPoint;
    
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* Deputy;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* DeputyEntryPoint;
    
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* LeaderBackup;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeaderBackupEntryPoint;
    
    UPROPERTY(EditDefaultsOnly)
    AIGS_GameCharacterFramework* DeputyBackup;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* DeputyBackupEntryPoint;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<AIGS_GameCharacterFramework*> Stack;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* StackPoint;
    
};

