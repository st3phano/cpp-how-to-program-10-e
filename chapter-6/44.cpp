//Fig. 6.9: fig06_09.cpp
//Craps simulation using C++ 11 random numbers
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

unsigned rollDice();

int main() {
	enum class Status {CONTINUE, WON, LOST};

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
	}
	else {
		cout << "Player loses" << endl;
	}
}

unsigned rollDice() {
	static default_random_engine die{static_cast<unsigned>(time(0))};
	uniform_int_distribution<unsigned> roll{1, 6};

	unsigned die1{roll(die)};
	unsigned die2{roll(die)};
	unsigned sum{die1 + die2};

	cout << "Player rolled " << die1 << " + " << die2
		<< " = " << sum << endl;

	return sum;
}
