//Determine the decimal equivalent of a binary number
#include <iostream>

using namespace std;

int main() {
	cout << "Enter a binary number: ";
	unsigned int binaryNumber;
	cin >> binaryNumber;

	unsigned int powerOf2{1};
	unsigned int decimalNumber{0};
	while (binaryNumber > 0) {
		decimalNumber += binaryNumber % 10 * powerOf2;
		binaryNumber /= 10;
		powerOf2 *= 2;
	}

	cout << decimalNumber << " is the decimal equivalent\n";
}
