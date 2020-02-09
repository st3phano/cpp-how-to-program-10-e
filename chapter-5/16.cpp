//Determine Pythagorean triples no larger than 500
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (unsigned int side1{1}; side1 <= 500; ++side1) {
		for (unsigned int side2{1}; side2 <= 500; ++side2) {
			for (unsigned int hypotenuse{1}; hypotenuse <= 500; ++hypotenuse) {
				bool rightTriangle{hypotenuse * hypotenuse == side1 * side1 + side2 * side2};

				if (rightTriangle) {
					cout << "side1: " << setw(4) << side1 
						<< "\tside2: " << setw(4) << side2 
						<< "\thypotenuse: " << setw(4) << hypotenuse << endl;
				}
			}
		}
	}
}
