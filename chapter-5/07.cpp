//Find the smallest integer
#include <iostream>

using namespace std;

int main() {

	cout << "Enter the number of values: ";
	unsigned int numberOfValues;
	cin >> numberOfValues;

	cout << "From now on enter a value and hit enter." << endl;
	int smallestValue;
	cin >> smallestValue;

	for (unsigned int c{2}; c <= numberOfValues; ++c) {
		int currentValue;
		cin >> currentValue;

		if (currentValue < smallestValue) {
			smallestValue = currentValue;
		}
	}

	cout << "Smallest value: " << smallestValue << endl;
}
