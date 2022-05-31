#include <iostream>

using namespace std;
int main(){
int age = 0;
cout << "How old are you?" << endl ;
cin >> age ;


if (age < 0)
{
    cout << "Kindly enter a valid age number." << endl;
    cin >> age;
}
    if (age < 16){
    cout << "You cannot get a drivers licence because you are too young." << endl;
}
    else {
    cout << "You are eligible for a licence."<< endl ;
}

return 0;
}