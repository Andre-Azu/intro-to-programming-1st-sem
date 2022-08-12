#include <iostream>

using namespace std;
//On the function , point the variable to the adress of variable.
void updateName(string &receivedName){
    cout << "Recieved name1   " << &receivedName << endl;
    //*receivedName = "Melly";
    cout <<"Updated name is: "<< receivedName<< endl;
    //cout <<"Updated name is1: "<< *receivedName<< endl;
    cout <<"Updated name is2: "<< &receivedName<< endl;

}
int main(){ 
    string name ="Azu";
    cout << "Before using pointer and address of " << name << endl;
    //Give the function the adress of the variable
    updateName(name);
    cout <<"Display the updated name from the function " << name << endl;
    cout <<"Updated name is: "<< &name << endl;


    return 0;
}