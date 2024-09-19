#include "BTTask_RunEQSQueryRandom.h"
#include "EnvironmentQuery/EnvQuery.h"

UBTTask_RunEQSQueryRandom::UBTTask_RunEQSQueryRandom() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("EQSQueryBlackboardKey_Object_2147482488"), UEnvQuery::StaticClass());
    (*this).EQSQueryBlackboardKey = gen;
    (*this).RandomItemCount = 3;
    (*this).NodeName = TEXT("Run EQS Query Random");
}

