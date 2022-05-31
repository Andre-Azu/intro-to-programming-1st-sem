#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream data_in;
    ofstream data_out;
    string new_member = "Yes";
    while (new_member == "Yes")
    {
        string name ="";
        cout << "What is your name?" << endl;
        cin >> name;
        cout << "Is there a new member? \n Yes or No?" << endl;
        cin >> new_member;
        if(new_member == "Yes"){
            new_member = "Yes";
        }
        else{
            new_member = "No";
        }
    }
    
}