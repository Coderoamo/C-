#include <iostream>

int main() {
    float weight;
    float height;
    float formula;

    std::cout << "*****BMI Calculator!*****\n";

    std::cout << "Enter Weight(kg): ";
    std::cin >> weight;

    std::cout << "Enter Height(m): ";
    std::cin >> height;

    formula = (weight) / (height * height);

    std::cout << "\nResult: " << formula;
    std::cout << "\n*****END PROGRAM*****";

    return 0;
}