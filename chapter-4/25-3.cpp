//Estimate the value of e^x
#include <iostream>

using namespace std;

int main() {
	cout << "Value of x to compute e^x: ";
	unsigned int x;
	cin >> x;

	cout << "How many terms to use in the summation: ";
	unsigned int terms;
	cin >> terms;

	double e{1};
	while (terms > 0) {
		unsigned int factor{terms}, numerator{x};
		double factorial{1};

		while (factor > 1) {
			numerator *= x;
			factorial *= factor;
			--factor;
		}

		e += numerator / factorial;
		--terms;
	}

	cout << "e is approximately " << e << endl;
}
