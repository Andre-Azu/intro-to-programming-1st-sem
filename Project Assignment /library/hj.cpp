#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream fout;
    fout.open("ffj.txt");
    string sa="Asma";
    cout << sa << endl;
    fout << sa ;
    
    rename("ffj.txt", "Sat.txt");
    return 0;

        /*ofstream fout;
        string adminName = adm_name;
        cout <<"Admin name" << adminName << endl;
        //remove("admin.txt");
        fout.open("admin1.txt");

        fout << adminName << newpass1;   
        cout << "Password succesfully reset." << endl;
        //rename("admin1.txt", "admin.txt");
        fout.close();*/


}