//Determine which numbers from 1 to 1000 are perfect numbers
#include <iostream>

using namespace std;

bool isPerfect(const unsigned number);
void printDivisors(const unsigned number);

int main() {
	const unsigned lastNumber{1000};

	for (unsigned n{1}; n <= lastNumber; ++n) {
		if (isPerfect(n)) {
			printDivisors(n);
		}
	}
}

bool isPerfect(const unsigned number) {
	unsigned divisor{number / 2};
	unsigned sumOfDivisors{1};

	while (divisor > 1) {
		if (number % divisor == 0) {
			sumOfDivisors += divisor;
		}

		--divisor;
	}

	return number == sumOfDivisors;
}

void printDivisors(const unsigned number) {
	unsigned divisor{number / 2};

	std::cout << number << " = ";

	while (divisor > 1) {
		if (number % divisor == 0) {
			std::cout << divisor << " + ";
		}

		--divisor;
	}

	std::cout << 1 << std::endl;
}
