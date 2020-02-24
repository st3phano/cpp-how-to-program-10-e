//Pass-by-Value vs pass-by-reference
#include <iostream>

using namespace std;

int tripleByValue(const int value);
void tripleByReference(int& reference);

int main() {
	int count{-3};

	cout << "Return value of tripleByValue: " << tripleByValue(count) << endl;
	cout << "count after tripleByValue: " << count << endl;

	tripleByReference(count);
	cout << "count after tripleByReference: " << count << endl;
}

int tripleByValue(const int value) {
	return value * 3;
}

void tripleByReference(int& reference) {
	reference *= 3;
}
