#include <iostream>
using namespace std;

int main(){
    int value1 =0;
    int value2 =0;
    int value3 =0;
    cout <<"Enter value 1: " << endl;
    cin >> value1;
    cout<<"Enter value 2: " << endl;
    cin>> value2;
    cout << "Enter value 3: " << endl;
    cin >> value3;
    if(value1 > value2 && value1 > value3){
        cout << value1 << " is the largest number."<< endl;
          if (value2 > value3 ){
         cout << value2 << " is the second largest number. "<< endl;
         cout << value3 << " is the smallest number."<< endl;
         }
         else{
         cout << value3 << " is the second largest number." <<endl;
         cout << value2 << " is the smallest number." << endl;
    }
    }
    else if (value2 > value1 && value2 > value3){
    cout << value2 << " is the greatest number." << endl;
    if (value1 > value3){
        cout << value1 << " is the second largest number." << endl;
        cout << value3 << " is the smallest number." << endl;
    }
    else {
        cout << value3 << " is the second largest number." << endl;
        cout << value1 <<  " is the smallest numeber." << endl;
    }
    }
    else {
        cout << value3 << " is the largest number." << endl;
        if(value2 > value1){
            cout << value2 << " is the second largest number."<< endl;
            cout << value1 << " is the smallest number." << endl;
        }
        else
        {
            cout << value1 << " is the second largest number." << endl;
            cout << value2 << " is the smallest number." << endl;
        }
        
    }
}
   
