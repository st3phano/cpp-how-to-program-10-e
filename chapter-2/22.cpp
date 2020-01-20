//Print the digits of a five-digit int
#include <iostream>

using namespace std;

int main() {
    int integer{0};

    cout << "Enter a five-digit integer: ";
    cin >> integer;

    cout << integer / 10'000 << "   " << integer % 10'000 / 1'000 << "   " <<
            integer % 1'000 / 100 << "   " << integer % 100 / 10 << "   " <<
            integer % 10;
}
