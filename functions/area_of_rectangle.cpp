#include <iostream>

using namespace std;
void areaOfRec(int L , int W){
    int area = L * W;
    cout << "The area of the rectangle is " << area << endl;
}

int main(){
    int length = 0;
    int width = 0;
    cout << "Enter the length: " << endl;
    cin >> length;
    cout << "Enter the width: " << endl;
    cin >> width;
    areaOfRec(length , width);

    return 0;
}