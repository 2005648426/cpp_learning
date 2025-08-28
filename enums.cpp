#include <iostream>

using namespace std;

enum Day{monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4, saturday = 5, sunday = 6};

int main () {

    Day today = thursday;

    switch(today){
        case monday: cout << "It is Monday!\n";
                       break;
        case tuesday: cout << "It is Tuesday!\n";
                       break;
        case wednesday: cout << "It is Wednesday!\n";
                       break;
        case thursday: cout << "It is Thursday!\n";
                       break;
        case friday: cout << "It is Friday!\n";
                       break;
        case saturday: cout << "It is Saturday!\n";
                       break;               
        case sunday: cout << "It is Sunday!\n";
                       break;
    }

    return 0;
}