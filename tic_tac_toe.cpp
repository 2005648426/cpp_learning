#include <iostream>
#include <ctime>

using namespace std;

void draw_board(char *spaces);
void player_move(char *spaces, char player);
void computer_move(char *spaces, char computer);
bool check_winner(char *spaces, char player, char computer);
bool check_tie(char *spaces);

int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    draw_board(spaces);

    while (running)
    {
        player_move(spaces, player);
        draw_board(spaces);
        if(check_winner(spaces, player, computer)){
            running = false;
            break;
        }

        else if (check_tie(spaces))
        {
            running = false;

            break;
        }
        
        
        

        computer_move(spaces, computer);

        draw_board(spaces);

        if(check_winner(spaces, player, computer)){
            
            running = false;
            
            break;
        }

        else if (check_tie(spaces))
        {
            running = false;

            break;
        }
        
    }
    
    cout << "Thanks for playing!\n";

    return 0;
}

void draw_board(char *spaces) {

    cout << endl << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  "<< spaces[2] << "   "<< endl;
    cout << "_____|_____|_____"<< endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  "<< spaces[5] << "   "<< endl;
    cout << "_____|_____|_____"<< endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  "<< spaces[8] << "   "<< endl;
    cout << "     |     |     " << endl << endl;
}

void player_move(char *spaces, char player){
    int number;
    do
    {
        cout << "Enter a spot to place a marker (1 - 9): ";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        
    } while (!number > 0 or !number < 8);
    
}
void computer_move(char *spaces, char computer){
    int number;
    srand(time(0));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
        
    }
    
}
bool check_winner(char *spaces, char player, char computer){

    if((spaces[0] != ' ') and (spaces[0] == spaces[1]) and (spaces[1] == spaces[2])){
        spaces [0] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[3] != ' ') and (spaces[3] == spaces[4]) and (spaces[4] == spaces[5])){
        spaces [3] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[6] != ' ') and (spaces[6] == spaces[7]) and (spaces[7] == spaces[8])){
        spaces [6] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[0] != ' ') and (spaces[0] == spaces[3]) and (spaces[3] == spaces[6])){
        spaces [0] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[1] != ' ') and (spaces[1] == spaces[4]) and (spaces[4] == spaces[7])){
        spaces [1] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[2] != ' ') and (spaces[2] == spaces[5]) and (spaces[5] == spaces[8])){
        spaces [2] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[0] != ' ') and (spaces[0] == spaces[4]) and (spaces[4] == spaces[8])){
        spaces [0] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else if((spaces[2] != ' ') and (spaces[2] == spaces[4]) and (spaces[4] == spaces[6])){
        spaces [2] == player ? cout << "YOU WIN!!!\n" : cout << "YOU LOSE!!!\n";
    }
    else {
        return false;
    }

    return true;
}
bool check_tie(char *spaces){

    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
        
    }

    cout << "IT'S A TIE!\n";

    return true;

}