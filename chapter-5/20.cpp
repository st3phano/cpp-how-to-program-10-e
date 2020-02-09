//Print a diamond shape with asterisks with an user determined number of rows
#include <iostream>

using namespace std;

int main() {
	cout << "Enter an odd number in the range 1 to 19 to specify the number of rows: ";
	unsigned int numberOfRows;
	cin >> numberOfRows;
  
	unsigned int asteriskPerRow{1}, blankPerRow{numberOfRows / 2};

	for (unsigned int row{1}; row <= numberOfRows; ++row) {
		for (unsigned int blank{0}; blank < blankPerRow; ++blank) {
			cout << ' ';
		}

		for (unsigned int asterisk{1}; asterisk <= asteriskPerRow; ++asterisk) {
			cout << '*';
		}

		cout << '\n';

		if (row < numberOfRows / 2 + 1) {
			asteriskPerRow += 2;
			blankPerRow -= 1;
		}
		else {
			asteriskPerRow -= 2;
			blankPerRow += 1;
		}		
	}
}
