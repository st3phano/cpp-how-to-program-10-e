//FIg. 5.6: Interest.cpp
//Compound-interest calculations with for
#include <iostream>
#include <iomanip>
#include <cmath> //for pow function

using namespace std;

int main() {
	//set floating-point number format
	cout << fixed << setprecision(2);

	for (unsigned int rate{5}; rate <= 10; ++rate) {
		double principal{24.00};
		double interestRate{rate / 100.};

		cout << "Initial principal: " << principal << endl;
		cout << "    Interest rate:  " << interestRate << endl;

		cout << "\nYear" << setw(30) << "Amount on deposit" << endl;

		interestRate += 1; //formula requirement
		for (unsigned int year{1}; year <= 394; year += 131) {
			double amount = principal * pow(interestRate, year);

			cout << setw(4) << (1626 + year) << setw(30) << amount << endl;
		}

		cout << '\n';
	}
}
