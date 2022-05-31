#include <iostream>
using namespace std;

int main(){
    // for(initialize counter ; condition ; counter update)
    for (int counter = 1 ; counter < 100 ; counter++){
        cout << "I am repetition no: " << counter << endl;
    }
    for (int counter = 100 ; counter >= 0 ; counter--){
        cout << "I am decrease no: " << counter << endl;
    }
}