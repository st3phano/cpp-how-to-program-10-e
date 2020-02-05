//Encrypt four-digit integer
#include <iostream>

using namespace std;

int main() {
	cout << "Enter a four-digit integer: ";
	unsigned int fourDigitInt;
	cin >> fourDigitInt;

	unsigned int digit1{fourDigitInt % 10};
	fourDigitInt /= 10;
	unsigned int digit2{fourDigitInt % 10};
	fourDigitInt /= 10;
	unsigned int digit3{fourDigitInt % 10};
	fourDigitInt /= 10;
	unsigned int digit4{fourDigitInt};

	digit1 = (digit1 + 7) digit1 > 10 ? % 10 : ;
	digit2 = (digit2 + 7) % 10;
	digit3 = (digit3 + 7) % 10;
	digit4 = (digit4 + 7) % 10;

	unsigned int encryptedValue{0};
	encryptedValue += digit3;
	encryptedValue += digit4 * 10;
	encryptedValue += digit1 * 100;
	encryptedValue += digit2 * 1000;

	cout << "Encrypted value: " << encryptedValue << endl;
}
