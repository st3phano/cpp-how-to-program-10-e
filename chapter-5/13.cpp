//Determine the total retail value of products sold
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << fixed << setprecision(2);
	double totalValue{0};

	int product, quantitySold;	
	do {
		cout << "Enter the product number and quantity sold " <<
			"(Use -1 to end input): ";		
		cin >> product >> quantitySold;

		double retailPrice{0};
		switch (product) {
		case 1:
			retailPrice = 2.98;
			break;
		case 2:
			retailPrice = 4.50;
			break;
		case 3:
			retailPrice = 9.98;
			break;
		case 4:
			retailPrice = 4.49;
			break;
		case 5:
			retailPrice = 6.87;
			break;
		}

		totalValue += retailPrice * quantitySold;
	} while (product != -1);

	cout << "Total retail value is: $" << totalValue << endl;
}
