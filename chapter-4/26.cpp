//Testing account class using doubles with 2 digits after decimal point
#include <string>
#include <iostream>

class Account {
public:
    Account(std::string accountName, double initialBalance)
        : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void withdraw(double withdrawAmount) {
        if (withdrawAmount > balance) {
            std::cout << "Withdrawl amount exceeded account balance.";
            return;
        }

        balance = balance - withdrawAmount;
    }

    void deposit(double depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    double getBalance() const {
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
    double balance{0};
};



#include <iomanip>

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    //2 digits after decimal point
    cout << setprecision(2) << fixed;

    //display initial balance
    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;

    cout << "\n\nEnter deposit amount for account1: ";
    double depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << endl;
    account1.deposit(depositAmount);

    //display balance
    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << endl;
    account2.deposit(depositAmount);

    //display balance
    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;
}
