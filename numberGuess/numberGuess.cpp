#include <iostream>
#include <string>

using namespace std;


int main()
{
    int NumberToGuess = rand() % 10;
    string UserGuess;
    int guessCount = 0;

    bool ContinuePlay = true;

    while (ContinuePlay) {

        cout << "Guess how many chocolates do I have?" << endl;

        cin >> UserGuess;

        int userNumber = stoi(UserGuess);

        if (userNumber == NumberToGuess) {

            cout << "How did you know!!!" << endl;
            cout << "poor kid, it took you " << guessCount << " guesses to guess, hehe" << endl;

            cout << "do you want to guess again (y/n)" << endl;

            string playAgain;

            cin >> playAgain;

            if (playAgain == "y") {

                NumberToGuess = rand() % 10;
                guessCount = 0;

            }
            else if (playAgain == "n") {
                cout << "OKK, have a good day" << endl;
                ContinuePlay = false;
            }
        } 
        else if (userNumber > NumberToGuess) {

            cout << "don't have that much chocolate rn" << endl;
            guessCount++;

        }
        else if (userNumber < NumberToGuess) {

            cout << "I have more than your guess, xD" << endl;
            guessCount++;

        }
    }
}

