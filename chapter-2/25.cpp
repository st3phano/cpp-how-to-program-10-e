//Calculate the cost per day of driving to work
#include <iostream>

using namespace std;

int main() {
    int milesDriven{0};
    int gasolineGallonCost{0};
    int milesPerGallon{0};
    int parkingFees{0};
    int tollFess{0};

    cout << "Enter how many miles you drove today: ";
    cin >> milesDriven;

    cout << "How much cost each gallon of gasoline? ";
    cin >> gasolineGallonCost;

    cout << "How far can you drive with each gallon? ";
    cin >> milesPerGallon;

    cout << "How much spent in parking fees today? ";
    cin >> parkingFees;

    cout << "How much spent in tolls today? ";
    cin >> tollFess;

    cout << "Your driving cost for today was " <<
            milesDriven / milesPerGallon * gasolineGallonCost +
            parkingFees + tollFess << endl;
}
