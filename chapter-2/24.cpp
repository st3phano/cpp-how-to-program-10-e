//BMI calculator using kilograms and meters
#include <iostream>

using namespace std;

int main() {
    double weight{0}, height{0};

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Your BMI is " << weight / (height * height) << endl;
    cout << "BMI VALUES\n";
    cout << "Underweight:\tless than 18.5\n";
    cout << "Normal:\t\tbetween 18.5 and 24.9\n";
    cout << "Overweight:\tbetween 25 and 29.9\n";
    cout << "Obese:\t\t30 or greater\n";
}
