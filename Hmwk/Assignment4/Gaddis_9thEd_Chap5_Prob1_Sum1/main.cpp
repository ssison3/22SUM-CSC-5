/* 
 * File:   main.cpp
 * Author: Stephan S. Sison
 * Created on June 30, 2022, 10:15 PM
 * Purpose:
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
    int val,
        num,
        sum;
    
    //Initialize Variables
    sum=0;
    
    //Map inputs to outputs -> The Process
    do
    {
        cin>>val;
    }
    while (val<0);
    for(num=1;num<=val;num++)
    {
       sum+=num; 
    }
    
    //Display Results
    cout<<"Sum = "<<sum;
    
    //Exit stage right
    return 0;
}