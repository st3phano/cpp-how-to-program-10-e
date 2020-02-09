//Display 4 different triangle patterns side by side
#include <iostream>

using namespace std;

int main() {
	for (unsigned int row{1}; row <= 10; ++row) {
		for (unsigned int asterisks{1}; asterisks <= row; ++asterisks) {
			cout << '*';
		}
		for (unsigned int blankSpace{0}; blankSpace < 10 - row; ++blankSpace) {
			cout << ' ';
		}

		cout << '\t';

		for (unsigned int asterisks{10}; asterisks >= row; --asterisks) {
			cout << '*';
		}
		for (unsigned int blankSpace{0}; blankSpace < row - 1; ++blankSpace) {
			cout << ' ';
		}

		cout << '\t';

		for (unsigned int blankSpace{0}; blankSpace < row - 1; ++blankSpace) {
			cout << ' ';
		}
		for (unsigned int asterisks{10}; asterisks >= row; --asterisks) {
			cout << '*';
		}

		cout << '\t';

		for (unsigned int blankSpace{10}; blankSpace > row; --blankSpace) {
			cout << ' ';
		}
		for (unsigned int asterisks{1}; asterisks <= row; ++asterisks) {
			cout << '*';
		}

		cout << '\n';
	}
}
