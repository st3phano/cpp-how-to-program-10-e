//Asks for two integers and
//print the sum, product, difference and quotient
#include <iostream>

using namespace std;

int main() {
    int int1{0}, int2{0};

    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;
}
