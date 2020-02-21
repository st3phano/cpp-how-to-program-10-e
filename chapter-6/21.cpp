//Determine the greatest common divisor of two unsigned integers
unsigned gcd(unsigned number1, unsigned number2) {
	unsigned smallestNumber{number1 < number2 ? number1 : number2};

	if (number1 % smallestNumber == 0 && number2 % smallestNumber == 0) {
		return smallestNumber;
	}
	else {
		smallestNumber /= 2;
	}

	while (smallestNumber > 1) {
		if (number1 % smallestNumber == 0 && number2 % smallestNumber == 0) {
			return smallestNumber;
		}

		--smallestNumber;
	}

	return 1;
}
