//Infinite loop of multiples of 2
#include <iostream>

using namespace std;

int main() {
	unsigned int powerOf2{1};

	while (true) {
		cout << powerOf2 << endl;
		powerOf2 *= 2;
	}
}
