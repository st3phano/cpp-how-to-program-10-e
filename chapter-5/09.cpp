//Display factorials of 1 through 20
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	unsigned long long factorial{1};

	for (unsigned int n{1}; n <= 20; ++n) {
		factorial *= n;
		cout << setw(3) << n << "!" << setw(20) << factorial << endl;
	}
}
