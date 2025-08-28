#include <iostream>

using namespace std;

int main() {

    char *p_grades = NULL;
    int size;

    cout << "How many grades to enter in?: " << endl;
    cin >> size;

    p_grades = new char[size]; // Use the "new" operator to allocate memory in the heap rather than the stack .

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> p_grades[i]; 
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << p_grades[i] << " ";
    }

    delete[] p_grades;

    return 0;
}
