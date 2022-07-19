/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Calculate the gross pay.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float payrate,//Payrate in $'s/hour
          hrswrkd,//Hours worked
          paychck;//Paycheck in $'s
    
    //Initialize Variables
    payrate=10; //cin>>
    hrswrkd=20; //cin>>
    
    //Map inputs to outputs -> The Process
    paychck=payrate*hrswrkd;
    paychck+=hrswrkd>40?payrate*(hrswrkd-40):0;
    
    //Display Results
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<paychck;
    
    //Exit stage right
    return 0;
}