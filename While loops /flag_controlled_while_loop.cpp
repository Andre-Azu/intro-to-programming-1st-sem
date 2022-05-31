#include <iostream>

using namespace std;
int main(){
    int number;
    bool isCorrect = true;
    cout << "Type a number: " << endl;
    cin >> number ;

    if (number < 18){
        isCorrect = false;
    }
    while(isCorrect){
        cout << "Executes indefinatley" << endl;
        isCorrect = false;
    }
    return 0;
}