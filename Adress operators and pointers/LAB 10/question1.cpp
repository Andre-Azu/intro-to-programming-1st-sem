#include <iostream>

using namespace std;
int main(){
    // Declaring the variable of thisPointer
    int *thisPointer;
    // Initializing value 1 &2
    int val1 = 89;
    int val2;
    // Asigning the address of value 1 to the the pointer thisPointer
    thisPointer = &val1;
    //Assigning val2 item pointed by this pointer.
    val2 = *thisPointer;

    //Value printed by item pointed by thisPointer.
    cout <<"Value of item pointed by \"thisPointer\": " << *thisPointer<< endl;
    cout <<"Address stored by \"thisPointer\": " << thisPointer<< endl;
    cout <<"Address of \"thisPointer\": " << &thisPointer << endl;


    return 0;
}