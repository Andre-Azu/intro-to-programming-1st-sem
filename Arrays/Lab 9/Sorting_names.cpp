// C++ Program to Print Alphabets From A To Z
#include <iostream>

using namespace std;

void sortNames(string names[]){
    //Updating the first name to be Peter
    names[0]="Peter";
    string n;
    cout << names[0] << endl;
    for(int k =0; k < 5 ;k++){
    for(int i=k ; i < 5 ; i++){
        // char first_letter = names[k][0];
        // if (first_letter < names[i][0])
        // {
        //     string sorted_name = names[k];
            
        //     cout << sorted_name << endl;
        // }
        if(names[k] > names[i])
    {
        n = names[k];
        names[k] = names[i];
        names[i] = n;
        cout << names[i] << endl;
    }          
    }
    }
    
    
}

int main(){
    string N[5]={"Owen","Tom","Alison","Abel","Prudence"};
    sortNames(N);
    return 0;
}
