//Health profile
#include <string>

class HealthProfile {
public:
	HealthProfile(std::string firstN, std::string lastN, std::string gend,
		int month, int day, int year, double heig, double weig)
		: firstName{firstN}, lastName{lastN}, gender{gend}, monthOfBirth{month},
		dayOfBirth{day}, yearOfBirth{year}, height{heig}, weight{weig} {
		//constructor
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

	double getBodyMassIndex() const {
		return weight / (height * height);
	}

	void setFirstName(std::string name) {
		firstName = name;
	}

	void setLastName(std::string name) {
		lastName = name;
	}

	void setGender(std::string gend) {
		gender = gend;
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

	void setHeigth(double heig) {
		height = heig;
	}
	
	void setWeight(double weig) {
		weight = weig;
	}

	std::string getFirstName() const {
		return firstName;
	}

	std::string getLastName() const {
		return lastName;
	}
	
	std::string getGender() const {
		return gender;
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

	double getHeight() const {
		return height;
	}

	double getWeight() const {
		return weight;
	}
private:
	std::string firstName;
	std::string lastName;
	std::string gender;
	int monthOfBirth{0};
	int dayOfBirth{0};
	int yearOfBirth{0};
	double height{0};
	double weight{0};
}; //end of HealthProfile class

#include <iostream>

using namespace std;

int main() {
	cout << "What's your first name?\n";
	string firstName;
	getline(cin, firstName);

	cout << "What's your last name?\n";
	string lastName;
	getline(cin, lastName);

	cout << "Gender?\n";
	string gender;
	getline(cin, gender);

	cout << "Month of birth?\n";
	int month;
	cin >> month;

	cout << "Day of birth?\n";
	int day;
	cin >> day;

	cout << "Year of birth?\n";
	int year;
	cin >> year;

	cout << "Height in meters?\n";
	double height;
	cin >> height;

	cout << "Weight in kilograms?\n";
	double weight;
	cin >> weight;

	HealthProfile personA{firstName, lastName, gender, month, day, year, height, weight};

	cout << personA.getFirstName() << " " << personA.getLastName() << ", " << personA.getGender()
		<< ", born in " << personA.getMonthOfBirth() << "/"
		<< personA.getDayOfBirth() << "/"
		<< personA.getYearOfBirth() << endl;

	int age{personA.getAge(01, 22, 2020)};
	int maxHeartRate{personA.getMaximumHeartRate(age)};
	int targetHeartRate{personA.getTargetHeartRate(maxHeartRate)};
	cout << age << " years old with a maximum heart rate of "
		<< maxHeartRate << " and target-heart-rate of "
		<< targetHeartRate << endl;

	cout << "Current BMI: " << personA.getBodyMassIndex() << endl;

	cout << "\nBMI VALUES\n"
		"Underweight:\tless than 18.5\n"
		"Normal:\t\tbetween 18.5 and 24.9\n"
		"Overweight:\tbetween 25 and 29.9\n"
		"Obese:\t\t30 or greater\n";
}
