//Assume that exponent is a positive, nonzero integer and that base is an integer.
int integerPower(int base, unsigned exponent) {
	int result{base};

	for (unsigned i{2}; i <= exponent; ++i) {
		result *= base;
	}

	return result;
}
