#pragma once
#include "CoreMinimal.h"
#include "ControllerDefaultsHolder.generated.h"

class AIGS_AIControllerFramework;

USTRUCT()
struct FControllerDefaultsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterSniperController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterShieldController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterHeavyController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterDetectiveController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GangsterHeavyMeleeController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> BackupDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> BackupHeavyController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> SwatDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> SwatSniperController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> SwatShieldController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> SwatHeavyController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> SwatHeavyScoutController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> CopDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> GuardDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> EmployeeDefaultController;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_AIControllerFramework> CivilianDefaultController;
    
    BF_FRAMEWORKGAME_API FControllerDefaultsHolder();
};

