//Reads the radius of a circle as an integer
//prints diameter, circumference and area
#include <iostream>

using namespace std;

int main() {
    int radius{0};

    cout << "Enter the radius as an integer: ";
    cin >> radius;

    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * 3.14159 * radius << endl;
    cout << "Area: " << 3.14159 * radius * radius << endl;
}
