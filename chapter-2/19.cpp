//Read two integers and determines
//if the first is a multiple of the second
#include <iostream>

using namespace std;

int main() {
    int int1{0}, int2{0};

    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    if (int1 % int2 == 0) {
        cout << int1 << " is a multiple of " << int2 << endl;
    }

    if (int1 % int2 != 0) {
        cout << int1 << " is not a multiple of " << int2 << endl;
    }
}
