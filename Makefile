CC = g++
TARGET = main
SRC = main.cpp types/celestial_body/CelestialBody.cpp types/vector3d/Vector3D.cpp types/celestial_body/planet/Planet.cpp types/celestial_body/star/Star.cpp
     
CFLAGS = -I${PWD}
FLAGS =
LIBS =  -lpthread


OBJ = $(SRC:%.cpp=%.o)

%.cpp.o: 
	$(CC) -c $(CFLAGS) $<  -o $@ 
$(TARGET): $(OBJ)
	$(CC) $(FLAGS)  -o $(TARGET) $(OBJ) $(LIBS)
clean:
	rm *.o $(TARGET) 