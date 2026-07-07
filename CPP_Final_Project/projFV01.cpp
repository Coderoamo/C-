#include <iostream> // I/O operations
#include <fstream> //file creation
#include <filesystem> //for file handling
#include <cstring> //string functions
#include <chrono> //for time interval functions
#include <thread> //code execution
#include <vector> //storing variables(dynamic)
#include <cstdio> //C - standard library I/O

// namespace definitions
using namespace std;
namespace filesys = std::filesystem;

//color definitions
#define RED "\e[0;31m"
#define GRN "\e[0;32m"

//structure for Container Reg 
struct ContInformation {

    string contOrigin;
    string contConts;
    string contArvMonth;
    int contArvYear;

};

//function prototypes for design
void desgnUppr();
void desgnLwr();

//function prototypes for program functionality and others
void auth();
bool compareCredentials(const string &filename, const string &inputUsername, const string &inputPassword);
void contOpt(ContInformation cont);
void contReg(ContInformation cont);
string getUsrName(string username);
void contDisp();
void contEdit();
void contDel();
void addAcc();
void deleteUser();

//global variable
string usrNcompar;

int main() {

    //instantiating the stucture
    ContInformation contInfo;

    //invoking functions
    auth();
    desgnUppr();
    contOpt(contInfo);
    desgnLwr();
    
    return 0;
}

//An Authenticaltion function for login
void auth() {

    string username;
    string keypass;

    cout << RED"_____________________________________________________________________________________________________________________________________________________" << endl;
    cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\tUser Autheticantion System [Version 1.1 (Dev)]" << endl;
    cout <<"\t\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\b\b\b(c) Comsci Inc. All rights reserved." << endl << endl;

    cout << "Good Day User! please enter your credentials." << endl;

    string folderName = "keypass";

    //err handling for no directory
    if(!filesys::exists(folderName)) {
        filesys::create_directory(folderName);
    }

    cout << "Username: ";
    getline(cin, username);
        
    cout << "Password: ";
    getline(cin, keypass);

    string fileLoc = folderName.append("/").append(username).append(".txt"); // file location of file
    usrNcompar = getUsrName(username); //global varaible

    //for mixed input and output fstream
    fstream passfile(fileLoc);
    
    passfile.close();
    passfile.open(fileLoc);
    
    //A boolean Function to compare legit credentials
    if(compareCredentials(fileLoc, username, keypass)) {

        system("cls");
    }
    else {
        cout << "Err: Incorrect Credentials" << endl;
        this_thread::sleep_for(chrono::seconds(2)); //code execution manilupation using threads
        cout << "System aborting";
        for(int i = 0; i < 5; i++) {

            cout << "..";
            this_thread::sleep_for(chrono::seconds(1));//code execution manilupation using threads
        }
        cout << endl;
        
        cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b\b\b\b[Connection Terminated]" << endl;
        cout << "_____________________________________________________________________________________________________________________________________________________" << endl;
        exit(0);
    }    
}

//The boolean comparecred func
bool compareCredentials(const string &filename, const string &inputUsername, const string &inputPassword) {
    fstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    string fileUsername, filePassword;
    getline(file, fileUsername);
    getline(file, filePassword);

    return (fileUsername == inputUsername && filePassword == inputPassword);
}

//A function hub for all functionalities
void contOpt(ContInformation cont) {

    int response;

    do {

        cout << "\t\b1 - Register a Container" << "     ";
        cout << "2 - Display a Specific Container" << "     ";
        cout << "3 - Edit Container Information" << "     ";
        cout << "4 - Delete Container Information" << "     " << endl;
        cout << "\t\t\t\t\t\b\b\b5 - Add User Account" << "         ";
        cout << "6 - Delete User Account" << "     ";
        cout << "7 - Exit Program" << endl << endl;

        cout << "Response: ";
        cin >> response;

        cin.ignore();

        switch(response) {

            case 1 :
                contReg(cont);
            break;

            case 2 :
                contDisp();
            break;

            case 3 :
                contEdit();
            break;

            case 4 : 
                contDel();
            break;
            
            case 5 :
            addAcc();
            break;
            
            case 6 :
                deleteUser();
            break;

            case 7 :
                cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b[Program Terminated]" << endl;
            break;

            default :
                system("cls");
                desgnLwr();
                cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b\b\b\b\b\b[Err: Please Enter (1 - 7) only!]" << endl;
                desgnUppr();
            break;
        }
    }while(response != 7);
}

