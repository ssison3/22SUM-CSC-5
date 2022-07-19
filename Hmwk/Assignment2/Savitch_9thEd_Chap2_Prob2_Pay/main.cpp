/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose: Takes an employee’s previous annual salary as input, and 
 * outputs the amount of retroactive pay due the employee, the new 
 * annual salary, and the new monthly salary.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float payincr=0.076;
const int m=12;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float nsal,      //New Salary
          nrtrop,    //New Retroactive pay
          rtrop,     //Retroactive pay
          asal,      //Annual Salary
          msal;      //Month Salary
    
    //Initialize Variables
    asal=2000;  //cin>>
    
    //Map inputs to outputs -> The Process
    nrtrop=asal*payincr;     //Annual salary with retroactive pay  
    nsal=nrtrop+asal;        //Getting new annual salary
    rtrop=nrtrop/2;          //Getting Retroactive pay
    msal=nsal/m;             //Getting new monthly Salary
    
    //Display Results
    cout<<"Input previous annual salary."<<endl;
    cout<<fixed<<setprecision(2)<<setw(7)
        <<"Retroactive pay    = $  "<<rtrop<<endl;
    cout<<"New annual salary  = $"<<setw(3)<<nsal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<msal;
    
    //Exit stage right
    return 0;
}