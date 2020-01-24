//Fig. 4.14: Analysis.cpp
//Analysis of examination results using nested control statements.
#include <iostream>

using namespace std;

int main() {
	unsigned int passes{0}, failures{0}, studentCounter{1};

	while (studentCounter <= 10) {
		cout << "Enter result (1 = pass, 2 = fail): ";
		int result;
		cin >> result;

		if (result == 1) {
			++passes;
			++studentCounter;
		}
		else if (result == 2) {
			++failures;
			++studentCounter;
		}
	}

	cout << "Passed " << passes << "\nFailed: " << failures << endl;

	if (passes > 8) {
		cout << "Bonus to instructor!" << endl;
	}
}
