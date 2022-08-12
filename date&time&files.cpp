// library that allows for functions such as squareroot 
#include <cmath> 
#include <iostream>
// library that is used to manipulate the output of C++ program.
#include <iomanip>
// Library to input  files & output 
#include <fstream>

using namespace std;
int main(){
    double age=69.09998;
    ofstream fout;
    // to append data
    fout.open ("a1.txt",ios::app);
    
//Time function
#include <ctime>
// current date and time on the current system
    time_t now = time(0);
// convert now to string form
    char* date_time = ctime(&now);
// Displaying the date and time:in your case you should send it to the
    cout <<"Order placed at " << date_time << endl;


   //Filling number of spaces with a character 
    cout << setfill('m')<<setw(20)<<age<< endl ;
    return 0;
}