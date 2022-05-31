#include <iostream>
#include <cmath>// cmath----sqrt(n)
using namespace std;

int add(int num1,int num2){
    int sum = num1 + num2;
    return sum;
}


int main(){
    int num1 , num2;
    cout << "Input first number: " << endl;
    cin >> num1;
    cout << "Input second number: " << endl;
    cin >> num2;

    int solution = add(num1,num2) * 18;
    cout <<"Answer: "<< solution << endl;
    cout << sqrt(solution)<< endl;
return 0;
}