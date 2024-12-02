#include<iostream>
#include<cstdlib>   // For rand() and srand()
#include<ctime>     //For time()
using namespace std;

void playGame() {
    //Initialize random seed
    srand(static_cast<unsigned>(time(0)));

    //generate a random number between 1 and 100
    int randomNumber = rand()%100+1;
    int userGuess;
    int attempts = 0;

    cout<<"Welcome to the Number Guessing Game!\n";
    cout<<"I Have chosen a number betwoon 1 and 100. Can you guess what it is?\n";

    //game loop
    while(true){
        cout<<"Enter your guess: ";
        cin>> userGuess;
        attempts++;

        if(userGuess < randomNumber){
            cout<<"Too low! try again.\n";
        } else if(userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        }else{
           cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break; 
        }
    }
}

int main(){
    char playAgain;

    do{
        playGame();  //start the game
        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;
    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing! Goodbye!\n";
    return 0;
}

