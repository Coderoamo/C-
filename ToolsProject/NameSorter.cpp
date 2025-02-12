#include <iostream>
using namespace std;

void nameSorter(string names[], int size);

int main() {
    string names[5];
    int size = sizeof(names)/ sizeof(names[0]);
     
    cout << "********************************" << endl;
    cout << "Welcome to the Name Sorter!\n";
    cout << "********************************" << endl;

    cout << "Enter 5 Names to Sort" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Name " << "#" << i + 1 << ": ";
        getline(cin, names[i]);
    }
    
    nameSorter(names, size);

    cout << endl;
    cout << "Sorted Names:" << endl;
    
    for(int i = 0; !names[i].empty(); i++) {
        cout << names[i] << endl;
    }

    cout << "*****END LINE******" << endl;
    
}
void nameSorter(string names[], int size) {
    string temp;
    
    for(int i = 0; i < size -1; i++) {
        for(int j = 0; j < size -i -1; j++) {
            if(names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}