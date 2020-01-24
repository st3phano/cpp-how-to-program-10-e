//Determine if 3 nonzero double values could represent the sides of a triangle
#include <iostream>

using namespace std;

int main() {
	cout << "Enter first side: ";
	double side1;
	cin >> side1;

	cout << "Enter second side: ";
	double side2;
	cin >> side2;

	cout << "Enter third side: ";
	double side3;
	cin >> side3;

	bool triangle{true};
	if (side1 + side2 < side3) {
		triangle = false;
	}
	else if (side1 + side3 < side2) {
		triangle = false;
	}
	else if (side2 + side3 < side1) {
		triangle = false;
	}

	if (triangle) {
		cout << "These sides can form a triangle" << endl;
	}
	else {
		cout << "These sides can NOT form a triangle" << endl;
	}
}
