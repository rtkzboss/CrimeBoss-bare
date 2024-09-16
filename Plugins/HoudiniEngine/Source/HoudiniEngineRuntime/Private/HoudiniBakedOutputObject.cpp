#include "HoudiniBakedOutputObject.h"

FHoudiniBakedOutputObject::FHoudiniBakedOutputObject() {
    (*this).Actor = TEXT("");
    (*this).Blueprint = TEXT("");
    (*this).ActorBakeName = NAME_None;
    (*this).BakedObject = TEXT("");
    (*this).BakedComponent = TEXT("");
    (*this).InstancedActors = {};
    (*this).InstancedComponents = {};
    (*this).LandscapeLayers = {};
}
