//Determine if an integer is odd or even
#include <iostream>

using namespace std;

int main() {
    int integer{0};

    cout << "Enter an integer: ";
    cin >> integer;
    
    int remainder{integer % 2};

    if (remainder == 0) {
        cout << integer << " is even." << endl;
    }

    if (remainder == 1) {
        cout << integer << " is odd." << endl;
    }
}
