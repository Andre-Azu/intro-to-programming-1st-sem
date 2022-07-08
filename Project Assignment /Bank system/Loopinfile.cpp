#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int number=3;
    string runningTotal = "Sam";
    ifstream fin;
    fin.open("dog.txt");
    while (!fin.eof()){
        fin >> number;
        
    }
    cout << "The total from the file is:" << runningTotal << endl;
    return 0; 
}