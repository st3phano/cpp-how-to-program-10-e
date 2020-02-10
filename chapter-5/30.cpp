//Account class with DollarAmount data member
#include <string>
#include <iostream>

class Account {
public:
	Account(std::string accountName, DollarAmount initialBalance)
		: name{accountName}, balance{initialBalance} {
		//constructor
	}

	void withdraw(DollarAmount withdrawAmount) {
		if (withdrawAmount.getPenniesAmount() > balance.getPenniesAmount()) {
			std::cout << "Withdrawl amount exceeded account balance.";
			return;
		}
		else {
			balance.subtract(withdrawAmount);
		}		
	}

	void deposit(DollarAmount depositAmount) {
		balance.add(depositAmount);
	}

	std::string getBalance() const {
		return balance.toString;
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}
private:
	std::string name;
	DollarAmount balance{0, 0};
};
