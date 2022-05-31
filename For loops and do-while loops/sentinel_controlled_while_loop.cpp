// App that calculates how far you are from getting 100%
#include <iostream>
using namespace std;
int main(){
    int target =100;
    int marks = 0;
    cout <<"Type what mark did you get?" << endl;
    cin >> marks;
    while(marks != target ){
        cout << "Your target is: " << target <<"\nYou have " << target - marks << " marks to achive your target."<< endl;
        cout <<"What mark did you get? \t(You have to achieve 100%)" << endl;
        cin >> marks;
        
        }
        cout << "You have achieverd the target" << endl;
    return 0;
}