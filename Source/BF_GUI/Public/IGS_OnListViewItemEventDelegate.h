#pragma once
#include "CoreMinimal.h"
#include "IGS_OnListViewItemEventDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnListViewItemEvent, UUserWidget*, InWidget, UObject*, inItem);

