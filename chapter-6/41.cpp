//Using function template minimum to determine the smaller of two arguments
#include <iostream>

using namespace std;

template <typename T>
T minimum(T value1, T value2) {
	if (value1 < value2) {
		return value1;
	}
	else {
		return value2;
	}
}

int main() {
	cout << minimum(3, -7) << endl;
	cout << minimum('a', 'A') << endl;
	cout << minimum(6.56, -6.09) << endl;
}
