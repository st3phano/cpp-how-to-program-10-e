//Determining a circle's diameter, circumference and area
#include <iostream>

using namespace std;

int main() {
	double pi{3.14159};

	cout << "Enter the radius of a circle: ";
	double radius;
	cin >> radius;

	double diamenter{2 * radius};
	double circumference{2 * pi * radius};
	double area{pi * radius * radius};

	cout << "Diameter: " << diamenter << endl;
	cout << "Circunference: " << circumference << endl;
	cout << "Area: " << area << endl;
}
