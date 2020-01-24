//Determine if 3 nonzero integers are sides of a right triangle
#include <iostream>

using namespace std;

int main() {
	cout << "Enter 3 positive integers: ";
	unsigned int side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	//determine the largest side
	unsigned int hypotenuse, cathetusA, cathetusB;
	if (side1 > side2) {
		cathetusA = side2;
		if (side1 > side3) {
			hypotenuse = side1;
			cathetusB = side3;
		}
		else {
			hypotenuse = side3;
			cathetusB = side1;
		}
	}
	else {
		cathetusA = side1;
		if (side2 > side3) {
			hypotenuse = side2;
			cathetusB = side3;
		}
		else {
			hypotenuse = side3;
			cathetusB = side2;
		}
	}

	bool rightTriangle = (hypotenuse * hypotenuse) ==
		(cathetusA * cathetusA) + (cathetusB * cathetusB);

	if (rightTriangle) {
		cout << "These values can form a right triangle\n";
	}
	else {
		cout << "These values can NOT form a right triangle\n";
	}
}
