//Determine the product of odd ints from 1 to 15
#include <iostream>

using namespace std;

int main() {
	unsigned int total{1};

	for (unsigned int n{1}; n <= 15; n += 2) {
		total *= n;
	}

	cout << "The product of odd ints from 1 to 15 is " << total << endl;
}
