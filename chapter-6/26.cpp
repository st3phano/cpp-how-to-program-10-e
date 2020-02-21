//Recursive exponentiation
int power(const int base, const unsigned exponent) {
	if (1 == exponent) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}
