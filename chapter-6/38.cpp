//Determine the area of a circle
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

inline double circleArea(const double radius) {
	return radius * radius * M_PI;
}

int main() {
	cout << "Enter the radius of the circle: ";
	double circleRadius;
	cin >> circleRadius;

	cout << "The area of the circle is " << circleArea(circleRadius) << endl;
}
