#include <iostream>
#include <fstream>

using namespace std;
    ifstream input_data;
    ofstream output_data;

void createUser(string userName, string userPassword, int bankBalance){
    //Inputting data to the text files
    ifstream input1_data;
    ofstream output1_data;
    input1_data.open("user.txt",ios::app);
    output1_data.open("userBank_details.txt");

    //Register user function(Creating a new User)
    string user_1[2]={};
    int userBalance = 0;
    cout << "Enter User username: " << endl;
    cin >> user_1[0];
    input1_data >> user_1[0];
    cout << "Enter User password: " << endl;
    cin >> user_1[1];
    input1_data >> user_1[1];
    cout << "Enter user balance: " << endl;
    cin >> userBalance;
    output1_data << "Username: " << user_1[0] <<"\n"<< "Password: " << "\n"<< user_1[1]<< "Account balance: " << userBalance << endl;
    cout <<"User " << user_1[0] << " has been registered successfully..." <<endl;
    cout <<"****************************************************************************"<< endl;
    cout <<"What would you like to do..." << endl;

    

    //Depositing money into the user's account


    // Closing file input/output streams.   
    input1_data.close();
    output1_data.close();
    
}

void createAdmin(int option){
    //Inputting data to the text files
    input_data.open("admin.txt",ios::app);
    output_data.open("bank_details.txt");

    //Admin function(Creating a new admin)
    string adm_1[3]={};
    cout << "Enter Admin username: " << endl;
    cin >> adm_1[0];
    input_data >> adm_1[0];
    cout << "Enter Admin userPassword: " << endl;
    cin >> adm_1[1];
    input_data >> adm_1[1];

    //Printing it in the txt file
    output_data <<"Username: " <<  adm_1[0] << endl;
    output_data <<"userPassword: " << adm_1[1] << endl;

    // Closing file input/output streams.   
    input_data.close();
    output_data.close();
    
}

void adminPage(string adminName, string adminPassword){
    //Admin login
        string adm_1[3]= {adminName, adminPassword};
        if( adminName == adm_1[0] && adminPassword == adm_1[1])
        {
            cout << "login successful"<< endl;
            cout << "Welcome "<< adminName << "\nWhat would you like to do?(Select option)"<< endl;
            int choicesAttempt = 0;
            while (choicesAttempt <3)
            {            
            int option = 0;
            cout << "1.Deposit money for a client."<< endl;
            cout << "2.Register a new client."<< endl;
            cout << "3.Change my password."<< endl;
            cout << "4.Register new admin." << endl;
            cout << "5.Exit." << endl;
            cin >> option;
            if(option == 1){
                string search;
                ifstream inFile;
                inFile.open("users.txt");
                string line;
                if(!inFile){
                    //looking for the file to open
                    cout << "System error. (Check naming of files.)" << endl;
                    exit(1);
                    }
                    cout << "Enter user's name: ";
                    cin >>search;
                    // size_t declears an unknown variable
                    size_t pos;
                    while(inFile.good())
                    {
                    getline(inFile,line); // get line from file
                    pos=line.find(search); // search
                    if(pos!=string::npos) // string::npos is returned if string is not found
                        {   
                            ofstream fout;
                            fout.open("users.txt", ios::app);
                            int amount_deposited;
                            cout <<"Amount to be deposited:" << endl;
                            cin >> amount_deposited;
                            cout <<"New " + search + " bank balance: " << amount_deposited << endl;
                            fout << search << " " << amount_deposited << endl;
                            fout.close();
                            break;
                        }
                        else
                        {
                            cout << "User " + search + " not found" << endl;
                            break;
                        }
                }
            }
            //Register new client
                else if (option == 2){
                    string username ="";
                    string password ="";
                    int balance =0;
                    createUser(username,password,balance);
                }
                //Change password
                else if (option == 3)
                {   
                int oldPassattempt =0;
                while ( oldPassattempt < 5)
                {
                    string oldPassword = "";
                    cout << "Type old password." << endl;
                    cin >> oldPassword;
                    if (oldPassword == adm_1[1])
                    {
                    ofstream fout;
                    string newPass ="";
                    cout << "Type new password." << endl;
                    cin >> newPass;
                    string newpass1="";
                    cout <<"Retype new password" << endl;
                    cin >> newpass1;
                    fout.open("admin.txt");
                    fout << "Admin username: "<< adm_1[0] << endl;
                    if (newPass == newpass1)
                    {
                        adm_1[1] = newpass1;
                        input_data >> adm_1[1];
                        output_data << adm_1[1];
                        cout << "Password succesfully reset." << endl;
                        cout << "New password: " << adm_1[1] << endl;
                        fout << "Admin password: "<< newPass << endl;
                        
                        break;                    
                    }
                    else
                    {
                        cout << "Passwords didnt match,try again" << endl;
                    }
                    }
                    else
                    {
                        cout <<"Wrong old password." << endl;
                        oldPassattempt++;
                    }                    
                }
                if (oldPassattempt == 5)
                {
                   cout << "Too many wrong password attempts; please try again later..." << endl;

                }
            }
            else if (option == 4)
            {
            int adm_no =1;      
            createAdmin(adm_no);
            }
            
            else if (option == 5)
            {
                cout << "Thanks for using E-Cash. We hope to see you again..." << endl;
                break;
            }
            
}
}
}
    
int main(){
    //Inputting data to the text files
    ifstream input_data;
    ofstream output_data;
    input_data.open("admin.txt",ios::app);
    output_data.open("bank_details.txt", ios::app);
    //Homepage
    int option;
    cout << "****Welcome to E-cash services****" << endl;
    cout << "1. Admin user login." << endl;
    cout << "2. Normal user login." << endl;
    cout << "Choose an option to proceed: " << endl;
    cin >> option;
    if(option == 1){
    string adminUsername ="Azu";
    string adminPassword ="Pass123";
    string adm_login="";
    string adm_login_pass="";
    cout << "Welcome to Admin login page...\nEnter your admin username: " << endl;
    cin >> adm_login;
    cout <<"Enter your Admin password: "<< endl;
    cin >> adm_login_pass;
    if(adminUsername != adm_login && adminPassword != adm_login_pass){
        cout <<"Invalid Credentials, Please try again later..." << endl;  
    }
        else
        {
            adminPage(adminUsername,adminPassword);    
        }
        
    }
    else if (option ==  2)
    {
        cout << "Welcome User" << endl;
        cout << "You will need to log in first." << endl;
        cout << "Enter your username" << endl;
        //ADD LOGIN FUNCTIONALITY
    }
    else
    {
        cout << "Kindly choose a correct option then try again. Thank you." << endl;
    }
    // Closing file input/output streams.   
    input_data.close();
    output_data.close();
    return 0;
}