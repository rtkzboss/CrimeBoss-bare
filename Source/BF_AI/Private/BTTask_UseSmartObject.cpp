#include "BTTask_UseSmartObject.h"
#include "GameFramework/Actor.h"

UBTTask_UseSmartObject::UBTTask_UseSmartObject() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("SmartObjectBBKey_Object_2147482469"), AActor::StaticClass());
    (*this).SmartObjectBBKey = gen;
    (*this).NodeName = TEXT("Use Smart Object");
}

