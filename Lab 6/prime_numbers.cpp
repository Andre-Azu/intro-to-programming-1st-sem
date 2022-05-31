#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int digit1,digit2;
    int fnd=0,ctr=0;
    cout << "Find prime number within a range: " << endl;
           cout << "First number: ";
           cin >> digit1;
           cout << "Last number: " << endl;
           cin>> digit2;
           cout << "The prime numbers between "<<digit1<<" and "<<digit2<<" are:"<<endl;
           for(int i=digit1;i<=digit2;i++){
           for(int j=2;j<=sqrt(i);j++){
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                cout<<i<<" " << endl;
                }
               ctr=0;
       };
    cout<<"Total prime numbers between "<<digit1<<" to "<<digit2<<" are: "<<fnd<<endl;
return 0;
}