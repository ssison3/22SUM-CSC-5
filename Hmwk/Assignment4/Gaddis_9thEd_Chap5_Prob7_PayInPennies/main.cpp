/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on July 14, 2022, 5:20 PM
 * Purpose: Calculates how much a person would earn over a period of time 
 * if his or her salary is one penny the first day and two pennies the
 * second day, and continues to double each day.
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
    double p, //Number of pennies //TestCase 3
           t; //Sum
    int d,    //Number of days
        n;    //Number
    
    //Initialize Variables
    cin>>d;
    p=0.01;
    n=1;
    t=0;
    
    //Map inputs to outputs -> The Process
    while (d<1)
    {
        cout<<"Number of days worked must be at least 1";
    }
    while (n<=d)
    {
        t=t+p;
        p*=2;
        n++;
    }
    
    //Display Results
    cout<<"Pay = $"<<fixed<<setprecision(2)<<t;
    
    //Exit stage right
    return 0;
}