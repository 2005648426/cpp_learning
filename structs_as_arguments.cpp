#include <iostream>

using namespace std;

struct cars{
    string model;
    int year;
    string color;
};

void print_car(cars &car);

void paint_car(cars &car, string color);

int main() {

    cars car1;
    cars car2;

    car1.model = "Ferrari";
    car1.year = 2024;
    car1.color = "red";

    car2.model = "Mustang";
    car2.year = 2022;
    car2.color = "yellow";

    paint_car(car1, "silver");
    paint_car(car2, "gold");

    print_car(car1);
    print_car(car2);

    return 0;
}

void print_car(cars &car){
   
    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;

}

void paint_car(cars &car, string color) {

    car.color = color;

}