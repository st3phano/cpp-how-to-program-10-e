//Determines if an integer is odd or even
#include <iostream>

using namespace std;

int main() {
    int integer{0};

    cout << "Enter an integer: ";
    cin >> integer;

    if (integer % 2 == 0) {
        cout << integer << " is even." << endl;
    }

    if (integer % 2 == 1) {
        cout << integer << " is odd." << endl;
    }
}
