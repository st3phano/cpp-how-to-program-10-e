//Compare five integers and print the largest and smallest
#include <iostream>

using namespace std;

int main() {
    int int1{0}, int2{0}, int3{0}, int4{0}, int5{0};
    int largest{0}, smallest{0};

    cout << "Enter five integers: ";
    cin >> int1 >> int2 >> int3 >> int4 >> int5;

    largest = int1;
    smallest = int1;

    if (int2 > largest) {
        largest = int2;
    }

    if (int3 > largest) {
        largest = int3;
    }

    if (int4 > largest) {
        largest = int4;
    }

    if (int5 > largest) {
        largest = int5;
    }

    if (int2 < smallest) {
        smallest = int2;
    }

    if (int3 < smallest) {
        smallest = int3;
    }

    if (int4 < smallest) {
        smallest = int4;
    }

    if (int5 < smallest) {
        smallest = int5;
    }

    cout << "Largest: " << largest << "\nSmallest: " << smallest << endl;
}
