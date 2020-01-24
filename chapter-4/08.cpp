//Display multiples of 10, 100 and 1000 in tabular form
#include <iostream>

using namespace std;

int main() {
	cout << "N\t10*N\t100*N\t1000*N" << endl;

	unsigned int counter{1};
	while (counter <= 5) {
		cout << counter << "\t" << counter * 10 << "\t" <<
			counter * 100 << "\t" << counter * 1000 << endl;
		++counter;
	}
}
