//Initializing an account object
#include <string>

class Account {
public:
	Account(unsigned int number, std::string firstN, std::string lastN, double initialBalance)
		: accountNumber{number}, firstName{firstN}, lastName{lastN}, balance{initialBalance} {
	}
private:
	unsigned int accountNumber{0};
	std::string firstName;
	std::string lastName;
	double balance{0};
};

int main() {
	Account acc1{1234, "Robert", "Down", 123.54};
}
