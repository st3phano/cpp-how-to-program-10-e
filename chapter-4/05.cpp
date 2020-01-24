/*Calculate and print how much a salesperson earned last week
 */

/*Initialize variables
 *Input salesperson's last week worth of sales 
 *Add commission to fixed salary
 *Display the person's salary
 */

/*Initialize salary to $200
 *Initialize commission to 9%
 *
 *Prompt the user to enter weekSales
 *Input the weekSales (possibly the sentinel)
 *
 *While the user has not yet entered the sentinel
 *  Add commission of weekSales to salary
 *  
 *  Print salary and reset
 *  
 *  Prompt the user to enter weekSales
 *  Input the weekSales (possibly the sentinel)
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary{200};
    double commission{0.09};

    cout << "Enter sales in dollars (-1 to end): ";
    double weekSales;
    cin >> weekSales;

    while (weekSales != -1) {
        salary += weekSales * commission;

        cout << setprecision(2) << fixed;
        cout << "Salary is: $" << salary << endl;

        salary = 200;
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> weekSales;
    }
}