//Container registration Function
void contReg(ContInformation cont) {

    string foldername = "continfo";
    string barcode;

    //condition if folder not exist
    if(!filesys::exists(foldername)) {
        filesys::create_directory(foldername); //creates directtory for folder
    }

    cout << "Please Scan Barcode of container: ";
    cin >> barcode;
    cin.ignore();

    string fileLoc = foldername.append("/").append(barcode).append(".txt");

     if(filesys::exists(fileLoc)) {

        system("cls");
        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b[Barcode already registered!]" << endl;
        desgnUppr();
        return;
    }

    ofstream regfile(fileLoc);

    //inputing values
    cout << "Container Origin: ";
    getline(cin, cont.contOrigin);

    cout << "Container Contents: ";
    getline(cin, cont.contConts);

    cout << "Container Arival(Month): ";
    cin >> cont.contArvMonth;
    cin.ignore();

    cout << "Container Arival(Year): ";
    cin >> cont.contArvYear;
    cin.ignore();
   
    //outputting values to file
    regfile << "Origin: " << cont.contOrigin << endl;
    regfile << "Contents: "<< cont.contConts << endl;
    regfile << "Arival: "<< cont.contArvMonth << " " << cont.contArvYear << endl;
    system("cls");

    cout << GRN"_____________________________________________________________________________________________________________________________________________________" << endl << endl;
    cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b\b\b\b[Container Profiled(Saved)!]" << endl;

    desgnUppr();
    
    regfile.close();
}

//diplays info of a container
void contDisp() {

    string filename;
    string foldername = "continfo";
    char getLet;


    cout << "Scan Barcode/Enter Barcode: ";
    getline(cin, filename);
    system("cls");

    cout << endl;

    string fileLoc = foldername.append("/").append(filename).append(".txt");

    //err handling if file not exist
    if(!filesys::exists(foldername)) {
        
        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b[Directory not Found/File not Found!]" << endl;
        desgnUppr();
    }
    else {

        //display container
        ifstream fileOut(fileLoc);

        cout << "_____________________________________________________________________________________________________________________________________________________" << endl;
        cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b\b\b**Container Information**" << endl << endl;
        while(fileOut.get(getLet)) {

            cout << getLet;
        }
        cout << endl;

        cout << "_____________________________________________________________________________________________________________________________________________________" << endl << endl;

        fileOut.close();
    }
}

//edits a specified container
void contEdit() {

    string barcode;
    string foldername = "continfo";
    string newText;
    int option;

    cout << "Scan Barcode/Enter Barcode: ";
    getline(cin, barcode);
    system("cls");

    string fileLoc = foldername.append("/").append(barcode).append(".txt");

    //condition if file not exist
    if(!filesys::exists(fileLoc)) {

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t[File not Found!]" << endl;
        desgnUppr();
    }

    else {

        cout << "_____________________________________________________________________________________________________________________________________________________" << endl;

        cout << endl << "What Values do you want to Change?" << endl << endl;

        cout << "\t\t\t\t\b\b\b1 - Container Origin" << "          ";
        cout << "2 - Container Contents" << "          ";
        cout << "3 - Container arrive month and year" << endl;

        cout << "Response: ";
        cin >> option;
        cin.ignore();

        if(option > 3) {

                cout << "Err: Please choose only(1 - 3)" << endl << endl;

                return;
            }

        cout << "Enter New Value: ";
        getline(cin, newText);
        system("cls");

        desgnLwr();
        cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b\b\b\b\b[Container Profile Changed!]" << endl;
        desgnUppr();

        ifstream fileRead(fileLoc);

        if(fileRead.fail()) {

            cout << "Err: File not found in specified folder" << endl;
        }

        else {

            //used a vector to store content of file
            vector<string> readedLines;
            string lines;

            //reads the via getline and store to lines
            while(getline(fileRead, lines)) {
                readedLines.push_back(lines); //push back to the end of the element
            }

            fileRead.close();

            
            ofstream writeNewValues(fileLoc);
            
            //for loop  that determines what value to change
            for(int i = 0; i < readedLines.size(); i++) {

                if(i == option - 1) {

                    switch(option) {

                        case 1 :
                            writeNewValues << "Origin: " << newText << endl;
                        break;
                        
                        case 2 :
                            writeNewValues << "Content: " << newText << endl;
                        break;

                        case 3 :
                            writeNewValues << "Arrival: " << newText << endl;
                        break;
                    }   
                }

                else {

                    //writes the unchanged values back to file
                    writeNewValues << readedLines[i] << endl;

                }
            }
            writeNewValues.close();
        }        
    }
}

