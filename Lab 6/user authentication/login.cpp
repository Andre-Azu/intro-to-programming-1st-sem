#include <iostream>
using namespace std;
int main(){
    string user1;   
    cout <<"Input your username;" << endl;
    cin >> user1;
    
    // Password 
    cout << "Enter your password: " << endl;
    string password = "Sam123";
    string input_password = "";
    cin >> input_password;
   if (password != input_password)
   {
       cout << "Incorrect password " << endl;
   }
   else
   {
       cout <<"Correct password" << endl;
   }
   
    return 0;
    
}
