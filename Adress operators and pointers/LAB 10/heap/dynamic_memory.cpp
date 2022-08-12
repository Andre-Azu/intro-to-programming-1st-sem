//CLode that holds peoples details
#include <iostream>

using namespace std;


//Initialize class holding the memory locations
class user_details{
    string name;
    int admin_no;
    user_details *next;
}
int main(){
    //Creating the first storage location 
    user_details *first = new user_details();
    user_details *second = new user_details();

    // Storing the values into the memory locations defined in the function
    first -> name = "Azu";
    first -> admin_no = "12345";

    second -> name ="Melly";
    second -> admin_no ="654321";

    //To transition among the data in the storage 
    first -> next = second;
    second -> next = NULL;

    //Deleting the stored values from the storage location
    delete *first;
    delete *second; 
    
    return 0; 
}