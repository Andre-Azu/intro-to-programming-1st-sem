#include <iostream>
#include <fstream>

using namespace std;

string fullnameGenerator(string fName , string lName){
    cout <<"Enter first name: "<< endl;
    cin >> fName;
    cout << "Enter last name: " << endl;
    cin >> lName;
    
    string fullname = fName + lName;

    return fullname;

    
}


int main(){
    string &girl1 = "Mell";
    string girl2 = "Abby";
    *girl1 = &girl1
    string new_name = fullnameGenerator(girl1,girl2);
    cout << new_name;

    return 0;
}