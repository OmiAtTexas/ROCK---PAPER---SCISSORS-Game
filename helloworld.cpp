// ROCK PAPER SCISSORS GAME

#include <iostream>
#include <ctime>
using namespace std;


char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){

    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}


char getUserChoice(){

    char player;
    cout << "ROCK - PAPER - SCISSORS GAME !!!" << endl;

    do{

        cout << "Choose one the following" << endl;
        cout << "*********************************" << endl;
        cout << " 'r' for ROCK! " << endl
            << " 'p' for PAPER! " << endl
            << " 's' for SCISSORS!" << endl;
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){

    srand(time(NULL));
    int num = (rand() % 3) + 1;
    
    switch(num){

        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;

}
void showChoice(char choice){

    switch(choice){
        case 'r': cout << "ROCK" << endl;
                break;
        case 'p': cout << "PAPER" << endl;
                break;
        case 's': cout << "SCISSORS" << endl;
                break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                        cout << "IT'S A TIE!" << endl;
                    }
                    else if(computer == 'p'){
                            cout << "YOU LOOSE!" << endl;
                    }
                    else{
                        cout << "YOU WIN!" << endl;
                    }
                    break;
        case 'p': if(computer == 'r'){
                        cout << "YOU WIN!" << endl;
                    }
                    else if(computer == 'p'){
                            cout << "IT'S A TIE!" << endl;
                    }
                    else{
                        cout << "YOU LOOSE!" << endl;
                    }
                    break;
        case 's': if(computer == 'r'){
                        cout << "YOU LOOSE!" << endl;
                    }
                    else if(computer == 'p'){
                            cout << "YOU WIN!" << endl;
                    }
                    else{
                        cout << "IT'S A TIE!" << endl;
                    }
                    break;
    }

}