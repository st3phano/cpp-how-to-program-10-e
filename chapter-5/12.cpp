//Display bars of asterisks
#include <iostream>

using namespace std;

int main() {
	cout << "Enter 5 numbers between 1 and 30:" << endl;
	unsigned int bar1, bar2, bar3, bar4, bar5;
	cin >> bar1 >> bar2 >> bar3 >> bar4 >> bar5;

	for (unsigned int asterisks{1}; asterisks <= bar1; ++asterisks) {
		cout << '*';
	}

	cout << endl;

	for (unsigned int asterisks{1}; asterisks <= bar2; ++asterisks) {
		cout << '*';
	}

	cout << endl;

	for (unsigned int asterisks{1}; asterisks <= bar3; ++asterisks) {
		cout << '*';
	}

	cout << endl;

	for (unsigned int asterisks{1}; asterisks <= bar4; ++asterisks) {
		cout << '*';
	}

	cout << endl;

	for (unsigned int asterisks{1}; asterisks <= bar5; ++asterisks) {
		cout << '*';
	}
}
