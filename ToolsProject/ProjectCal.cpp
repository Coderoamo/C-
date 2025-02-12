#include <iostream>
using namespace std;

int main() {
  
  char Operator;
  double num1;
  double num2;
  double formula;
  
  cout << "Calculator Program!" << endl;
  
  cout << "Enter Operator(+,-,*,/): ";
  cin >> Operator;
  
  cout << "Enter num1: ";
  cin >> num1;
  
  cout << "Enter num2: ";
  cin >> num2;
  

  switch(Operator) {
    case '+':
    formula = (num1 + num2);
      cout << "Result: " << formula;
      break;
    case '-':
    formula = (num1 - num2);
      cout << "Result: " << formula;
      break;
    case '*':
    formula = (num1 * num2);
      cout << "Result: " << formula;
      break;
    case '/':
    formula = (num1 / num2);
      cout << "Result: " << formula;
      break;
    default :
    std::cout << "NO.";
    break;
  }
  return 0;
}