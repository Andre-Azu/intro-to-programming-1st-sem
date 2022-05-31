// A system that calculates salary according to hours worked.
#include <iostream>

using namespace std;
int main(){
    int salary = 10000;
    int hrs_worked;
    int underwork = salary - (salary * 0.1 );
    int overtime = salary + (salary * 0.1 );
    cout << "Input the number of hours youve worked: " << endl;
    cin >> hrs_worked;
    switch(hrs_worked > 160){
        case true:
        cout << "Your salary is " << overtime << " Ksh " << endl;
        break;
        case false:
        cout << "Your salary is " << underwork << " Ksh " << endl;
        break;
       
    }
    return 0;
}