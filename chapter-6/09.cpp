//Determine the hypotenuse of a right triangle with 2 given sides
#include <iostream>
#include<cmath>

using namespace std;

double hypotenuse(const double side1, const double side2);

int main() {
	cout << "Enter the two sides of a right triangle: ";
	double sideA, sideB;
	cin >> sideA >> sideB;

	cout << "The hypotenuse is " << hypotenuse(sideA, sideB) << endl;
}

double hypotenuse(const double side1, const double side2) {
	return sqrt(side1 * side1 + side2 * side2);
}
