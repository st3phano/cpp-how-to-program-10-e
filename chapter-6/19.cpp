//Determine all the prime numbers between 2 and 10000
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(const unsigned number);

int main() {
	unsigned int lastNumber{10000};

	for (unsigned n{2}; n <= lastNumber; ++n) {
		if (isPrime(n)) {
			cout << n << "/";
		}
	}
}

bool isPrime(const unsigned number) {
	unsigned divisor{static_cast<unsigned>(sqrt(number))};

	while (divisor > 1) {
		if (number % divisor == 0) {
			return false;
		}

		--divisor;
	}

	return true;
}
