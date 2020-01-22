//Employee class with a demonstration
#include <string>

class Employee {
public:
	Employee(std::string firstN, std::string lastN, int amount)
		: firstName{firstN}, lastName{lastN} {
		if (amount > 0) {
			salary = amount;
		}
	}

	void setFirstName(std::string name) {
		firstName = name;
	}

	void setLastName(std::string name) {
		lastName = name;
	}

	void setSalary(int amount) {
		if (amount < 0) {
			salary = 0;
			return;
		}
		
		salary = amount;
	}

	std::string getFirstName() const {
		return firstName;
	}

	std::string getLastName() const {
		return lastName;
	}

	int getSalary() const {
		return salary;
	}

private:
	std::string firstName;
	std::string lastName;
	int salary{0};
}; //end of Employee class

#include <iostream>

int main() {
	Employee bob{"Bob", "Silva", 1500};
	Employee john{"John", "Smith", 1200};

	std::cout << bob.getFirstName() << " earns " << 12 * bob.getSalary() << " in a year." << std::endl;
	std::cout << john.getFirstName() << " earns " << 12 * john.getSalary() << " in a year." << std::endl;

	bob.setSalary(bob.getSalary() * 1.1);
	john.setSalary(john.getSalary() * 1.1);

	std::cout << "After a 10% raise:\n";

	std::cout << bob.getFirstName() << " earns " << 12 * bob.getSalary() << " in a year." << std::endl;
	std::cout << john.getFirstName() << " earns " << 12 * john.getSalary() << " in a year." << std::endl;
}
