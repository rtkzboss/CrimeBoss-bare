#include "CustomizableObjectPopulationCharacteristic.h"

FCustomizableObjectPopulationCharacteristic::FCustomizableObjectPopulationCharacteristic() {
    (*this).ParameterName = TEXT("");
    (*this).Constraints = TArray<FCustomizableObjectPopulationConstraint>{};
}
