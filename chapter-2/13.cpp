//Print the sum, average, product, smallest and largest
//of 3 integers
#include <iostream>

using namespace std;

int main() {
    int int1{0}, int2{0}, int3{0};

    cout << "Input three different integers: ";
    cin >> int1 >> int2 >> int3;

    int sum{int1 + int2 + int3};
    int average{sum/3};
    int product{int1 * int2 * int3};

    int smallest{int1}, largest{int1};

    if (int2 < smallest) {
        smallest = int2;
    }

    if (int3 < smallest) {
        smallest = int3;
    }

    if (int2 > largest) {
        largest = int2;
    }

    if (int3 > largest) {
        largest = int3;
    }

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
}
