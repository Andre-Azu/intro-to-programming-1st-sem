// A system that counts down the number of cups to br drank in a day 
# include <iostream>
using namespace std;
int main(){
    for(int no_of_cups = 1 ; no_of_cups < 9 ; no_of_cups+=2){
        int remaining_cups = 8 - no_of_cups;
        cout << "There are " << remaining_cups << " cups of water left" << endl;
        
    }
    return 0;
}