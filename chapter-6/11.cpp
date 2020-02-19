//Determine if a number is even
#include <iostream>

using namespace std;

bool isEven(const int integer);

int main() {

	cout << "Enter an integer (EOF to exit): ";
	int number;
	
	while (cin >> number) {
		if (isEven(number)) {
			cout << number << " is even." << endl;
		}
		else {
			cout << number << " is odd." << endl;
		}

		cout << "\nEnter an integer (EOF to exit): ";
	}

}

bool isEven(const int integer) {
	return integer % 2 == 0;
}
