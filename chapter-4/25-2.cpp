//Estimate the value of mathematical e
#include <iostream>

using namespace std;

int main() {
	cout << "How many terms to use in the summation: ";
	unsigned int terms;
	cin >> terms;
	unsigned int precision{terms};

	double e{1};
	while (terms > 0) {

		double factorial{1};
		unsigned int currentTerm{terms};
		while (currentTerm > 1) {
			factorial *= currentTerm;
			--currentTerm;
		}

		e += 1 / factorial;
		--terms;
	}

	cout << "e is approximately " << e << endl;
}
