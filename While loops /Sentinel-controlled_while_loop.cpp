#include <iostream>

using namespace std;

int main(){
    int hidden_numb = 7;
    int guessed_numb = 0;
    cout <<"Type a value: " << endl;
    cin >> guessed_numb;
    while(guessed_numb != hidden_numb){
        cout << "You have guessed wrong, try again;" <<endl;
        cin >> guessed_numb;
    }
    cout << "You have guessed it correct :) \nThe answer is " << guessed_numb << endl;
    return 0;
}