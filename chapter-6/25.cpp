//Guess-The-Number game counting tries
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
		unsigned tries{0};

		cout << "I have a number between 1 and 1000.\n"
			"Can you guess my number?\n"
			"Please type your first guess.\n";
		do {			
			cin >> guess;
			++tries;

			if (guess > correctNumber) {
				cout << "Too high. Try again.\n";
			}
			else if (guess < correctNumber) {
				cout << "Too low. Try again.\n";
			}

		}while (guess != correctNumber);

		if (tries < 10) {
			cout << "Either you know the secret or you got lucky!\n";
		}
		else if (10 == tries) {
			cout << "Ahah! You know the secret!\n";
		}
		else {
			cout << "You should be able to do better!\n";
		}

		cout << "You guessed the number!\n"
			"Would you like to play again(y or n) ? \n";
		cin >> playAgain;
		cout << endl;

	} while ('y' == playAgain);
}
