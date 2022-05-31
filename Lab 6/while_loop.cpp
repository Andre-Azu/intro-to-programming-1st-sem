// App that sets targets untill you get 100%
#include <iostream>
using namespace std;
int main(){
    int marks =0;
    int day = 0;
    cout <<"What is your target for today?" << endl;
    cin >> marks;
    while(marks <= 100 ){
        cout << "Your target is " << marks <<" in the next " << day << " days."<< endl;
        marks = marks + 2;
        day++;
        }
    return 0;
}