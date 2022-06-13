#include <iostream>
using namespace std;
int main(){
   int array_length = 0;
   cout << "How many numbers will be in the array?" << endl;
   cin >> array_length;
   int numbers_to_be_added[]= {3,5,6,7};
   int sum = 0;
   for(int x=0; x < array_length; x++){
       cout << "Enter "<< array_length << " numbers..." << endl;
       cin >> numbers_to_be_added[y];
       sum = numbers_to_be_added[y] + sum ;
   }
   cout << "The sum is "<< sum << endl;
   return 0;
}
