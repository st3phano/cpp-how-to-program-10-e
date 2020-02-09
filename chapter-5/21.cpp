//Fig. 5.13: BreakTest.cpp
//sentinel value exiting a for statement
#include <iostream>

using namespace std;

int main() {
	unsigned int count; //control variable also used after loop

	for (count = 1; count <= 10 && count != 5; ++count) {
		cout << count << " ";
	}

	cout << "\nBroke out of loop at count = " << count << endl;
}
