#include <iostream>

using namespace std;

int result(int v1,int v2){
    int a1 = v1 * v2 ;
    return a1;
}

int main(){
    int value1 = 0;
    int value2 = 0;
    cout << "Input first value: " << endl;
    cin >> value1;
    cout << "Input second value: " << endl;
    cin >> value2;
    int a2 = result(value1 , value2);
    cout << "Your answer is " << a2 +10 << endl;
    return 0;
}