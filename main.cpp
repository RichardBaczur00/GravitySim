#include <iostream>

#include "types/celestial_body/planet/Planet.hpp"
#include "types/celestial_body/star/Star.hpp"

#include "types/vector3d/Vector3D.hpp"


int main(int argc, char** argv) {
    Planet earth(5.972e24, Vector3D(1.496e11, 0.0, 0.0), Vector3D(0, 3.0e4, 0.0));
    Star sun(1.989e30, Vector3D());

    for (int timestep = 0; timestep < 100; ++timestep) {
        const Vector3D& position = earth.getPosition();
        std::cout << "Earth position is: " << position.getX() << " " << position.getY() << " " << position.getZ() << std::endl;
        earth.update(3600);
    }

    return 0;
}