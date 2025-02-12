#include <iostream>

//std::string infoDisplay(int ID, std::string info);

int main() {
    int ID;
    std::string info;

    std::cout << "Welcome to the Mock student identifier!" << std::endl;
    std::cout << "Enter Student Number#: 24- ";
    std::cin >> ID;

    std::cout << std::endl;

    switch(ID) {
        case 140005 :
            std::string infoDisplay1[][1] = {{"Name: Abon, Pocholo James"},
                                    {"College: College of Computing and Information Sciences"},
                                    {"Program: BS in Computer Science"}};
        
        int rows = sizeof(infoDisplay1)/sizeof(infoDisplay1[0]);
        int columns = sizeof(infoDisplay1[0])/sizeof(infoDisplay1[0][0]);

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                std::cout << infoDisplay1[i][j] << " " << std::endl;
            }
        }
        break;
    }
    




}
