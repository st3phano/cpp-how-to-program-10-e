//Display a square of asterisks of size determined by the user
#include <iostream>

using namespace std;

void squareOfAsterisks(const unsigned side);

int main() {
	cout << "Enter the size of the square: ";
	unsigned size;
	cin >> size;

	squareOfAsterisks(size);
}

void squareOfAsterisks(const unsigned side) {
	for (unsigned row{1}; row <= side; ++row) {
		for (unsigned column{1}; column <= side; ++column) {
			cout << '*';
		}
		cout << endl;
	}
}
