#include<iostream>
#include<string>

class Item {
private:
    int number;
    double cost;
public:
    Item() {
        number = 0;
        cost = 0.0;
    }

    void displayData() {
        std::cout << "Number: " << number << std::endl;
        std::cout << "Cost: $" << cost << std::endl;
    }
    friend void getData(Item& item);
};
void getData(Item& item) {
    std::cout << "Enter Item Number: ";
    std::cin >> item.number;
    std::cout << "Enter Item Cost: $";
    std::cin >> item.cost;
}

int main() {
    Item myItem;
    getData(myItem);
    std::cout << "Item Information:" << std::endl;
    myItem.displayData();

    return 0;
}
