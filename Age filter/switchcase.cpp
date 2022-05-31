#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Type in your age: ";
    cin >> age;
// Switch case 
switch(age){
    case 5 ... 10:
    cout << "Playground" << endl;
    break;
    case 11:
    cout << "Kitchen" << endl;
    break;
    case 22 :
    cout << "School" << endl;
    break;
    default :
    cout <<"Not a valid selection" << endl;
    break;
    return 0;
}
    char grade;
    cout << "Input your grade" << endl;
    cin >> grade;
    switch(grade){
    case 'a' ... 'c':
    case 'A' ... 'C':
    cout << " Pass" << endl;
    break;
    case 'D' ... 'E':
    cout << "Better luck next time" << endl;
    break;
    default: 
    cout << "Enter a valid grade!!";
    }
}