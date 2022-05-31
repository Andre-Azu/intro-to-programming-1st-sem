#include <iostream>
using namespace std;

// Declaring a global scope 
double salary= 200.32;

// Namespace is used to declare variables with similar names to have different values.
namespace BBIT{
    int cout = 15;
    int salary = 222;
}

void add(int v1, int v2){
    int sum = salary + v1 + v2;
    cout << "The sum is " << sum;
}
int main(){
    cout << "Hello world" << endl;
    // Creating a local scope
    double salary = 10;
    cout << ::salary << " To use global scope." << endl;
    cout << salary  << " To use local scope." << endl;
    
    // To use the definded namespace
    BBIT :: cout = BBIT :: cout + 10;
    cout << BBIT :: cout << " to use the new defined namespace." << endl;
    cout << BBIT :: salary << " Should view local defined scope in namespace." << endl;
}