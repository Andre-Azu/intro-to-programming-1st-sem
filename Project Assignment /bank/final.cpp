    #include <iostream>
    #include <fstream>


    using namespace std;
    void userPage(string userName, string userPassword, int bankAccount){
        int option = 0;
        cout << "**********************************" << endl;
        cout << "What would you like to do?"<< endl;
        cout << "1.Withdraw cash." << endl;
        cout << "2.Check account balance." << endl;
        cout << "3.Change my password." << endl;
        cout << "4.Exit." << endl;
        cout << "**********************************" << endl;
        cin >> option;
        //Withdraw cash
        if(option == 1)
        {   
            int bankBalance = bankAccount;
            int amount_to_withdraw =0;
            cout <<"*************************************************************"<< endl;
            cout <<"How much would you like to withdraw? " << endl;
            
            cin >> amount_to_withdraw;
            if( bankBalance < amount_to_withdraw)
            {
                cout <<"*************************************************************"<< endl;
                cout<< "Sorry, You have insufficient funds..."<< endl;
            } 
            else if (amount_to_withdraw < 0){
                cout <<"*************************************************************"<< endl;
                cout << "Sorry you cannot withdraw 0 Ksh or negative values." << endl;
                cout <<"*************************************************************"<< endl;
            }
            else
            {   
                int newAccountBalance = bankBalance- amount_to_withdraw;
                cout <<"*************************************************************"<< endl;
                cout <<"Withdraw successful. You have withdrawn Ksh" << amount_to_withdraw << endl;
                cout <<"New Account balance: " << newAccountBalance << "Ksh. \nThank you." << endl;
                cout <<"*************************************************************"<< endl;
                    ofstream fout;                     
                    remove("users.txt");
                    fout.open("users1.txt");
                    fout << userName << " " << userPassword << " " << newAccountBalance;
                    rename("users1.txt", "users.txt");
                    fout.close();
                    exit(1);       
            }
        }
        //Check account balance
        else if (option == 2)
        {   
            int bankBalance = bankAccount ;
            cout <<"*************************************************************"<< endl;
            cout << "Your account balance is " << bankBalance <<"Ksh" << endl;
            cout <<"*************************************************************"<< endl;
        }
        //Change password
        else if (option == 3)
        {
            int changePassattempt=0;
            while (changePassattempt <5)
            {
                string newPassword1 ="";
                string newPassword2 ="";
                string oldPass ="";
                cout <<"*************************************************************"<< endl;
                cout <<"Enter old password: "<< endl;
                cin >> oldPass;
                string pass1 = userPassword;
                if(oldPass == pass1)
                {
                    cout <<"Enter new password: " << endl;
                    cin >> newPassword1;
                    cout <<"Re-enter new password: "<< endl;
                    cin >> newPassword2;
                    if (newPassword1 == newPassword2)
                    {   
                        string client_password = newPassword2;
                        cout <<"*************************************************************"<< endl;
                        cout << "Password succesfully reset.\nNew password; " << client_password << endl;
                        cout <<"*************************************************************"<< endl;
                        break;

                    }
                    else
                    {   
                        cout <<"*************************************************************"<< endl;
                        cout << "Passwords dint match, try again..."<< endl;
                        cout <<"*************************************************************"<< endl;
                    }
                }
                else
                {
                    cout << "Wrong old password, Kindly try again..." << endl;
                    cout <<"*************************************************************"<< endl;
                    changePassattempt++;
                }
                if(changePassattempt == 5)
                {
                    cout <<"*************************************************************"<< endl;
                    cout <<"Too many attempts in changing the password..." << endl;
                    cout <<"*************************************************************"<< endl;
                }            
            }
        }
        //Exit
        else if (option == 4)
        {
            cout <<"*************************************************************"<< endl;
            cout <<"Thank you for using E-cash services, we hope to see you again..."<< endl;
            cout <<"*************************************************************"<< endl;
        }
        else
        {
            cout <<"Invalid choice,try again..." << endl;
            cout <<"*************************************************************"<< endl;
        }
    }

    void createUser(string userName1){
        //Inputting data to the text files
        ofstream output1_data;
        output1_data.open("usersDB\\"+ userName1 + ".txt");
        //Creating a new User
        string userName=userName1;
        output1_data << userName<< endl;
        string defaultUserPass = "Usr001"; 
        output1_data << defaultUserPass <<endl;
        int userBalance;
        cout <<"Enter bank balance: " << endl;
        if(userBalance < 0)
        {
            cout <<"*************************************************************"<< endl;
            cout <<"User balance cannot be less than 0 Ksh" << endl;
            
        }
        else 
        {
            cin >> userBalance;
            if(userBalance <0)
            {
                cout <<"Cannot deposit values less"
            }
            output1_data << "************************************" << endl;
            output1_data << userBalance << endl;
            cout <<"User " + userName + " has been registered successfully..."<<endl;
            cout <<"User balance: " << userBalance << " Ksh." << endl; 
            cout <<"****************************************************************************"<< endl;
            //Registering users to the txt file 
            ofstream fout2;
            fout2.open("users.txt", ios::app );
            fout2 << userName1 << " " << defaultUserPass << " " << userBalance << endl;
        }
        output1_data.close();
        exit(1);
        
    }

    //Deposit money for a client 
    int amountDeposited(string name,int bankBalance){
        ofstream fout;
        fout.open("usersBalances\\" +name+ ".txt", ios::app);
        int amount_to_be_deposited = 0;
        cout <<"*************************************************************"<< endl;
        cout << "Amount to be deposited for " + name +"'s account." << endl;
        cin >> amount_to_be_deposited;
        if(amount_to_be_deposited < 0)
        {
            cout <<"*************************************************************"<< endl;
            cout <<"Cannot deposit amounts less than 0 or negative values." << endl;
            cout <<"*************************************************************"<< endl;
        }
        else
        {
        int totalBalance = bankBalance + amount_to_be_deposited;
        cout <<"*************************************************************"<< endl;
        cout <<"New " + name + " bank balance: " << totalBalance << endl;
        cout <<"*************************************************************"<< endl;
        fout <<"*************************************************************"<< endl;
        fout <<"Username: "<<  name << "Bank balance: " << totalBalance << endl;
        exit(1);
        return amountDeposited(name,totalBalance);
        }
        fout.close();
        exit(1);
    }

    //Admin page 
    void adminPage(string adm_name , int adm_pin){
        cout <<"*************************************************************"<< endl;
        cout << "Welcome Admin." + adm_name + "\nkindly select an option:" << endl;
        int option=0; 
        cout << "1.Deposit money for a client."<< endl;
        cout << "2.Register a new client."<< endl;
        cout << "3.Change my password."<< endl;
        cout << "4.Exit." << endl;
        cin >> option;
        cout <<"*************************************************************"<< endl;
        int choicesAttempt = 0;
        while(choicesAttempt<5)
        {
            //Deposit money for the client
            if(option == 1)
            {
                string search;
                ifstream inputFile;
                inputFile.open("users.txt");
                string line;
                if(!inputFile)
                {
                    //looking for the file to open
                    cout << "System error. (Check naming of files.)" << endl;
                    exit(1);
                }
                    cout << "Enter user's name: ";
                    cin >>search;
                    // size_t declears an unknown variable
                    size_t pos;
                    //.good() checks if input file stream is ok to work with.
                while(inputFile.good())
                {
                    getline(inputFile,line); // get line from file
                    pos=line.find(search); // search
                    if(pos!=string::npos) // string::npos is returned if string is not found
                        {   
                            ifstream inData;
                            inData.open("users.txt");
                            string client_name ="";
                            string client_password ="";
                            int client_bank_account; 
                            inData >> client_name >> client_password >> client_bank_account;
                            
                        int userBankBal = client_bank_account; 
                        cout <<"Current " + search + "'s bank balance: " << client_bank_account << endl;
                        amountDeposited(search,userBankBal);
                        }
                    else
                        {
                        cout << "User " + search + " not found" << endl;
                        break;
                        }
                }
            }
            else if(option == 2)
            {
                string user ="";
                cout <<"Enter new client's name: " << endl;
                cin >> user;
                createUser(user);
            }
            else if (option == 3)
            {   
                int oldPassattempt =0;
                while ( oldPassattempt < 5)
                    {
                        int oldPassword;
                        cout << "Type old password." << endl;
                        cin >> oldPassword;
                        if (oldPassword == adm_pin)
                        {
                        int newPass;
                        cout << "Type new password." << endl;
                        cin >> newPass;
                        int newpass1;
                        cout <<"Retype new password" << endl;
                        cin >> newpass1;
                        if (newPass == newpass1)
                            {
                                ofstream fout;
                                string adminName = adm_name;
                                cout <<"Admin name" << adminName << endl;
                                remove("admin.txt");
                                fout.open("admin1.txt");
                                fout << adminName << " " <<newpass1;   
                                cout << "Password succesfully reset." << endl;
                                rename("admin1.txt", "admin.txt");
                                fout.close();
                                exit(1);                    
                            }
                        }
                    }
            }
            else if(option == 4)
            {
                cout <<"Thank you for using e-cash services..." << endl;
                exit(1);
            }
            else 
            {
                cout << "Invalid option, try again." << endl;
                cin >> option;
                choicesAttempt++; 
            }
            }
            if(choicesAttempt == 5)
            {
                cout <<"Too many option attempts, try again later..." << endl;
                exit(1);
            }
        

    }


    //Homepage
    int main(){
        int choice;
        cout << "**********************************" << endl;
        cout <<"Welcome to E-cash services" << endl;
        cout <<"Kindly select an option\n 1. Admin login \n 2. User login \n 3. Exit." << endl;
        cout << "**********************************" << endl;
        cin >> choice;
        if(choice == 1 )
        //Admin login
        {   
            ifstream id_admin;
            id_admin.open("admin.txt");
            string admName ="";
            int admPin;
            id_admin >> admName >> admPin;
            
            int inputPin;
            cout <<"*************************************************************"<< endl;
            cout << "Hello admin ,Kindly enter your 4-digit pin..."<< endl;
            
            cin >> inputPin;
            int passAttempt=0;
            while( passAttempt<3){
                if(admPin == inputPin)
                {
                    adminPage(admName,admPin);
                }
                else
                {
                    cout << "Invalid credentials, try again... " << endl;
                    cin >> inputPin;
                    passAttempt++;
                }
            }
            if(passAttempt == 3)
            {
                cout << "Too many password attempts.Try again later." << endl;
            }
        }
            
        else if(choice == 2)
        {
                            ifstream inData;
                            inData.open("users.txt");
                            string usrName ="";
                            string usrPass= "";
                            string usrPass1 ="";
                            int usrbankBal;
                            inData >> usrName >> usrPass >> usrbankBal;
                            cout <<"*************************************************************"<< endl;
                            cout << "Hello user ,Kindly enter your password..."<< endl;                            
                            cin >> usrPass1;
                            int passAttempt=0;
                            while( passAttempt<3){
                                if(usrPass == usrPass1)
                                {
                                    userPage(usrName,usrPass,usrbankBal);
                                
                                }
                                else
                                {
                                    cout << "Invalid credentials, try again... " << endl;
                                    cin >> usrPass1;
                                    passAttempt++;
                                }
                            }

            
            
            
            
        
        }
        else 
        {
            cout <<"Invalid option, please try again later.\nThank you." << endl;
        }


        return 0;
    }
