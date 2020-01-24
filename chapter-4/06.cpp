/*Determine the gross pay for each employee in the past week
 */

/*Initialize variables
 *Input employee's hours worked and hourly rate
 *Determine the gross pay based on hourly rate
 *and whether below or above a determined amount of hours worked
 */

/*Initialize maxHours to 40
 *
 *Prompt the user to enter hoursWorked
 *Input the hoursWorked (possibly the sentinel)
 *
 *While the user has not yet entered the sentinel
 *  Prompt the user to enter hourlyRate
 *  Input the hourlyRate
 *
 *  Initialize extraHours to 0
 *
 *  If the hoursWorked is greater than maxHours
 *      Set extraHours to hoursWorked minus maxHours
 *      Set hoursWorked to maxHours
 *  
 *  Set salary to hoursWorked times hourlyRate plus
 *  extraHours times hourlyRate times 1.5
 *  Print the salary
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int maxHours{40};

    cout << "Enter hours worked (-1 to end): ";
    int hoursWorked;
    cin >> hoursWorked;

    while (hoursWorked != -1) {
        cout << "Enter hourly rate of the employee ($00.00): ";
        double hourlyRate;
        cin >> hourlyRate;

        unsigned int extraHours{0};

        if (hoursWorked > maxHours) {
            extraHours = hoursWorked - maxHours;
            hoursWorked = maxHours;
        }

        double salary{hoursWorked * hourlyRate +
                            extraHours * hourlyRate * 1.5};
        cout << setprecision(2) << fixed;
        cout << "Salary is $" << salary << endl;

        cout << "\nEnter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }
}
