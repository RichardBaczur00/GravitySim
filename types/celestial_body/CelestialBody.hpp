#ifndef CELESTIAL_BODY_H_INCLUDED

#define CELESTIAL_BODY_H_INCLUDED

#include "../vector3d/Vector3D.hpp"
#include <vector>

const double G = 6.67430e-11;

class CelestialBody {

protected:
    double mass;
    Vector3D position;
    Vector3D calculateAcceleration() const;
    static std::vector<CelestialBody*> bodies;

public:
    CelestialBody(double, const Vector3D&);
    virtual Vector3D getPosition() const = 0;
};

#endif