#include <iostream>

using namespace std;
int main(){
    // Finding the adress of the variable 5
    int age = 5;
    cout << &age << endl;

    //Accessing the content of the variable via the adress
    //Asteric is used to declare a pointer
    int *p;
    p = &age;
    cout <<"With first pointer "<< *p << endl;
    cout <<"Without pointer "<< p << endl;
    cout <<"Display age "<< age << endl;
    cout <<"Display age with adress of "<< &age << endl;
    age = age + 2;
    cout <<"Display age second time "<< age << endl;
    //Manipulating the pointer 
    *p = *p + 2;
    cout << "After manipulation " << *p << endl;
    cout <<"Display age after manipulation "<< age << endl;
    cout <<"Display age after manipulation with adress of "<< &age << endl;

    return 0;
}