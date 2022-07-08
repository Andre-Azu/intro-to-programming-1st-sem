#include <iostream>
#include <fstream>

using namespace std;

void userPage(string userName, string userPasssword , int bankAnccount){
    int option = 0;
    cout << "What would you like to do?"<< endl;
    cout << "1.Withdraw cash." << endl;
    cout << "2.Check account balance." << endl;
    cout << "3.Change my password." << endl;
    cout << "4.Exit." << endl;
    cin >> option;
    //Withdraw cash
    if(option == 1)
    {   int bankBalance = bankAnccount;
        int amount_to_withdraw =0;
        cout <<"How much would you like to withdraw? " << endl;
        cin >> amount_to_withdraw;
        if( bankBalance < amount_to_withdraw)
        {
            cout<< "Sorry, You have insufficient funds..."<< endl;
        } 
        else
        {   
            int newAccountBalance = bankBalance- amount_to_withdraw;
            cout <<"Withdraw successful. You have withdrawn Ksh" << amount_to_withdraw << endl;
            cout <<"New Account balance: " << newAccountBalance << "Ksh. \nThank you." << endl;

        }
    }
    //Check account balance
    else if (option == 2)
    {   
        int bankBalance = bankAnccount;
        cout << "Your account balance is " << bankBalance <<"Ksh" << endl;
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
            cout <<"Enter old password: "<< endl;
            cin >> oldPass;
            string pass1 = userPasssword;
            if(oldPass == pass1)
            {
                cout <<"Enter new password: " << endl;
                cin >> newPassword1;
                cout <<"Re-enter new password: "<< endl;
                cin >> newPassword2;
                if (newPassword1 == newPassword2)
                {   
                    string client_password = newPassword2;
                    cout << "Password succesfully reset.\nNew password; " << client_password << endl;
                    break;
                }
                else
                {
                    cout << "Passwords dint match, try again..."<< endl;
                }
            }
            else
            {
                cout << "Wrong old password, Kindly try again..." << endl;
                changePassattempt++;
            }
            if(changePassattempt == 5)
            {
                cout <<"Too many attempts in changing the password..." << endl;
            }            
        }
    }
    //Exit
    else if (option == 4)
    {
        cout <<"Thank you for using E-cash services, we hope to see you again..."<< endl;
    }
    else
    {
        cout <<"Invalid choice,try again..." << endl;
    }
}
    


int main(){
    string client_name = "Skai";
    string client_password = "Kacki";
    int client_bank_account=3000;
    userPage(client_name,client_password,client_bank_account);
    return 0;
}