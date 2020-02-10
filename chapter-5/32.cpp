//Showing that double values are approximate
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double variable{123.02};
	cout << fixed;

	for (unsigned int precision{1}; precision <= 15; ++precision) {
		cout << setprecision(precision) << variable << endl;
	}	
}
