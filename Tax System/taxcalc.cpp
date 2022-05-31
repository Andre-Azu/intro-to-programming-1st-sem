#include <iostream>

using namespace std;
int main(){
    char gender;
        
    // Inputting gender 
    cout << "What is your gender? \n\t M \t F"<< endl;
    cin >> gender;
    int salary;
    switch(gender){
        case 'm':
        case 'M':
        cout <<"Hello Mr, \nHow much do you earn?" << endl;
        cin >> salary;
        if(salary < 2000){
            double tax = salary * 0.145;
            cout << "Your gross earning is" << salary << endl;
            cout << "Your tax is : " << tax << endl;
            cout << "Your net earning is" << salary - tax << endl;
        }
        else if (salary >= 2000){
            double tax = salary * 0.15;
            cout << "Your gross earning is" << salary << " Ksh"<< endl;
            cout << "Your tax is : " << tax << " Ksh"<< endl;
            cout << "Your net earning is " << salary - tax << " Ksh"<< endl;
        break;
        }
        case 'f':
        case 'F' :
        cout <<" How much do you earn?" << endl;
        cin >> salary;
        if(salary < 2500){
            double tax = salary * 0.135;
            cout << "Your gross earning is " << salary << " Ksh"<< endl;
            cout << "Your tax is : " << tax << " Ksh" << endl;
            cout << "Your net earning is " << salary - tax << " Ksh" << endl;
        }
        else if (salary >= 2500){
            double tax = salary * 0.16;
            cout << "Hello Mrs \nYour gross earning is" << salary << endl;
            cout << "Your tax is : " << tax << endl;
            cout << "Your net earning is " << salary - tax << endl;
        break;
        }
        case 'A' ... 'E':
        case 'a' ... 'e':
        case 'G' ... 'L':
        case 'g' ... 'l':
        case 'N' ... 'Z':
        case 'n' ... 'z':
        cout << "Kindly input a valid gender; either \"M\" or \"F\" " <<endl;
        }
    return 0;
}
