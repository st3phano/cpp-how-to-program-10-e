//Approximate the value of pi
//131,128 terms to start getting the value 3.14159
#include <iostream>

using namespace std;

int main() {
	double pi{4};

	cout << "Enter the number of terms to use: ";
	unsigned int terms;
	cin >> terms;

	unsigned int denominator{3};
	for (unsigned int currentTerm{2}; currentTerm <= terms; ++currentTerm) {
		if (currentTerm % 2 == 0) {
			pi -= 4. / denominator;
		}
		else {
			pi += 4. / denominator;
		}

		denominator += 2;
	}

	cout << "Value of pi: " << pi << endl;
}
