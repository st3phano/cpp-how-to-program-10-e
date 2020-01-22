// Account class with withdraw function added.
#include <string>
#include <iostream>

class Account {
public:
    Account(std::string accountName, int initialBalance)
        : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void withdraw(int withdrawAmount) {
        if (withdrawAmount > balance) {
            std::cout << "Withdrawl amount exceeded account balance.";
            return;
        }

        balance = balance - withdrawAmount;
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }
private:
    std::string name;
    int balance{0};
};
