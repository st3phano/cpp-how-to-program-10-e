//Recursive exponentiation
int power(int base, unsigned exponent) {
	if (1 == exponent) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}
