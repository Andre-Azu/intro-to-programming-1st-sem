#include <iostream>
using namespace std;
int main(){
    int array_length = 0;
    cout << "How many numbers will be in the array?" << endl;
    cin >> array_length;
    int array1[]= {3,5,6,7};
    int array2[]= {3,5,6,7};
    int sum = 0;
    int tries = 0;
    for(int x=0; x < array_length; x++){
        for(int tries=array_length; tries > 0; tries--){
            cout << tries << " more numbers to be added to the parralel array." << endl;
            cout << "Enter a number to the first array." << endl;        
            cin >> array1[x];
            cout << "Enter a number to the second array." << endl;
            cin >> array2[x];
            break;
            }
            for(int a=0; a < array_length ;a++ ){
            sum = array1[x] + array2[x];
            break;
            } 
        cout << "The sum is "<< sum << endl;
        continue;
    }
    
    return 0;
}