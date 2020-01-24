//Print a hollow square of asterisks and blanks based on input size
#include<iostream>

using namespace std;

int main() {
	cout << "Enter the size of the square: ";
	unsigned int size;
	cin >> size;

	unsigned int row{1};
	while (row <= size) {
		unsigned int cell{1};

		while (cell <= size) {
			if (row == 1) {
				cout << "*";
			}
			else if (row == size) {
				cout << "*";
			}
			else if (cell == 1) {
				cout << "*";
			}
			else if (cell == size) {
				cout << "*";
			}
			else {
				cout << " ";
			}

			++cell;
		}

		cout << endl;
		++row;
	}
}
