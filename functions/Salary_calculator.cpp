#include <iostream>

using namespace std;

void calculateTaxandNet(double salary , double taxrate){
    int tax = (taxrate/100) * salary;
    int net_salary = salary - tax;
    cout << "Your tax amounted to : \t" << tax << " Ksh"<< endl;
    cout << "Your net salary amounted to : \t" << net_salary << " Ksh" << endl;

}
int main(){
    string gender = "";
    cout <<"Enter your gender;" << endl << "M / F " << endl;
    cin >> gender;
    if (gender == "MALE" || gender == "M" || gender == "m" || gender == "Male" || gender == "male"){
        int salary =0;
        cout << "What is your salary in Ksh?" << endl;
        cin >> salary;
        if (salary < 20000){
            double taxrate = 14.5;
            calculateTaxandNet(salary,taxrate);
            
        }
        else if ( salary >= 20000){
            double taxrate = 15;
            calculateTaxandNet(salary,taxrate);
        } 
        else
        cout << "Invalid amount, Kindly try again. ";
    }
    else if (gender == "F" || gender == "f" || gender == "Female" || gender == "female" || gender == "FEMALE")
    {
        int salary = 0;
        cout <<"Kindly input your salary" << endl;
        cin >> salary;
        if (salary < 25000){
            double taxrate = 13.5;
            calculateTaxandNet(salary,taxrate);
        }
        else if (salary >= 25000){
            double taxrate = 16;
            calculateTaxandNet(salary,taxrate);
        }
        else 
        cout << "Invalid amount, kindly try again later.";
    }
    
    else 
    cout << "Invalid gender, kindly choose between male or female." << endl;
    return 0;
}