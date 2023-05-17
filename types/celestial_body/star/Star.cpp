#include "Star.hpp"

Star::Star(double _mass, const Vector3D& _pos) : CelestialBody(_mass, _pos) {}

Vector3D Star::getPosition() const {
    return this->position;
}