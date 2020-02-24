//Using function template maximum to determine the larger of two arguments
#include <iostream>

using namespace std;

template <typename T>
T maximum(T value1, T value2) {
	if (value1 > value2) {
		return value1;
	}
	else {
		return value2;
	}
}

int main() {
	cout << maximum(3, -7) << endl;
	cout << maximum('a', 'A') << endl;
	cout << maximum(6.56, -6.09) << endl;
}
