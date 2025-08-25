#include <iostream>

using namespace std;

int main() {

    string question[] = {"1. What year was C++ created?: ",
                         "2. Who invented C++?: ",
                         "3. What is the predecessor of C++?: ",
                         "4. Is Bahandi tasty?: "};
        
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Guido van Rossum", "B. Bjarne Stroustup", "C. Yernar Sarsenov", "D. John Cena"},
                          {"A. C", "B. C+", "C. C--", "D. Python"},
                          {"A. absolutely", "B. NO", "C. sometimes", "D. what is Bahandi?"}};
    
    char answer_key[] = {'C', 'B', 'A', 'A'};

    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << "*****************" << endl;
        cout << question[i] << endl;
        cout << "*****************" << endl;

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][j]); j++)
        {
            cout << options[i][j] << endl;
        }
        
        cin >> guess;
        guess = toupper(guess);

        if(guess == answer_key[i]){
            cout << "CORRECT" <<endl;
            score++;
        }
        else{
            cout << "WRONG" << endl;
            cout << "Answer: " << answer_key[i] << endl;
        }
    }
    
    cout << "*****************" << endl;
    cout << "*    RESULTS    *" << endl;
    cout << "*****************" << endl;
    cout << "CORRECT GUESSES: " << score << endl;
    cout << "# OF QUESTIONS: " << size << endl;
    cout << "SCORE: " << (score/(double)size) * 100 << "%" << endl;

    return 0;
}