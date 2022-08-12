#include <iostream>

using namespace std;
string fullname(string *name1 ,string *name2){
    string full_name = *name1 + *name2;
    
    return full_name;
}
int main(){
    string fname = "Karl";
    string lname = "Luyima";
    cout <<"Enter your first name: " << endl;
    cin >> fname;
    cout << "Enter your last name: " << endl;
    cin >> lname;
    fullname(&fname, &lname);
    cout << "The full names are" << fullname << endl;
    return 0;
}