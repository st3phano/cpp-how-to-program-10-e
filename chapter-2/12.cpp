//Compare two integers
#include <iostream>

using namespace std;

int main() {
    int int1{0};
    int int2{0};

    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    if (int1 > int2) {
        cout << int1 << " is larger";
    }

    if (int2 > int1) {
        cout << int2 << " is larger";
    }

    if (int1 == int2) {
        cout << "These numbers are equal.";
    }
}
