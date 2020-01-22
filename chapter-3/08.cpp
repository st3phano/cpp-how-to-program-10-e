//Date class
#include <iostream>

class Date {
public:
	Date(int toMonth, int toDay, int toYear)
		: day{toDay}, year{toYear} {
		if (toMonth < 1) {
			return;
		}

		if (toMonth > 12) {
			return;
		}

		month = toMonth;
	}

	void setMonth(int toMonth) {
		if (toMonth < 1) {
			month = 1;
		}

		if (toMonth > 12) {
			month = 1;
		}

		month = toMonth;
	}

	void setDay(int toDay) {
		day = toDay;
	}

	void setYear(int toYear) {
		year = toYear;
	}

	int getMonth() const {
		return month;
	}

	int getDay() const {
		return day;
	}

	int getYear() const {
		return year;
	}

	void displayDate() const {
		std::cout << month << "/" << day << "/" << year << std::endl;
	}
private:
	int month{1};
	int day;
	int year;
};
