// Invoice class with constructor, set and get functions
#include <string>

class Invoice {
public:
    Invoice(std::string number, std::string description, int amount, int cost)
        : partNumber{number}, partDescription{description} {
        if (amount > 0) {
            quantity = amount;
        }

        if (cost > 0) {
            price = cost;
        }
    }

    void setPartNumber(std::string number) {
        partNumber = number;
    }

    void setPartDescription(std::string description) {
        partDescription = description;
    }

    void setQuantity(int amount) {
        if (amount > 0) {
            quantity = amount;
            return;
        }
        quantity = 0;
    }

    void setPrice(int cost) {
        if (cost > 0) {
            price = cost;
            return;
        }
        price = 0;
    }

    std::string getPartNumber() const {
        return partNumber;
    }

    std::string getPartDescription() const {
        return partDescription;
    }

    int getQuantity() const {
        return quantity;
    }

    int getPrice() const {
        return price;
    }

    int getInvoiceAmount() const {
        return quantity * price;
    }
private:
    std::string partNumber;
    std::string partDescription;
    int quantity{ 0 };
    int price{ 0 };
};
