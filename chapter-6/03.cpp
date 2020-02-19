//Round values to the nearest integer
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Enter a value to be rounded (EOF to exit): ";
	double x;

	while (cin >> x) {
		int y{static_cast<int>(floor(x + 0.5))};

		cout << "Original number: " << x << "\nRounded number: " << y << endl;
		cout << "Enter a value to be rounded (EOF to exit): ";
	}
}
