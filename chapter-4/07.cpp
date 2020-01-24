//Determine the largest of 10 integers input by the user
#include <iostream>

using namespace std;

int main() {
	cout << "Enter the 1th number of 10: ";
	int largest;
	cin >> largest;

	unsigned int counter{1};
	while (++counter <= 10) {
		cout << "Enter the " << counter << "th number of 10: ";
		int number;
		cin >> number;

		if (number > largest) {
			largest = number;
		}
	}

	cout << "\nLargest number is: " << largest << endl;
}
