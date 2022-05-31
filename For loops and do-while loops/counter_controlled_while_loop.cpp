// App that calculates how far you are from getting 100%
#include <iostream>
using namespace std;
int main(){
    int target =100;
    int marks = 0;
    while(marks != target ){
        cout << "Your target is: " << target <<"\nYou have " << target - marks << " marks to achive your target."<< endl;
        marks = marks + 2;
        
        }
    return 0;
}