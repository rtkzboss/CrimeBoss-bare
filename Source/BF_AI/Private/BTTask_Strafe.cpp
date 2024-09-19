#include "BTTask_Strafe.h"

UBTTask_Strafe::UBTTask_Strafe() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("IsDodgingKey"));
    (*this).IsDodgingKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddFloatFilter(this, TEXT("DodgeDistanceKey"));
    (*this).DodgeDistanceKey = gen2;
    (*this).NodeName = TEXT("Strafe");
}

