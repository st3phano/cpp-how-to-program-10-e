//Display 4 different triangle patterns
#include <iostream>

using namespace std;

int main() {
	for (unsigned int asterisksPerRow{1}; asterisksPerRow <= 10; ++asterisksPerRow) {
		for (unsigned int asterisks{1}; asterisks <= asterisksPerRow; ++asterisks) {
			cout << '*';
		}

		cout << '\n';
	}

	cout << '\n';

	for (unsigned int asterisksPerRow{10}; asterisksPerRow >= 1; --asterisksPerRow) {
		for (unsigned int asterisks{1}; asterisks <= asterisksPerRow; ++asterisks) {
			cout << '*';
		}

		cout << '\n';
	}

	cout << '\n';

	unsigned int blanksPerRow{0};
	for (unsigned int asterisksPerRow{10}; asterisksPerRow >= 1; --asterisksPerRow) {

		for (unsigned int blankSpace{0}; blankSpace < blanksPerRow; ++blankSpace) {
			cout << ' ';
		}
		++blanksPerRow;

		for (unsigned int asterisks{1}; asterisks <= asterisksPerRow; ++asterisks) {
			cout << '*';
		}

		cout << '\n';
	}

	cout << '\n';

	blanksPerRow = 9;
	for (unsigned int asterisksPerRow{1}; asterisksPerRow <= 10; ++asterisksPerRow) {

		for (unsigned int blankSpace{0}; blankSpace < blanksPerRow; ++blankSpace) {
			cout << ' ';
		}
		--blanksPerRow;

		for (unsigned int asterisks{1}; asterisks <= asterisksPerRow; ++asterisks) {
			cout << '*';
		}

		cout << '\n';
	}
}