//Adds another user to access system
void addAcc() {

    string folderName = "keypass";
    string newUsername;
    string pass;
    int userCount = 0;

    //A for-each loop to count number of users in folder
    for(auto &fileNum : filesys::directory_iterator("keypass")) {

        userCount++;
    }

    //condition if max users reach
    if(userCount >= 3) {

        system("cls");

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b\b[Security Err: Max user reached!]" << endl;
        desgnUppr();

        return;
    }

    cout << "Enter Unique username: ";
    getline(cin, newUsername);

    
    string folderLoc = folderName.append("/").append(newUsername).append(".txt");
    
    //condition if username exist or taken
    if(filesys::exists(folderLoc)) {
        
        system("cls");

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b[Err: User already registered!]" << endl;
        desgnUppr();
        return;
    }

    cout << "Enter passKey: ";
    getline(cin, pass);
    system("cls");

    ofstream newUsrFile(folderLoc);

    //adds new info to file
    newUsrFile << newUsername << endl;
    newUsrFile << pass;

    newUsrFile.close();

    desgnLwr();
    cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\b[User Profile(Saved)]" << endl;
    desgnUppr();

    return;
}

//deletes a user function
void deleteUser() {

    string folderName = "keypass";
    string delUsrNam;

    cout << "Name of Account for del: ";
    getline(cin, delUsrNam);

    //conditon if user is logged and attempts to delete it self
    if(delUsrNam == usrNcompar) {

        system("cls");

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b\b[Err: Cannot delete logged user!]" << endl;
        desgnUppr();

        return;
    }

    string folderLoc = folderName.append("/").append(delUsrNam).append(".txt");

    //condtion to delete user using remove() function
    if(remove(folderLoc.c_str()) == 0) {

        system("cls");

        desgnLwr();
        cout << "\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b[Account deleted successfully!]" << endl;
        desgnUppr();
    }
    else {
        system("cls");

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b\b[Err: Account Failed to delete!]" << endl;
        desgnUppr();
    }
}

//deletes a specified container info 
void contDel() {

    string fileName = "continfo";
    string fileLoc;
    string contID;

    cout << "Scan Bacode/Enter Barcode: ";
    cin >> contID;
    system("cls");

    fileLoc = fileName.append("/").append(contID).append(".txt");

    if(remove(fileLoc.c_str()) == 0) {

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b[Container Information DELETED]" << endl;
        desgnUppr();
    }
    else {

        desgnLwr();
        cout << RED"\t\t\t\t\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\b[Container Information Failed to Delete]" << endl;
        desgnUppr();
    }
}

//A funtion to getUserName for deleteUser function
string getUsrName(string username) {

    return username;
}

//Design funtion
void desgnUppr() {

    cout << GRN"_____________________________________________________________________________________________________________________________________________________" << endl;
    cout << "\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\t\t\t\tContainer Inventory System [Version 1.0 (Alpha)]" << endl;
    cout <<"\t\t\t\t\t\t\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\b\b(c) Comsci Inc. All rights reserved." << endl << endl;

    cout << "Good Day " << usrNcompar << "! What would you like to do?" << endl << endl;
}

//design funtion
void desgnLwr() {
    cout << "________________________________________________________________________________________________________________________________________________________" << endl;
}