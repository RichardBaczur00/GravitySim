#include "CelestialBody.hpp"

std::vector<CelestialBody*> CelestialBody::bodies;

CelestialBody::CelestialBody(double _mass, const Vector3D& _position) : mass(_mass), position(_position) {
    CelestialBody::bodies.push_back(this);
}

Vector3D CelestialBody::calculateAcceleration() const {
    Vector3D acceleration;

    for (auto body : CelestialBody::bodies) {
        if (body == this) {
            continue;
        }

        Vector3D direction = body->getPosition() - this->position;
        double distance = direction.magnitude();
        double forceMagnitude = G * mass * body->mass / (distance * distance);
        acceleration += direction.normalize() * forceMagnitude;
    }
}