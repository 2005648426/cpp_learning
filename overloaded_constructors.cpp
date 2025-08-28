#include <iostream>

using namespace std;

class pizzas{

    public:
        string topping1;
        string topping2;

    pizzas(string topping1){
        this->topping1 = topping1;
    }
    
    pizzas(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    pizzas(){

    }

};

int main() {

    pizzas pizza1("pepperoni");
    pizzas pizza2("mushrooms", "peppers");
    pizzas pizza3;

    cout << pizza3.topping1 << endl;

    return 0;
}