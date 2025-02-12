#include <iostream>

int main() {
    char tempMeasure;
    double priTemp;
    double secTemp;
    double tempFormula;

    std::cout << "Welcome to the temperature Converter!" << std::endl;
    std::cout << "Please choose a measurement to convert to" << std::endl;
    std::cout << "F-Farenheit" << std::endl << "C-Celsius" << std::endl;

    do{
    std::cout << "Response: ";
    std::cin >> tempMeasure;

    }while (tempMeasure != 'F' && tempMeasure != 'C');
    
    switch(tempMeasure) {
        case 'C':
        if(tempMeasure == 'c' || tempMeasure == 'C') {
            std::cout << "Enter temperature(F): ";
            std::cin >> priTemp;
            
            tempFormula = (priTemp - 32) / 1.8;
            std::cout << "Result(C): " << tempFormula;
        } 
        break;

        case 'F':
        if(tempMeasure == 'f' || tempMeasure == 'F') {
            std::cout << "Enter temperature(C): ";
            std::cin >> secTemp;
            
            tempFormula = (secTemp * 1.8) + 32;
            std::cout << "Result(F): " << tempFormula;
        }
        break;
    }
    return 0;
}