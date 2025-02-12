#include <iostream>
using namespace std;
//temperature converter
int main() {
  cout << "Temperature(Farenheit): ";
  int Celsius;
  cin >> Celsius;
  double convertFormula = (Celsius - 32) / 1.8;
  
  cout << "Temperature(Celsius): " << convertFormula << endl
       << "Thank you for Converting!";
  return 0;
}