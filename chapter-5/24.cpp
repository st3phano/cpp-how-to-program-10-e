//The Twelve Days of Christmas song
#include <iostream>

using namespace std;

int main() {
	string currentDay;
	for (unsigned int day{1}; day <= 12; ++day) {
		switch (day) {
		case 1:
			currentDay = "first";
			break;
		case 2:
			currentDay = "second";
			break;
		case 3:
			currentDay = "third";
			break;
		case 4:
			currentDay = "fourth";
			break;
		case 5:
			currentDay = "fifth";
			break;
		case 6:
			currentDay = "sixth";
			break;
		case 7:
			currentDay = "seventh";
			break;
		case 8:
			currentDay = "eighth";
			break;
		case 9:
			currentDay = "ninth";
			break;
		case 10:
			currentDay = "tenth";
			break;
		case 11:
			currentDay = "eleventh";
			break;
		case 12:
			currentDay = "twelfth";
			break;
		}

		cout << "\nThe " << currentDay << " day of Christmas,\n"
			<< "My true love sent to me\n";

		switch (day) {
		case 12:
			cout << "Twelve lords a leaping,\n";
		case 11:
			cout << "Eleven ladies dancing,\n";
		case 10:
			cout << "Ten pipers piping,\n";
		case 9:
			cout << "Nine drummers drumming,\n";
		case 8:
			cout << "Eight maids a milking,\n";
		case 7:
			cout << "Seven swans a swimming,\n";
		case 6:
			cout << "Six geese a laying,\n";
		case 5:
			cout << "Five gold rings,\n";
		case 4:
			cout << "Four colly birds,\n";
		case 3:
			cout << "Three French hens,\n";
		case 2:
			cout << "Two turtle doves, and\n";
		case 1:
			cout << "A partridge in a pear tree.\n";			
		}
	}
}
