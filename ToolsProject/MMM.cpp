#include <iostream>
using namespace std;

int main() {

    int age;
    float anuIncome;
    int employStat;

    cout << "Welcome to the Loan Eligibilty\n";
    cout << "Please intput your age, anual income, employment status\n";
    cout << "(0 - Unemployed, 1 - Employed)\n\n";

    cout << "Age: ";
    cin >> age;

    cout << "Anual Income: ";
    cin >> anuIncome;

    cout << "Employment Status: ";
    cin >> employStat;

    if(age < 0 || age < 21 || age > 80 ) {
        cout << "\nERR_INPUT OR You are not Eligible";
    }
    else if(anuIncome < 0 || anuIncome < 30000) {
        cout << "\nERR_INPUT OR You are not Eligible";
    }
    else if(employStat == 0) {
        cout << "\nERR_INPUT OR You are not Eligible";
    }
    else {
        cout << "\n*********Result***********";
        cout << "\nAge: " << age;
        cout << "\nAnnual Income: " << anuIncome;
        cout << "\nEmployment Status: Employed";
        cout << "\nResponse: You are Eligible";
    }
    return 0;
}