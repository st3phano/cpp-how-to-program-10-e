//Print a diamond shape using asterisks
#include <iostream>

using namespace std;

int main() {
	unsigned int asteriskPerRow{1}, blankPerRow{4};

	for (unsigned int row{1}; row <= 9; ++row) {
		for (unsigned int blank{0}; blank < blankPerRow; ++blank) {
			cout << ' ';
		}

		for (unsigned int asterisk{1}; asterisk <= asteriskPerRow; ++asterisk) {
			cout << '*';
		}

		cout << '\n';

		if (row < 5) {
			asteriskPerRow += 2;
			blankPerRow -= 1;
		}
		else {
			asteriskPerRow -= 2;
			blankPerRow += 1;
		}		
	}
}
