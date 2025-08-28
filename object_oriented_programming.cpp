#include <iostream>

using namespace std;

class cars {
    public:
    string make;
    string model;
    int year;
    string color;

    void acelerate() {
        cout << "You step on a gas!\n";
    }
    
    void brake() {
        cout << "You step on a brakes!\n";
    }

};

int main() {

    cars car1;

    car1.make = "Toyota";
    car1.model = "camry";
    car1.year = 2024;
    car1.color = "black";

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    car1.acelerate();
    car1.brake();

    return 0;
}