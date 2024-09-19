#include "IGS_MeshDeformationCorrection_AnimGraphNode.h"

FIGS_MeshDeformationCorrection_AnimGraphNode::FIGS_MeshDeformationCorrection_AnimGraphNode() {
    (*this).CorrectionData = TArray<FIGS_MeshDeformationBoneInfo>{};
    (*this).Alphas.RotationAlphas = TArray<float>{};
    (*this).Alphas.LocationAlphas = TArray<float>{};
    (*this).Alphas.ScaleAlphas = TArray<float>{};
    (*this).UseExposedAlpha = false;
    (*this).m_CharacterMesh = nullptr;
}
