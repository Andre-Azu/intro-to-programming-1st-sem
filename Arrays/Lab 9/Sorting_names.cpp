// C++ Program to Print Alphabets From A To Z
#include <iostream>

using namespace std;

void sortNames(string names[]){
    //Updating the first name to be Peter
    names[0]="Peter";
    cout << names[0] << endl;
    for(int i=1 ; i < 5 ; i++){
        int j = i+1;
        char first_letter = names[i][0];
        if (first_letter < names[j][0])
        {
            string sorted_name = names[i];
            
            cout << sorted_name << endl;
        }
        
    }
    
    
}

int main(){
    string N[5]={"Owen","Tom","Alison","Abel","Prudence"};
    sortNames(N);
    return 0;
}
