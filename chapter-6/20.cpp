//Reverse the digits of a positive integer
unsigned reverseDigits(unsigned number) {
	unsigned reversedNumber{0};

	while (number > 0) {
		reversedNumber = reversedNumber * 10 + number % 10;
		number /= 10;
	}

	return reversedNumber;
}
