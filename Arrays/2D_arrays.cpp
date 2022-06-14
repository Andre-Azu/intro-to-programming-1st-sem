#include <iostream>

using namespace std;

int main(){
    int prog[4]={3,453,3,4};
    int itFundamentals[4] ={3,2,3,2};
    int discreteMath[4] ={20,3,23,1};
    // 2D Array
    int marks[3][4]={{29,21,22,21},
                        {3,2,4,2},
                        {44,5,33,2}
                    };
    //Displaying a certain mark from the array 
    cout << marks[2][2] << endl; 
    //2D array made of arrays as its elements
    
    //Printing objects in a 2D array
        //To access the first array
        for(int row=0 ; row < 3; row++){
            //To access the elements in the first array 
            for(int column=0 ; column < 4; column++){
                cout << marks[row][column] << endl;
            }

    }
}