#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream fout;
    fout.open("Allocation.txt", ios :: app);
    
    string name;
    cout << "Hello,\n What is your name?" << endl;
    cin >> name ;
    int age; 
    cout << "How old are you?" << endl;
    cin >> age;
    if(age < 0){
        cout << " Age cannot be less than 0" << endl;
    }
    else {if(age >=0 && age < 10){
        cout << name << " kindly go to the playground :)" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "playground" << endl;
    }
    else if (age >= 10 && age < 17 ){
        cout << name << " kindly go to the teens class" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "Teens Class" << endl;
    }
    else if (age >= 17 && age <23 ){
        cout << name << " kindly go for mentorship" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "Mentorship" << endl;
    }
    else if (age >= 23 && age <30 ){
        cout << name << " kindly go for counselling" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "Counselling" << endl;
    }
    else if ( age >=30 && age < 70) {
        cout << name << " kindly go to maisha programme" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "Maisha" << endl;
    }
    else if (age > 70 && age < 100 ){
        cout << " kindly go to elders corner" << endl;
        fout << name << " \t\t\t\t " << age << " " << "\t\t" << "Elders corner" << endl;
    }
    else{
        cout << name << " anint no way you are older than 100!!!" << endl;
    }
    }
    return 0;
}