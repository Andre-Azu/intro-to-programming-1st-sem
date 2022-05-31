#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
int main(){
    // Getting the data for the menu
    ifstream data_in; 
    // outputing data to the reciept
    ofstream data_out;
    // getting data for the prices
    ifstream data_in1;
    // getting data from cashier
    ifstream data_in2;
    
// current date and time on the current system
    time_t now = time(0);
// convert now to string form
    char* date_time = ctime(&now);


    //open the files that will store the input values
    data_in.open("menu1.txt");
    data_in1.open("prices.txt");
    data_in2.open("cashier.txt");
    
    
    //open a file that stores output values 
    data_out.open("receipt1.txt",ios :: app);

    //Create variables to store the values of the menu.
    string item1;
    data_in >> item1;
    string item2;
    data_in >> item2;
    string item3;
    data_in >> item3;
    string item4;
    data_in >> item4;
    string item5;
    data_in >> item5;

    // Variables to store the prices
    int price1;
    data_in1 >>price1;
    int price2;
    data_in1 >>price2;
    int price3;
    data_in1 >>price3;
    int price4;
    data_in1 >>price4;
    int price5;
    data_in1 >>price5;

    

    //getting data for the cashier
    string name1;
    getline(data_in2,name1);
    

// Outputting the data onto the terminal
    cout <<"***************** WELCOME TO STRATH CAFE***********" << endl;
    cout <<"----------------------------------------------------" << endl;
    cout << "\t\t"<<"Menu" << "\t\t" << "price"<< "\t\t" << endl;
    cout <<"\t\t\t1.\t" << item1 << "\t\t" << price1<<" Ksh"<< endl ; 
    cout <<"\t\t\t2.\t" << item2 << "\t\t" << price2<<" Ksh"<< endl ; 
    cout <<"\t\t\t3.\t" << item3 << "\t" << price3<<" Ksh"<<  endl;
    cout <<"\t\t\t4.\t" << item4 << "\t\t" << price4<<" Ksh"<< endl;
    cout <<"\t\t\t5.\t" << item5 << "\t\t" << price5<<" Ksh"<< endl;
    cout <<"----------------------------------------------------" << endl;
// inputing the quantity ordered
    int Q1;
    cout << "How many plates of " << item1 << "?" << endl ;
    cin >>Q1;
    int Q2;
    cout << "How many " << item2 <<"'s?" << endl;
    cin >>Q2;
    int Q3;
    cout << "How many peices of " << item3 <<"?" << endl;
    cin >>Q3;
    int Q4;
    cout << "How many kg's of " << item4 <<"'s?" <<endl;
    cin >>Q4;
    int Q5;
    cout << "How many liters of " << item5 << "?" << endl;
    cin >>Q5;

// Total prices
    int Tot1 = price1 * Q1;
    int Tot2 = price2 * Q2;
    int Tot3 = price3 * Q3;
    int Tot4 = price4 * Q4;
    int Tot5 = price5 * Q5;
    int total_price = Tot1 + Tot2 + Tot3 + Tot4 + Tot5;

// Outputting the data into the file 
    data_out <<"***************** WELCOME TO STRATH CAFE***********" << endl;
    data_out <<"----------------------------------------------------" << endl;
    data_out << "\t\t"<<"Menu" << "\t\t" << "price"<< "\t\t" << endl;
    data_out <<"\t\t\t1.\t" << item1 << "\t\t" << price1<<" Ksh"<< endl ; 
    data_out <<"\t\t\t2.\t" << item2 << "\t\t" << price2<<" Ksh"<< endl ; 
    data_out <<"\t\t\t3.\t" << item3 << "\t" << price3<<" Ksh"<<  endl;
    data_out <<"\t\t\t4.\t" << item4 << "\t\t" << price4<<" Ksh"<< endl;
    data_out <<"\t\t\t5.\t" << item5 << "\t\t" << price5<<" Ksh"<< endl;
    data_out <<"----------------------------------------------------" << endl;
    data_out << "\t\t"<<"Order Summary" << "\t\t" << "Quantity"<< "\t\t" << "Total" << endl;
    data_out <<"\t\t\t1.\t" << item1 << "\t\t" << Q1<< " Ksh"<< "\t\t" << Tot1<< endl ; 
    data_out <<"\t\t\t2.\t" << item2 << "\t\t" <<  Q2<<" Ksh" <<"\t\t" << Tot2<< endl ; 
    data_out <<"\t\t\t3.\t" << item3 << "\t" << Q3<<" Ksh"<< "\t\t" << Tot3 << endl;
    data_out <<"\t\t\t4.\t" << item4 << "\t\t" << Q4<<" Ksh"<< "\t\t" << Tot4 << endl;
    data_out <<"\t\t\t5.\t" << item5 << "\t\t" << Q5<<" Ksh"<<"\t\t" <<  Tot5 << endl;

    
    
   




// Outputting data into the terminal
/*    cout << "\t\t"<<"Order summary" << "\t\t" << "price"<< "\t\t" << "Quantity" << "\t\t"<< "Total amount" << endl;
    cout <<"\t\t\t1.\t" << item1 << "\t\t" << price1<<" Ksh"<< "\t\t\t" << Q1 << "\t\t\t" << price1 * Q1 <<" Ksh"<< endl;
    cout <<"\t\t\t2.\t" << item2 << "\t\t" << price2<<" Ksh"<< "\t\t\t" << Q2 << "\t\t\t" << price2 * Q2 << " Ksh"<< endl;
    cout <<"\t\t\t3.\t" << item3 << "\t" << price3<<" Ksh"<< "\t\t\t" << Q3 << "\t\t\t" << price3 * Q3 <<" Ksh" << endl;
    cout <<"\t\t\t4.\t" << item4 << "\t\t" << price4<<" Ksh"<< "\t\t\t" << Q4 << "\t\t\t" << price4 * Q4 <<" Ksh"<< endl;
    cout <<"\t\t\t5.\t" << item5 << "\t\t" << price5<<" Ksh"<< "\t\t\t" << Q5 << "\t\t\t" << price5 * Q5 <<" Ksh"<< endl; */

// Display the totals
    data_out << "Your total order is  " << total_price << endl ;
// Displaying the cashier name
    data_out <<"You were served by: " << name1 << endl;
// Displaying the date and time:in your case you should send it to the
    data_out <<"Order placed at " << date_time << endl;

// Display the totals
    cout << "Your total order is  " << total_price <<" Ksh "<< endl ;
// Displaying the cashier name
    cout <<"You were served by: " << name1 << endl;
// Displaying the date and time:in your case you should send it to the
    cout <<"Order placed at " << date_time << endl;

    

    data_in.close();
    data_out.close();
    return 0;
}