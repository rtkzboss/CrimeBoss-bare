#include "IGS_GetActorByGameplayTagManager.h"
#include "Kismet/GameplayStatics.h"

UIGS_GetActorByGameplayTagManager::UIGS_GetActorByGameplayTagManager() {
}

AActor* UIGS_GetActorByGameplayTagManager::GetRandomActorWithGameplayTagAndRandomStream(const FGameplayTag& inGameplayTag, UIGS_RandomStreamHolder* inRandomStreamHolder) const {
    return nullptr;
}

AActor* UIGS_GetActorByGameplayTagManager::GetRandomActorWithGameplayTag(const FGameplayTag& inGameplayTag) const {
    return nullptr;
}

AActor* UIGS_GetActorByGameplayTagManager::GetFirstActorWithGameplayTag(const FGameplayTag& inGameplayTag) const {
    return nullptr;
}

TArray<AActor*> UIGS_GetActorByGameplayTagManager::GetAllActorsWithGameplayTag(const FGameplayTag& inGameplayTag) const {
    return {};
}

AActor* UIGS_GetActorByGameplayTagManager::GetRandomActorWithGameplayTag_Internal(const FGameplayTag& inGameplayTag, FRandomStream& RandomStream) const
{
	ensureMsgf(0, TEXT("unimplemented"));
	return nullptr;
}

