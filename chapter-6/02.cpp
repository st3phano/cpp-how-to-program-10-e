//Parking charges calculator
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double calculateCharges(const double hours);

int main() {
	cout << "Enter the hours parked for each of the 3 customers:\n";
	double hoursCar1, hoursCar2, hoursCar3;
	cin >> hoursCar1 >> hoursCar2 >> hoursCar3;
	double totalHours{hoursCar1 + hoursCar2 + hoursCar3};

	double feeCar1{calculateCharges(hoursCar1)};
	double feeCar2{calculateCharges(hoursCar2)};
	double feeCar3{calculateCharges(hoursCar3)};
	double totalFee{feeCar1 + feeCar2 + feeCar3};

	cout << fixed << setprecision(2);
	cout << left << setw(10) << "Car" << right << setw(10) << "Hours" << setw(10) << "Charge" << endl;
	cout << left << setw(10) << "1" << right << setw(10) << hoursCar1 << setw(10) << feeCar1 << endl;
	cout << left << setw(10) << "2" << right << setw(10) << hoursCar2 << setw(10) << feeCar2 << endl;
	cout << left << setw(10) << "3" << right << setw(10) << hoursCar3 << setw(10) << feeCar3 << endl;
	cout << left << setw(10) << "TOTAL" << right << setw(10) << totalHours << setw(10) << totalFee << endl;
}

const double calculateCharges(const double hours) {
	const double minimumHours{3};

	const double minimumFee{20.00};
	const double feePerHour{5.00};
	const double maximumFee{50.00};

	if (hours <= minimumHours) {
		return minimumFee;
	}
	else {
		double fee{minimumFee + ((ceil(hours) - minimumHours) * feePerHour)};

		if (fee > maximumFee) {
			return maximumFee;
		}
		else {
			return fee;
		}
	}
}
