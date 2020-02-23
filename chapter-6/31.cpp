//Determine the greatest common divisor using recursion
//x must be larger than y
unsigned gcd(const unsigned x, const unsigned y) {
	if (0 == y) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
