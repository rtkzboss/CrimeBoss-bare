#include "IGS_MeshDeformationCorrection_AnimGraphNode.h"

FIGS_MeshDeformationCorrection_AnimGraphNode::FIGS_MeshDeformationCorrection_AnimGraphNode() {
    (*this).CorrectionData = {};
    (*this).Alphas.RotationAlphas = {};
    (*this).Alphas.LocationAlphas = {};
    (*this).Alphas.ScaleAlphas = {};
    (*this).UseExposedAlpha = false;
    (*this).m_CharacterMesh = nullptr;
}
