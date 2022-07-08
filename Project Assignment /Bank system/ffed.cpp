#include <fstream>
#include <iostream>


using namespace std;
int main(){
string search;
ifstream inFile;
inFile.open("users.txt");
string line;
if(!inFile){
    //looking for the file to open
    cout << "System error. (Check naming of files.)" << endl;
    exit(1);
    }
    cout << "Enter user's name: ";
    cin >>search;
    // size_t declears an unknown variable
    size_t pos;
    while(inFile.good())
    {
      getline(inFile,line); // get line from file
      pos=line.find(search); // search
      if(pos!=string::npos) // string::npos is returned if string is not found
        {   
            ofstream fout;
            fout.open("boy/doggy.txt", ios::app);
            int amount_deposited;
            cout <<"Amount to be deposited:" << endl;
            cin >> amount_deposited;
            cout <<"New " + search + " bank balance: " << amount_deposited << endl;
            fout << search << " " << amount_deposited << endl;
            fout.close();
            break;
        }
        else
        {
            cout << "User " + search + " not found" << endl;
            break;
        }
  }
}



