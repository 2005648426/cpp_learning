#include <iostream>

using namespace std;

void sort(int numbers[], int size);

int main() {

    int numbers[] = {3, 5, 9, 10, 4, 1, 2, 7, 6, 8};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for (int element : numbers)
    {
        cout << element << " ";
    }
    

    return 0;
}
void sort(int numbers[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}