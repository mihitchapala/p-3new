#include<iostream>

class MaxFinder {
public:
    int findMax(int num1, int num2, int num3) {
        int max = num1;

        if (num2 > max) {
            max = num2;
        }

        if (num3 > max) {
            max = num3;
        }

        return max;
    }
};

int main() {
    int num1, num2, num3;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    MaxFinder maxFinder;
    int max = maxFinder.findMax(num1, num2, num3);
    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}
