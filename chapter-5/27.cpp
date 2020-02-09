//Fig. 5.8: DollarAmount.h
//DollarAmount class stores dollar amounts as whole numbers of pennies
#include <string>
#include <cmath>

class DollarAmount {
public:
	explicit DollarAmount(int64_t value) : amount{value} { }

	DollarAmount(int64_t dollars, int64_t cents)
		: amount{dollars * 100 + cents} {
		//constructor
	}


	void add(DollarAmount right) {
		amount += right.amount;
	}

	void subtract(DollarAmount right) {
		amount -= right.amount;
	}

	void divide(int divisor) {
		amount = (amount + divisor / 2) / divisor;
	}

	void addInterest(int rate, int divisor) {
		DollarAmount interest{
			(amount * rate + divisor / 2) / divisor
		};

		add(interest);
	}

	std::string toString() const {
		std::string dollars{std::to_string(amount / 100)};
		std::string cents{std::to_string(std::abs(amount % 100))};
		return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
	}
private:
	int64_t amount{0};
};
