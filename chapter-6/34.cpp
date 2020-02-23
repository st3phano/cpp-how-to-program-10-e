//Exercise 6.44: ex06_44.cpp
//Whats does this program do?
#include <iostream>

using namespace std;

int multiplication(int a, int b);

int main() {
	cout << "Enter two integers: ";
	int x{0};
	int y{0};
	cin >> x >> y;
	cout << "The result is " << multiplication(x, y) << endl;
}

int multiplication(int a, int b) {
	if (b < 0) {
		a = -a;
		b = -b;
	}

	if (1 == b) { //base case
		return a;
	}
	else { //recursion step
		return a + multiplication(a, b - 1);
	}
}
