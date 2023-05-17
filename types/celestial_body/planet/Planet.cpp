#include "Planet.hpp"

Planet::Planet(double _mass, const Vector3D& _pos, const Vector3D& _velocity) : CelestialBody(_mass, _pos), velocity(_velocity) {}

void Planet::update(double timeStep) {
    Vector3D acceleration = this->calculateAcceleration();
    this->velocity = this->velocity + acceleration * timeStep;
    this->position = this->position + this->velocity * timeStep;
}

Vector3D Planet::getPosition() const {
    return this->position;
}