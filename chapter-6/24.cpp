//Guess-The-Number game
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
	default_random_engine game(static_cast<unsigned>(time(0)));
	uniform_int_distribution<unsigned> randomNumber{1, 1000};
	char playAgain;

	do
	{
		unsigned correctNumber{randomNumber(game)};
		unsigned guess;

		cout << "I have a number between 1 and 1000.\n"
			"Can you guess my number?\n"
			"Please type your first guess.\n";
		do {			
			cin >> guess;

			if (guess > correctNumber) {
				cout << "Too high. Try again.\n";
			}
			else if (guess < correctNumber) {
				cout << "Too low. Try again.\n";
			}

		} while (guess != correctNumber);

		cout << "Excellent! You guessed the number!\n"
			"Would you like to play again(y or n) ? \n";
		cin >> playAgain;
		cout << endl;

	} while ('y' == playAgain);
}
