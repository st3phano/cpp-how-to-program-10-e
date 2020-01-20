//Print the ASCII equivalent
#include <iostream>

using namespace std;

int main() {
    char character{0};
    cout << "Enter a character: ";
    cin >> character;

    cout << "Integer equivalent: " << static_cast<int>(character);
}
