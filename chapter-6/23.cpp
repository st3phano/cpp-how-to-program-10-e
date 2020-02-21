//Simulate coin tossing
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

unsigned flip();

int main() {
	unsigned tossTimes{100};

	for (unsigned i{1}; i <= tossTimes; ++i) {
		unsigned result{flip()};

		if (1 == result) {
			cout << "Heads!\n";
		}
		else {
			cout << "Tails!\n";
		}
	}
}

unsigned flip() {
	static default_random_engine coin{static_cast<unsigned>(time(0))};
	uniform_int_distribution<unsigned> flip{0, 1};

	return flip(coin);
}
