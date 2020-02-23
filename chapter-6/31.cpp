//Determine the greatest common divisor using recursion
//x must be larger than y
#include <iostream>

using namespace std;

unsigned gcd(unsigned x, unsigned y);

int main() {
	cout << gcd(20, 3);

}

unsigned gcd(unsigned x, unsigned y) {
	if (0 == y) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
