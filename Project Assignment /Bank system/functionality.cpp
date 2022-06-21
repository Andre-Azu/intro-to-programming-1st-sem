//Admin Dashboard 
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream input_data;
    ofstream output_data;
    input_data.open("admin.txt",ios::app);
    output_data.open("bank_details.txt", ios::app);
    string dog = "DOOOIII";
    string adm_1[3]={"Andre2221","Andre@122133", dog };
    // string pass;
    // cout << "Enter Admin username: " << endl;
    // cin >> adm_1;
    // cout << "Enter Admin password: " << endl;
    // cin >> pass;
    input_data >> adm_1[0];
    input_data >> adm_1[1];
    input_data >> adm_1[2];
    // input_data >> pass;

    // cout << "Admin: " << adm_1 << "Password: " << pass;
    output_data <<"Username: " <<  adm_1[0] <<"Password: " << adm_1[2] << endl;
    
    input_data.close();
    output_data.close();
    return 0;
}