//Fig. 5.6: Interest.cpp
//Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> //for pow function

using namespace std;

int main() {
	// set floating-point number format
	cout << fixed << setprecision(2);	

	for (unsigned int rate{5}; rate <= 10; ++rate) {
		double principal{1000.00};
		double interestRate{static_cast<double>(rate) / 100};

		cout << "Initial principal: " << principal << endl;
		cout << "    Interest rate: " << interestRate << endl;
		cout << "Year" << setw(20) << "Amount on deposit" << endl;

		interestRate += 1;
		for (unsigned int year{1}; year <= 10; ++year) {
			double amount = principal * pow(interestRate, year);

			cout << setw(4) << year << setw(20) << amount << endl;
		}

		cout << endl;
	}
}
