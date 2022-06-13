#include <iostream>
using namespace std;

void add(int A[]){
    int sum = 0,
    for(int i=0, i<=4 ; i++){
        sum = sum+A[i];
    } 
    // cout << sum;
    A[0] =79; 

}

int main(){
    int a=10, b = 2;
    int num[5] = {3,2,3,5,61};
    add(num);//Func call arr
    cout << num[0];
    return 0;
}