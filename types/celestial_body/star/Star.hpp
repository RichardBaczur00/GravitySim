#ifndef STAR_H_INCLUDED

#define STAR_H_INCLUDED

#include "../CelestialBody.hpp"

class Star : public CelestialBody {
public:
    Star(double, const Vector3D& pos);
    Vector3D getPosition() const override;
};

#endif