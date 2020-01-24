/*Calculates the miles per gallon for each trip 
 *and the total miles per total gallons
 */

/*Initialize variables
 *Input miles and gallons of each trip and accumulate
 *Print the trip and total miles per gallon
 */

/*Initialize totalMiles to zero
 *Initialize totalGallons to zero
 *
 *Prompt the user to enter milesDriven
 *Input the milesDriven (possibly the sentinel)
 *
 *While the user has not yet entered the sentinel
 *  Prompt the user to enter gallonsUsed
 *  Input the gallonsUsed
 *  Add milesDriven to totalMiles
 *  Add gallonsUsed to totalGallons
 *
 *  Print the MPG for this trip
 *  Print the MPG of totals
 *  
 *  Prompt the user to enter milesDriven
 *  Input the milesDriven (possibly the sentinel)
 */

#include <iostream>

using namespace std;

int main() {
    unsigned int totalMiles{0}, totalGallons{0};

    cout << "Enter miles driven (-1 to quit): ";
    unsigned int milesDriven;
    cin >> milesDriven;

    while (milesDriven != -1) {
        cout << "Enter gallons used: ";
        unsigned int gallonsUsed;
        cin >> gallonsUsed;
        totalMiles += milesDriven;
        totalGallons += gallonsUsed;

        cout << "MPG this trip: " << static_cast<double>(milesDriven) / gallonsUsed << endl;
        cout << "Total MPG: " << static_cast<double>(totalMiles) / totalGallons << endl;

        cout << "\nEnter miles driven (-1 to quit): ";
        cin >> milesDriven;
    }
}
