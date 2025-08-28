#include <iostream>

using namespace std;

class stoves{

    private:
        int temp = 0;
    public:
    stoves(int temp){
        set_temp(temp);
    }

    int get_temp() {
        return temp;
    }

    void set_temp(int temp){
        if (temp < 0)
        {
            this-> temp = 0;
        }
        else if (temp >= 10)
        {
            this-> temp = 10;
        }
        else
        {
            this-> temp = temp;
        }

    }
};

int main(){

    stoves stove(0);

    //stove.set_temp(5);

    cout << "The temperature setting is: " << stove.get_temp();

    return 0;
}