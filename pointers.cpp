#include <iostream>

using namespace std;

int main() {

    //* pointers = variable that stores a memore address of antoher variable 
    //              sometimes it's easier to work with an address

    // & address-of operator
    // * deference operator

    string name = "Yernar";
    int age = 17;
    string free_pizzas[5] = {"pizza 1", "pizza 2", "pizza 3", "pizza 4", "pizza 5"};

    string *p_name = &name;
    int *p_age = &age;
    string *p_free_pizzas = free_pizzas;

    cout << *p_name << endl;
    cout << *p_age << endl;
    cout << *p_free_pizzas;

    return 0;
}