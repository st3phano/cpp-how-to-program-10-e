//Fig. 5.8: DollarAmount.h
//DollarAmount class stores dollar amounts as whole numbers of pennies
#include <string>

class DollarAmount {
public:
	DollarAmount(int64_t dollars, int64_t cents)
		: dollars{dollars}, cents{cents} {
		//constructor
	}

	void add(DollarAmount right) {
		dollars += right.dollars;
		cents += right.cents;
	}

	void subtract(DollarAmount right) {
		dollars -= right.dollars;
		cents -= right.cents;
	}

	void divide(int divisor) {
		int64_t roundedPennies{(getPenniesAmount() + divisor / 2) / divisor};

		dollars = roundedPennies / 100;
		cents = roundedPennies % 100;
	}

	void addInterest(int rate, int divisor) {
		int64_t interestToAdd{getPenniesAmount() * rate};

		if ((interestToAdd % divisor / (divisor / 10) == 5) //contain .5?
		    && (interestToAdd / divisor % 2 == 0)) {        //is a even number?
			interestToAdd = (interestToAdd - divisor / 2) / divisor;
		}
		else {
			interestToAdd = (interestToAdd + divisor / 2) / divisor;
		}

		DollarAmount interest{interestToAdd / 100, interestToAdd % 100};

		add(interest);
	}

	std::string toString() const {
		std::string dollarString{std::to_string(dollars)};
		std::string centString{std::to_string(cents)};
		return dollarString + "." + (centString.size() == 1 ? "0" : "") + centString;
	}

	int64_t getPenniesAmount() const {
		return dollars * 100 + cents;
	}
private:
	int64_t dollars{0};
	int64_t cents{0};
};
