//Towers of Hanoi using iteration
#include <iostream>

using namespace std;

void moveDisk(const unsigned numberOfDisks, const unsigned originPeg, const unsigned destinationPeg, const unsigned temporaryPeg);

int main() {
    moveDisk(5, 1, 3, 2);
}

void moveDisk(const unsigned numberOfDisks, const unsigned originPeg, const unsigned destinationPeg, const unsigned temporaryPeg) {
    unsigned disksOnOrigin{numberOfDisks};
    unsigned disksOnDestination{0};
    unsigned disksOnTemporary{0};

    while (disksOnDestination < numberOfDisks) {

    }
}
