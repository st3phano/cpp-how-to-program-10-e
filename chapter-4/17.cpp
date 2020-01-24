//Determine if an integer is a palindrome
#include <iostream>

using namespace std;

int main() {
	cout << "Enter a positive integer: ";
	unsigned int number;
	cin >> number;
	unsigned int copyOfNumber{number};

	unsigned int inverseNumber{0};
	while (number > 0) {
		inverseNumber = inverseNumber * 10 + number % 10;
		number /= 10;
	}

	if (copyOfNumber == inverseNumber) {
		cout << copyOfNumber << " is a palindrome.\n";
	}
	else {
		cout << copyOfNumber << " is NOT a palindrome.\n";
	}
}
