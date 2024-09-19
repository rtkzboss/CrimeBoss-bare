#include "IGS_MeshDeformationBoneAlphaInfo.h"

FIGS_MeshDeformationBoneAlphaInfo::FIGS_MeshDeformationBoneAlphaInfo() {
    (*this).RotationAlphas = TArray<float>{};
    (*this).LocationAlphas = TArray<float>{};
    (*this).ScaleAlphas = TArray<float>{};
}
