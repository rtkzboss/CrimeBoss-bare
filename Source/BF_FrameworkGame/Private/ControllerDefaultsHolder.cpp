#include "ControllerDefaultsHolder.h"

FControllerDefaultsHolder::FControllerDefaultsHolder() {
    (*this).GangsterDefaultController = FSoftObjectPath();
    (*this).GangsterSniperController = FSoftObjectPath();
    (*this).GangsterShieldController = FSoftObjectPath();
    (*this).GangsterHeavyController = FSoftObjectPath();
    (*this).GangsterDetectiveController = FSoftObjectPath();
    (*this).GangsterHeavyMeleeController = FSoftObjectPath();
    (*this).BackupDefaultController = FSoftObjectPath();
    (*this).BackupHeavyController = FSoftObjectPath();
    (*this).SwatDefaultController = FSoftObjectPath();
    (*this).SwatSniperController = FSoftObjectPath();
    (*this).SwatShieldController = FSoftObjectPath();
    (*this).SwatHeavyController = FSoftObjectPath();
    (*this).SwatHeavyScoutController = FSoftObjectPath();
    (*this).CopDefaultController = FSoftObjectPath();
    (*this).GuardDefaultController = FSoftObjectPath();
    (*this).EmployeeDefaultController = FSoftObjectPath();
    (*this).CivilianDefaultController = FSoftObjectPath();
}
