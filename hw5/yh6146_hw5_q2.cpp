#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int secretNum, guessNum, guessLeft = 5;
    int min = 1, max = 100;

    srand(time(0));
    secretNum = rand() % 100 + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    
    while(guessLeft > 0){
        cout << "Range: [" << min << ", " << max << "], Number of guesses left: " << guessLeft << endl;
        cout << "Your guess: ";
        cin >> guessNum;
        guessLeft--;

        if(guessNum == secretNum){
            cout << "Congrats! You guessed my number in " << 5 - guessLeft << " guesses." << endl;
            break;
        }
        else if(guessNum < secretNum){
            cout << "Wrong! My number is bigger." << endl;
            min = guessNum + 1;
        }
        else{
            cout << "Wrong! My number is smaller." << endl;
            max = guessNum - 1;
        }
    }
    cout << "Out of guesses! My number is "<< secretNum << endl;

    return 0;
}