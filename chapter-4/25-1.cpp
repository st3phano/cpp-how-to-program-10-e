//Compute the factorial
#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number to take the factorial: ";
	unsigned int number;
	cin >> number;

	cout << number << "! = ";

	unsigned int factorial{1};
	if (number > 1) {
		while (number > 1) {
			factorial *= number--;
		}
	}

	cout << factorial << endl;
}
