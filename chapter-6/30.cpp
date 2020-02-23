//Fig. 6.25: fig06_25.cpp
//Recursive function factorial
#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long number);

int main() {
	for (unsigned counter{0}; counter <= 10; ++counter) {
		cout << setw(2) << counter << "! = " << factorial(counter)
			<< "\n\n";
	}
}

unsigned long factorial(unsigned long number) {
	if (number <= 1) {
		return 1;
	}
	else {
		for (unsigned i{1}; i <= number; ++i) {
			cout << ' ';
		}
		cout << number << "! = "<< number << " * factorial(" << number - 1 << ")" << endl;

		unsigned long factorialOfnumberMinusOne{factorial(number - 1)};

		for (unsigned i{1}; i <= number; ++i) {
			cout << ' ';
		}
		cout << number << "! = " << number << " * " << factorialOfnumberMinusOne << endl;

		return number * factorialOfnumberMinusOne;		
	}
}
