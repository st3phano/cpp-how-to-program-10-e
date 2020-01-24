//Determine the largest of 10 integers
#include <iostream>

using namespace std;

int main() {
	unsigned int counter{1};
	cout << "Enter number "<< counter << " of 10: ";
	int largest;
	cin >> largest;
	
	while (++counter <= 10) {
		cout << "Enter number "<< counter << " of 10: ";
		int number;
		cin >> number;

		if (number > largest) {
			largest = number;
		}
	}

	cout << "\nLargest number is: " << largest << endl;
}
