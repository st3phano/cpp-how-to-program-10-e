//Display a square of characters and size determined by the user
#include <iostream>

using namespace std;

void solidSquare(const char fillCharacter, const unsigned side);

int main() {
	cout << "Enter the character to be used in the square: ";
	char charToUse;
	cin >> charToUse;

	cout << "Enter the size of the square: ";
	unsigned size;
	cin >> size;
	
	solidSquare(charToUse, size);
}

void solidSquare(const char fillCharacter, const unsigned side) {
	for (unsigned row{1}; row <= side; ++row) {
		for (unsigned column{1}; column <= side; ++column) {
			cout << fillCharacter;
		}
		cout << endl;
	}
}
