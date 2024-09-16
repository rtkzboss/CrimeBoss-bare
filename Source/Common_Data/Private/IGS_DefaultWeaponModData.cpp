#include "IGS_DefaultWeaponModData.h"

FIGS_DefaultWeaponModData::FIGS_DefaultWeaponModData() {
    (*this).DefaultMagazineMesh = FSoftObjectPath();
    (*this).DefaultStockMesh = FSoftObjectPath();
    (*this).DefaultSightMesh = FSoftObjectPath();
    (*this).DefaultDynamicSightMesh = FSoftObjectPath();
    (*this).DefaultBarrelMesh = FSoftObjectPath();
    (*this).DefaultVisibilityMesh = FSoftObjectPath();
    (*this).DefaultZoomMagnification = 1.500000000e+00f;
}
