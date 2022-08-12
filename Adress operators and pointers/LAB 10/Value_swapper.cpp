#include <iostream>

using namespace std;
// Initialaize the swapping function
void valueSwapper(int *V1, int *V2){
    int newValue2 = *V1;
    *V1 = *V2;
    *V2 = newValue2;
    cout <<"Value 1: " << *V1 << endl;
    cout <<"Value 2: " << *V2 << endl;
}

int main(){
    int val1 = 10;
    int val2 = 20;
    valueSwapper(&val1,&val2);
    return 0;
}