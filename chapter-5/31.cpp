//Fig. 5.7: Interest.cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Enter integer interest rate and divisor. For example:\n"
		<< "for     2%, enter:    2 100\n"
		<< "for   2.3%, enter:   23 1000\n"
		<< "for  2.37%, enter:  237 10000\n"
		<< "for 2.375%, enter: 2375 100000\n> ";

	int rate;
	int divisor;
	cin >> rate >> divisor;

	cout << static_cast<double>(rate) / (divisor / 100) << "% interest rate." << endl;
}
