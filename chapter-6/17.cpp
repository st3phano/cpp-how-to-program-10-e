//Determine the smallest of 3 doubles
#include <iostream>

using namespace std;

double getSmallest(const double n1, const double n2, const double n3);

int main() {
	cout << getSmallest(3.5001, 3.55, 3.555);
}

double getSmallest(const double n1, const double n2, const double n3) {
	if (n1 < n2) {
		if (n3 < n1) {
			return n3;
		}
		else {
			return n1;
		}
	}
	else {
		if (n3 < n2) {
			return n3;
		}
		else {
			return n2;
		}
	}
}
