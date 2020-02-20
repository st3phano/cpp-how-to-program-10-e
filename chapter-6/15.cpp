//Calculate the amount of seconds between two times
//within one 12-hour cycle
#include <iostream>

using namespace std;

unsigned secondsSince12(unsigned hours, unsigned minutes, unsigned seconds);

int main() {
	cout << "Enter HOURS MINUTES SECONDS for the first time register: ";
	unsigned hours, minutes, seconds;
	cin >> hours >> minutes >> seconds;
	unsigned seconds1{secondsSince12(hours, minutes, seconds)};

	cout << "Enter HOURS MINUTES SECONDS for the second time register: ";
	cin >> hours >> minutes >> seconds;
	unsigned seconds2{secondsSince12(hours, minutes, seconds)};

	cout << "Amount of seconds between the two time registers: "
		<< seconds2 - seconds1 << endl;
}

//Determine the number of seconds since the last 12:00
unsigned secondsSince12(unsigned hours, unsigned minutes, unsigned seconds) {
	return hours * 3600 + minutes * 60 + seconds;
}
