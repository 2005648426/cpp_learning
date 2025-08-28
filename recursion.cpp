//#include  <iostream>

//using namespace std;

//void walk(int steps);

//int main() {

//    walk(100);

//    return 0;
//}

//void walk(int steps) {

//   if (steps > 0) {
        
//        cout << "You take a step!\n";
        
//       walk(steps - 1);
//    }
    
//}

#include  <iostream>

using namespace std;

int factorial(int num);

int main() {

    cout << factorial(10);

    return 0;
}

int factorial(int num) {

    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }

}