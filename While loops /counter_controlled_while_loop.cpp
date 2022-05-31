//This while loop enables the user to excecute statements a certain number of times.
#include <iostream>

using namespace std;
int main(){
    // initialize the number of times you want the loop to repeat
    int counter =0;
    int input_no =0;
    string statement = "";
    cout << "What do you want to print?" << endl;
    cin >> statement;
    cout <<"How many times to you want to print? "<< endl;
    cin >> input_no;

    // State the condition that the while loop will follow

    while(counter != input_no){
        cout << statement << endl;
        counter = counter + 1;
    }
    cout << "You have printed the output " << input_no << " times." << endl;
    return 0;
}