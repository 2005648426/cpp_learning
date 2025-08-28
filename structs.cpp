#include <iostream>

using namespace std;

struct student{

    string name;
    double gpa;
    bool enrolled = true;

};

int main() {

    student student1;
    student1.name = "Yernar";
    student1.gpa = 3.5;

    student student2;
    student2.name = "Aibar";
    student2.gpa = 4.0;

    student student3;
    student3.name = "Patrick";
    student3.gpa = 2.5;


    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;

    cout << student3.name << endl;
    cout << student3.gpa << endl;
    cout << student3.enrolled << endl;

    return 0;
}