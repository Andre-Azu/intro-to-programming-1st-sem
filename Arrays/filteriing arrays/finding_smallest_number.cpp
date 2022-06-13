// CODE NOT WORKING

#include <iostream>
using namespace std;
int main(){
    int A[]={24,34,8,43,56,6,8,10};
    int small = A[0];
    for(int i =0; i<=5 ;i++){
        if(A[i] < small ){
            small = A[i];
        }
    }
cout <<"Smallest is " << small << endl;

    return 0;
}