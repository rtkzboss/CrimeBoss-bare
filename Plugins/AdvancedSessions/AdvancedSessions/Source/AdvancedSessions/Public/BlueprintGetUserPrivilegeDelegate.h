#pragma once
#include "CoreMinimal.h"
#include "EBPUserPrivileges.h"
#include "BlueprintGetUserPrivilegeDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlueprintGetUserPrivilegeDelegate, EBPUserPrivileges, QueriedPrivilege, bool, HadPrivilege);
