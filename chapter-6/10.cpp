//Determine if an integer is multiple of another
#include <iostream>

using namespace std;

bool isMultiple(const int firstInt, const int secondInt);

int main() {
	cout << "Enter two integers to check if the second "
		"is a multiple of the first (EOF to exit): ";
	int int1, int2;

	while (cin >> int1 >> int2) {
		if (isMultiple(int1, int2)) {
			cout << int2 << " is multiple of " << int1 << endl;
		}
		else {
			cout << int2 << " is NOT a multiple of " << int1 << endl;
		}

		cout << "\nEnter two integers to check if the second "
			"is a multiple of the first (EOF to exit): ";
	}
}

bool isMultiple(const int firstInt, const int secondInt) {
	return firstInt % secondInt == 0;
}
