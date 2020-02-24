//Fig. 6.9: fig06_09.cpp
//Craps simulation
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned rollDice();
bool gameOfCraps();

int main() {
	unsigned bankBalance{1000};
	unsigned wager{0};
	bool playing{true};

	while (playing) {
		do {
			cout << "Enter your wager: ";
			cin >> wager;

		} while (wager > bankBalance || 0 == wager);

		if (gameOfCraps()) {
			bankBalance += wager;
		}
		else {
			bankBalance -= wager;
		}

		cout << "\nCurrent balance is $" << bankBalance << endl;

		if (0 == bankBalance) {
			cout << "Sorry. You busted!\n";
			break;
		}
		else {
			if (bankBalance <= 100) {
				cout << "Oh, you're going for broke, huh?\n";
			}
			else if (bankBalance >= 2000) {
				cout << "You're up big. Now's the time to cash in your chips!\n";
			}

			cout << "\nWould you like to keep playing? (enter 0 to stop, anything else to keep playing)\n";
			cin >> playing;
		}
	}
}

unsigned rollDice() {
	int die1{1 + rand() % 6};
	int die2{1 + rand() % 6};
	int sum{die1 + die2};

	cout << "Player rolled " << die1 << " + " << die2
		<< " = " << sum << endl;

	return sum;
}

bool gameOfCraps() {
	enum class Status {CONTINUE, WON, LOST};

	srand(static_cast<unsigned>(time(0)));

	unsigned myPoint{0};
	Status gameStatus;
	unsigned sumOfDice{rollDice()};

	switch (sumOfDice) {
	case 7:
	case 11:
		gameStatus = Status::WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = Status::LOST;
		break;
	default:
		gameStatus = Status::CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
	}

	while (Status::CONTINUE == gameStatus) {
		sumOfDice = rollDice();

		if (sumOfDice == myPoint) {
			gameStatus = Status::WON;
		}
		else {
			if (7 == sumOfDice) {
				gameStatus = Status::LOST;
			}
		}
	}

	if (Status::WON == gameStatus) {
		cout << "Player wins" << endl;
		return true;
	}
	else {
		cout << "Player loses" << endl;
		return false;
	}
}
