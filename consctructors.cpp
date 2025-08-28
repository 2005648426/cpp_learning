#include <iostream>

using namespace std;

class students{
    public:
        string name;
        int age;
        double gpa;

        students(string name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
};


int main() {

    students student1("Yernar", 17, 3.5);
    students student2("Aibar", 17, 3.5);
    students student3("Sanzhar", 17, 3.5);


    cout << student1.name << endl;

    return 0;
}