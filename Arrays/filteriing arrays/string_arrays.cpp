// CODE NOT WORKING

#include <iostream>
using namespace std;
int main(){
    string names[4]={"Peter", "George", "Tim", "John"};
    double fee_bal[4] ={12000,1000,70,7000};
    string search_name;
    cout <<"Type name to be searched: " << endl;
    cin >> search_name;
    for(int i =0; i<=3 ;i++){
        if(names[i] == search_name){
            cout << names[i] << " is present" << endl;
            cout << fee_bal[i] << "Ksh is the fee balance." << endl;
            break;
        }
        else 
        {
            if(i==3)
            {
                cout << search_name << " doesnt exist" << endl;
            }
        }
    
    }


    return 0;
}