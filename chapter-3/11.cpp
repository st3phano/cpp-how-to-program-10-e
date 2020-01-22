//Maximum rate and target-heart-rate calculator
#include <string>
#include <iostream>

class HeartRates {
public:
	HeartRates(std::string firstN, std::string lastN, int month, int day, int year)
		: firstName{firstN}, lastName{lastN}, monthOfBirth{month}, dayOfBirth{day}, yearOfBirth{year} {
	}

	int getAge(int currentMonth, int currentDay, int currentYear) const {
		int age{currentYear - yearOfBirth};

		if (currentMonth < monthOfBirth) {
			return age - 1;
		}

		if (currentMonth == monthOfBirth) {
			if (currentDay < dayOfBirth) {
				return age - 1;
			}
		}

		return age;
	}

	int getMaximumHeartRate(int age) const {
		return 220 - age;
	}

	int getTargetHeartRate(int maximumRate) const {
		return maximumRate * 0.65; //50-85% of maximum heart rate
	}

	void setFirstName(std::string name) {
		firstName = name;
	}

	void setLastName(std::string name) {
		lastName = name;
	}

	void setMonthOfBirth(int month) {
		monthOfBirth = month;
	}

	void setDayOfBirth(int day) {
		dayOfBirth = day;
	}

	void setYearOfBirth(int year) {
		yearOfBirth = year;
	}

	std::string getFirstName() const {
		return firstName;
	}

	std::string getLastName() const {
		return lastName;
	}

	int getMonthOfBirth() const {
		return monthOfBirth;
	}

	int getDayOfBirth() const {
		return dayOfBirth;
	}

	int getYearOfBirth() const {
		return yearOfBirth;
	}
private:
	std::string firstName;
	std::string lastName;
	int monthOfBirth{1};
	int dayOfBirth{1};
	int yearOfBirth{2000};
}; //end of HeartRates class



using namespace std;

int main() {
	cout << "What's your first name?\n";
	string firstName;
	getline(cin, firstName);

	cout << "What's your last name?\n";
	string lastName;
	getline(cin, lastName);

	cout << "Month of birth?\n";
	int month;
	cin >> month;

	cout << "Day of birth?\n";
	int day;
	cin >> day;

	cout << "Year of birth?\n";
	int year;
	cin >> year;

	HeartRates personA{firstName, lastName, month, day, year};

	cout << personA.getFirstName() << " "<< personA.getLastName()
		<< " born in " << personA.getMonthOfBirth() << "/"
		<< personA.getDayOfBirth() << "/"
		<< personA.getYearOfBirth() << endl;

	int age{personA.getAge(01, 22, 2020)};
	int maxHeartRate{personA.getMaximumHeartRate(age)};
	int targetHeartRate{personA.getTargetHeartRate(maxHeartRate)};
	cout << age << " years old with a maximum heart rate of "
		<< maxHeartRate << " and target-heart-rate of "
		<< targetHeartRate << endl;
}
