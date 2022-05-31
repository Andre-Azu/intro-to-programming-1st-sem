#include <iostream>
using namespace std;
int main(){
    int student_no = 30;
    do{
        cout<< "This is student number" << student_no << endl;
        student_no = student_no + 1;
    }
    while(student_no <= 50);
    return 0;
}