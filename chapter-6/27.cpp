//Iterative fuction fibonacci
#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long number);

int main() {
	for (unsigned int counter{0}; counter <= 10; ++counter) {
		cout << "fibonacci(" << counter << ") = "
			<< fibonacci(counter) << endl;
	}

	cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
	cout << "fibonacci(30) = " << fibonacci(30) << endl;
	cout << "fibonacci(35) = " << fibonacci(35) << endl;
}

unsigned long fibonacci(unsigned long number) {
	unsigned long a{0};
	unsigned long b{1};

	if (number == a) {
		return a;
	}

	while (number > 1) {
		b += a;
		a = b - a;
		--number;
	}

	return b;
}
