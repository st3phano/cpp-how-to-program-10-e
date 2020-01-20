//Print the numbers from 1 to 4
#include <iostream>

using namespace std;

int main() {
    char character{0};
    cout << "Enter a character: ";
    cin >> character;

    cout << "Integer equivalent: " << static_cast<int>(character);
}
