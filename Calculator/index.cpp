#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num1 , num2;
    cout << "Input first number: " << endl;
    cin >> num1;
    cout << "Input second number: " << endl;
    cin >> num2;

    // Add
    int sum = num1 + num2;
    cout << "Sum is " << sum << endl;
    // Subtract 
    int diff = num2 - num1;
    cout << "Difference is " << diff << endl;
    // Multiply 
    int prod = num1 * num2;
    cout << "Product is " << prod << endl;
    // division
    int div = num1 * num2;
    cout << "Division is " << div << endl;
return 0;
}