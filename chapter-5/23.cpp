//Fig. 5.14: ContinueTest.cpp
//using if to skip an iteration of a for statement
#include <iostream>

using namespace std;

int main() {
	for (unsigned int count{1}; count <= 10; ++count) {
		if (count != 5) {
			cout << count << " ";
		}
	}

	cout << "\nUsed continue to skip printing 5" << endl;
}
