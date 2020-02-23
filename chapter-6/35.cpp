//Math library functions testing
#include <iostream>

using namespace std;

void mathFunctions(const unsigned value);

int main() {
	for (unsigned i{1}; i <= 5; ++i) {
		mathFunctions(i);
	}
}

void mathFunctions(const unsigned value) {
	std::cout << "sine of " << value << " radians = " << std::sin(value) << std::endl;
	std::cout << "cosine of " << value << " radians = " << std::cos(value) << std::endl;
	std::cout << "tangent of " << value << " radians = " << std::tan(value) << std::endl;
	std::cout << "square root of " << value << " = " << std::sqrt(value) << std::endl;
	std::cout << value << "^" << value << " = " << std::pow(value, value) << std::endl;
	std::cout << "e^" << value << " = " << std::exp(value) << std::endl;	
	std::cout << "logarithm of " << value << " using base 10" << " = " << std::log10(value) << std::endl;
	std::cout << "natural logarithm of " << value << " = " << std::log(value) << std::endl;	
	std::cout << std::endl;
}
