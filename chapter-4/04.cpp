/*Determine whether a customer has exceeded
 *the credit limit on a charge account
 */

/*Input customer account's data
 *Calculate new balance and determine if it exceeds the limit
 *Warn the user when the limit is exceeded
 */

/*Prompt the user to enter accountNumber
 *Input the accountNumber (possibly the sentinel)
 *
 *While the user has not yet entered the sentinel
 *  Prompt the user to enter beginningBalance
 *  Input the beginningBalance
 *
 *  Prompt the user to enter totalCharges
 *  Input the totalCharges
 *
 *  Prompt the user to enter totalCredits
 *  Input the totalCredits
 *
 *  Prompt the user to enter creditLimit
 *  Input the creditLimit
 *
 *  Calculate and print newBalance
 *
 *  If the limit is exceeded
 *      Print accountNumber, creditLimit and newBalance
 *      Print "Credit Limit Exceeded."
 *  
 *  Prompt the user to enter accountNumber
 *  Input the accountNumber (possibly the sentinel)
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Enter account number (or -1 to quit): ";
    int accountNumber;
    cin >> accountNumber;

    while (accountNumber != -1) {
        cout << "Enter beginning balance: ";
        double beginningBalance;
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        double totalCharges;
        cin >> totalCharges;

        cout << "Enter total credits: ";
        double totalCredits;
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        double creditLimit;
        cin >> creditLimit;

        double newBalance{beginningBalance + totalCharges - totalCredits};
        cout << "New balance is " << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Account:      " << accountNumber << endl;
            cout << "Credit Limit: " << creditLimit << endl;
            cout << "Balance:      " << newBalance << endl;
            cout << "Credit limit exceeded.\n";
        }

        cout << "\nEnter account number (or -1 to quit): ";
        cin >> accountNumber;
    }
}
