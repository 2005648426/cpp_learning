#include <iostream>

using namespace std;

void print_info(const string &name, const int &age);

int main() {

    string name = "Yernar";
    int age = 17;

    print_info(name, age);

    return 0;
}
void print_info(const string &name,const int &age){
    cout << name << endl;
    cout << age << endl;
}