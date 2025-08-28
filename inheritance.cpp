#include <iostream>

using namespace std;

class shapes{

    public:
        double area;
        double volume;
};

class cubes : public shapes{
    public:
        double side;
    cubes(double side){
        this-> side = side;
        this-> area = side * side * 6;
        this-> volume = side * side * side; 
    }
};

class spheres : public shapes{
    public:
        double radius;
    
    spheres(double radius) {
        this-> radius = radius;
        this-> area = 4 * 3.14159 * radius * radius;
        this-> volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main() {

    cubes cube(10);
    spheres sphere(5);

    cout << "Cube's Area: "<< cube.area << "cm^2" << endl;

    cout << "Cube's Volume: "<< cube.volume << "cm^3" << endl << endl;

    cout << "Sphere's Area: "<< sphere.area << "cm^2" << endl;

    cout << "Sphere's Volume: "<< sphere.volume << "cm^3" << endl;


    return 0;
}