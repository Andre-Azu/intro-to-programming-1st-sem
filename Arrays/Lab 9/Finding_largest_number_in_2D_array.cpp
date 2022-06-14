#include <iostream>

using namespace std;

int getMaxVal(int values[4][4]){
    int highest_number = values[0][0];
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (values[row][column] > highest_number )
            {
                highest_number = values[row][column];
            }            
        }
    }
    cout << highest_number << endl;
    return highest_number;
}

int main(){
    int table_values[4][4]={{12,9,7,9},
                            {3,6,3,10},
                            {48,3,49,3},    
                            {5,-8,7,6}};
    int largest_value = getMaxVal(table_values);
    return 0;
}