#include <iostream>

using namespace std;
 int main(){
    int main_Array[4][4] = {{12,9,7,9},
                            {3,6,3,10},
                            {48,3,49,3},
                            {5,-8,7,6}};
    for(int row=0; row <4; row++){
        int largest_value = main_Array[row][0];
        for(int column=0; column <4; column++){
            if(largest_value < main_Array[row][column])
            {
                largest_value = main_Array[row][column];
            }
            
        }       
    cout << largest_value << endl;
    }
 }