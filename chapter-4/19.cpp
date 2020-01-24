//Display a checkboard pattern using only 3 output statements
#include <iostream>

using namespace std;

int main() {
	unsigned int row{1};

	while (row <= 8) {
		if (row % 2 == 0) {
			cout << ' ';
		}

		unsigned int column{1};
		while (column <= 8) {
			cout << "* ";
			++column;
		}

		cout << endl;
		++row;
	}
}
