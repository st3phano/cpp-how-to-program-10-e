//Decrypt the four-digit integer
#include <iostream>

using namespace std;

int main() {
	cout << "Enter the encrypted value: ";
	unsigned int encryptedValue;
	cin >> encryptedValue;

	unsigned int digit1{encryptedValue % 10};
	encryptedValue /= 10;
	unsigned int digit2{encryptedValue % 10};
	encryptedValue /= 10;
	unsigned int digit3{encryptedValue % 10};
	encryptedValue /= 10;
	unsigned int digit4{encryptedValue % 10};

	unsigned int decryptedValue{0};
	decryptedValue += (digit3 + 3) % 10;
	decryptedValue += (digit4 + 3) % 10 * 10;
	decryptedValue += (digit1 + 3) % 10 * 100;
	decryptedValue += (digit2 + 3) % 10 * 1000;

	cout << "Decrypted value: " << decryptedValue << endl;
}
