#include <iostream>

using namespace std;

int main() {

    int size;
    cin >> size;

    string foods[size];

    fill(foods, foods + (size / 3), "pizza");
    fill(foods + (size / 3), foods + (size / 3) * 2, "hamburger");
    fill(foods + (size / 3) * 2, foods + size, "bahandi");

    for(string food: foods){
        cout << food << endl;
    }

    return 0;
}
