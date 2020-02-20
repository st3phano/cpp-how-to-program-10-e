//Displays temperature charts of the conversion between Celsius and Fahrenheit
#include <iostream>
#include <iomanip>

using namespace std;

int celsius(const int fahrenheit);
int fahrenheit(const int celsius);
void printCtoFChart(unsigned initialTemp, const unsigned finalTemp, const unsigned itemsPerRow);
void printFtoCChart(unsigned initialTemp, const unsigned finalTemp, const unsigned itemsPerRow);

int main() {
	cout << "Celsius to Fahrenheit:" << endl;
	printCtoFChart(0, 100, 5);
	cout << "\nFahrenheit to Celsius: \n";
	printFtoCChart(32, 212, 5);
}

int celsius(const int fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}

int fahrenheit(const int celsius) {
	return (celsius * 9 / 5) + 32;
}

void printCtoFChart(unsigned initialTemp, const unsigned finalTemp, const unsigned itemsPerRow) {
	unsigned counter{0};

	while (initialTemp + counter <= finalTemp) {
		cout << initialTemp + counter << " C" << " -> " << fahrenheit(initialTemp + counter) << " F\t\t";

		if (counter % itemsPerRow == 0) {
			cout << endl;
		}

		++counter;
	}

	cout << endl;
}

void printFtoCChart(unsigned const initialTemp, const unsigned finalTemp, const unsigned itemsPerRow) {
	unsigned counter{0};

	while (initialTemp + counter <= finalTemp) {
		cout << initialTemp + counter << " F" << " -> " << celsius(initialTemp + counter) << " C\t\t";

		if (counter % itemsPerRow == 0) {
			cout << endl;
		}

		++counter;
	}

	cout << endl;
}
