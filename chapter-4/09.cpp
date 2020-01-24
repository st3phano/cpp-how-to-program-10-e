//Determine the 2 largest of 10 integers
#include <iostream>

using namespace std;

int main() {
	unsigned int counter{1};

	cout << "Enter number " << counter << " of 10: ";
	int largest;
	cin >> largest;

	int secondLargest{largest};

	while (++counter <= 10) {
		cout << "Enter number " << counter << " of 10: ";
		int number;
		cin >> number;

		if (number > secondLargest) {
			if (number > largest) {
				secondLargest = largest;
				largest = number;
			}
			else {
				secondLargest = number;
			}
		}
	}

	cout << "\nSecond largest: " << secondLargest;
	cout << "\nLargest: " << largest << endl;
}
