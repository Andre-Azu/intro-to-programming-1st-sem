#include <iostream>
using namespace std;
int main(){
    // Array syntax is Datatype Arrayname[arraysize];
    int num[5];// to declare an array of size 5
    // intputing data in a array per line
    num[2] = 3;
    num[4] = 7; 
    // inputing of data into an array as a list
    double fees[] = {123.2 , 1282.3};
    string names[] = {"Sam", "Azu"};
    char letters[] = {'a', '*', '\0'};
    //Changing of data in an array
    names[1] = "Joan";
    // inputting data into the array via terminal 
    cout << "Enter fee value:" << endl;
    cin >> fees[1];
    // Adding elements in an array 
    int sum = num[2] + num[4];
    //Outputting elements in an array
    cout << sum << endl;
    return 0;
    

}