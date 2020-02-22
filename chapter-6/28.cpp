//Towers of Hanoi using recursion
#include <iostream>

using namespace std;

void moveDisk(const unsigned numberOfDisks, const unsigned originPeg, const unsigned destinationPeg, const unsigned temporaryPeg);

int main() {
    moveDisk(3, 1, 3, 2);
}

void moveDisk(const unsigned numberOfDisks, const unsigned originPeg, const unsigned destinationPeg, const unsigned temporaryPeg) {
    if (1 == numberOfDisks) {
        std::cout << originPeg << " => " << destinationPeg << endl;
    }
    else {
        moveDisk(numberOfDisks - 1, originPeg, temporaryPeg, destinationPeg);
        std::cout << originPeg << " => " << destinationPeg << endl;
        moveDisk(numberOfDisks - 1, temporaryPeg, destinationPeg, originPeg);
    }
}
