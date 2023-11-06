#include <iostream>
class Distance {
private:
    int feet;
    float inches;

public:
    void get_distance() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inches;
    }
    void display_distance() {
        std::cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main() {
    Distance dist;
    dist.get_distance();
    dist.display_distance();

    return 0;
}

