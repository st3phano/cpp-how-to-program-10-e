//Round values to the nearest integer, tenth, hundreth and thousandth
#include <iostream>
#include <cmath>

using namespace std;

int roundToInteger(const double& number);
double roundToTenths(const double& number);
double roundToHundredths(const double& number);
double roundToThousandths(const double& number);

int main() {
	cout << "Enter a value to be rounded (EOF to exit): ";
	double x;

	while (cin >> x) {
		int y{static_cast<int>(floor(x + 0.5))};

		cout << "Original number: " << x << endl;
		cout << "Rounded to nearest integer: " << roundToInteger(x) << endl;
		cout << "Rounded to nearest tenth: " << roundToTenths(x) << endl;
		cout << "Rounded to nearest hundredth: " << roundToHundredths(x) << endl;
		cout << "Rounded to nearest thousandth: " << roundToThousandths(x) << endl;
		cout << "\nEnter a value to be rounded (EOF to exit): ";
	}
}

int roundToInteger(const double& number) {
	return floor(number + 0.5);
}

double roundToTenths(const double& number) {
	return floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(const double& number) {
	return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(const double& number) {
	return floor(number * 1000 + 0.5) / 1000;
}
