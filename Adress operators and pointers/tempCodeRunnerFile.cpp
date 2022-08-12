#include <iostream>

using namespace std;
//On the function , point the variable to the adress of variable.
// void updateName(string *receivedName){
//     *receivedName = "Melly";
// }
int main(){ 
    string name ="Azu";
    cout << "Before using pointer and adress of " << name << endl;
    // //Give the function the adress of the variable
    // updateName(&name);
    // cout <<"Display the updated name from the function " << name << endl;
    return 0;
}