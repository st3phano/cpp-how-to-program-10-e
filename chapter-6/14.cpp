//(a) quotient = a / b;
//(b) remainder = a % b;
#include <iostream>

void splitInteger(unsigned integer);

int main() {
	splitInteger(4560);
}

void splitInteger(unsigned integer) {
	unsigned copyOfInteger{integer};
	unsigned integerSize{1};

	while (copyOfInteger >= 10) {
		integerSize *= 10;
		copyOfInteger /= 10;
	}

	while (integerSize >= 10) {
		std::cout << (integer / integerSize) << "  ";
		integer %= integerSize;
		integerSize /= 10;
	}

	std::cout << integer << std::endl;
}
