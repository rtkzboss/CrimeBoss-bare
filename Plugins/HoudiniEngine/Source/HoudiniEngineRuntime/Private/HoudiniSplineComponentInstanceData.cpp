#include "HoudiniSplineComponentInstanceData.h"

FHoudiniSplineComponentInstanceData::FHoudiniSplineComponentInstanceData() {
    (*this).CurvePoints = {};
    (*this).DisplayPoints = {};
    (*this).DisplayPointIndexDivider = {};
}
