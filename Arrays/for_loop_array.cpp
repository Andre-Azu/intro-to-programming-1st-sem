#include <iostream>

using namespace std;
int main(){
    int fees[]={500,300,22,123,123,423,1211};
    string names[] = {"Sam", "Azu", "Jim", "Cat", "June", "Dogs", "Cat"};

    cout << "Input a new name" << endl;
    

    //Couter controlled loop 
    for(int p = 0; p <=7; p=p+1){
        // display arrays
        cin >> names[p];
        cout << names[p] << endl;
    }
  
   



    return 0;
}