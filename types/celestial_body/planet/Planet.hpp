#ifndef PLANET_H_INCLUDED

#define PLANET_H_INCLUDED

#include "../CelestialBody.hpp"
#include "../../vector3d/Vector3D.hpp"

class Planet : public CelestialBody {
private:
    Vector3D velocity;

public:
    Planet(double, const Vector3D&, const Vector3D&);
    void update(double timeStep);
    Vector3D getPosition() const override;
};

#endif