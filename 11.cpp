#include<iostream>
#include<string>

class Product {
private:
    int product_id;
    std::string product_name;
    double unit_price;

public:
    void getData() {
        std::cout << "Enter Product ID: ";
        std::cin >> product_id;
        std::cin.ignore();
        std::cout << "Enter Product Name: ";
        std::getline(std::cin, product_name);
        std::cout << "Enter Unit Price: ";
        std::cin >> unit_price;
    }
    void putData() {
        std::cout << "Product ID: " << product_id << std::endl;
        std::cout << "Product Name: " << product_name << std::endl;
        std::cout << "Unit Price: $" << unit_price << std::endl;
    }
};

int main() {
    Product product1, product2;
    std::cout << "Enter information for the first product:" << std::endl;
    product1.getData();
    std::cout << "\nProduct Information for the first product:" << std::endl;
    product1.putData();
    std::cout << "\nEnter information for the second product:" << std::endl;
    product2.getData();
    std::cout << "\nProduct Information for the second product:" << std::endl;
    product2.putData();

    return 0;
}
